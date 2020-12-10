#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret(people.size());
    std::for_each(people.begin(), people.end(), [&](auto& it) { return it.birthday(); });
    std::transform(people.cbegin(), people.cend(), ret.rbegin(), [&]( auto& it) {
        return it.isMonster() ? 'n' : 'y';
    });
    return ret;
}
