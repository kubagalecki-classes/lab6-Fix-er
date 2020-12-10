#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
 std::vector< char > ret;
 ret.reserve(people.size());
 std::for_each(people.rbegin(), people.rend(),[&](auto& it ) {
     it.birthday();    });
 std::transform(people.rbegin(), people.rend(), ret.rend(),[&](auto& it) {
   ret.push_back(it.isMonster() ? 'n' : 'y');});
    return ret;
}

