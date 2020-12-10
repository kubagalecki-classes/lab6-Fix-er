#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
 std::vector< char > ret;
 ret.reserve(people.size());
 //std::for_each(people.rbegin(), people.rend(),[&](int &i) {
   //    i->birthday();    });
 std::transform(people.rbegin(), people.rend(), ret.rbegin(),[&](const auto it) {
   ret.push_back(it.isMonster() ? 'n' : 'y');});
    return ret;
}

