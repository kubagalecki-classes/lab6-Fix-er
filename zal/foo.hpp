#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
 std::vector< char > ret;
 ret.reserve(people.size());
 std::for_each(people.begin(), people.end(),[](const auto& it) {
       it->birthday();    });
 //std::transform(people.begin(), people.end(), ret.begin(),[&](auto it = people.rbegin()) {
   // ret.push_back(it.isMonster() ? 'n' : 'y');});
    return ret;
}

