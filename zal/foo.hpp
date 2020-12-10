#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
 std::vector< char > ret;
  ret.reserve(people.size());
   transform(people.begin(), people.end(), ret.begin(),for_each(people.begin(), people.end(),[&](auto it) {
        it->birthday();
        ret.push_back(it->isMonster() ? 'n' : 'y');
    });
    return ret;
}

