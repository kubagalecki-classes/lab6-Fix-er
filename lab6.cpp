#include "make_random_vector.hpp"
#include <iostream>
int main()
{
    puts("Hello, World!");
    auto r = make_random_vector(5, 0, 10);
    for (auto b : r) {
        std::cout << b << std::endl;
    }
    std::sort(r.begin(), r.end());
    std::cout << "sortowanie" << '\n';
    for (auto a : r) {
        std::cout << a << '\n';
    }
    int num_items2 = std::count(r.begin(), r.end(), 7);
    std::cout << "number: "
              << "7"
              << " count: " << num_items2 << '\n';
    int num_items3 = std::count_if(r.begin(), r.end(), [](int i) { return i >= 7; });
    std::cout << "number greater than 7: "

              << " count: " << num_items3 << '\n';
    std::sort(r.begin(), r.end(), [](int a, int b) { return a > b; });
    for (auto a : r) {
        std::cout << a << " ";
    }
}
