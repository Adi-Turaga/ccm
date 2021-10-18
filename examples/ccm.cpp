#include <iostream>
#include "../ccm/ccm.hpp"

/* This is just a quick example of using the ccm.hpp header. It features (most) of
 the functions that are contained in cmath, with a few exceptions. */

int main() {
    std::cout << math::ccm.pow(5, 5) << "\n"; //like cmath's pow(5, 5)
    std::cout << math::ccm.sqrt(16) << "\n"; // self explanatory
    std::cout << math::ccm.trunc(5.5) << "\n";
    std::cout << math::ccm.floor(8.99999) << "\n";
    std::cout << math::ccm.ceil(8.999999) << "\n";
    std::cout << math::ccm.round(4.564775647382346372834637746543) << "\n";
    std::cout << math::ccm.sin(30) << "\n";
    std::cout << math::ccm.cos(30) << "\n";
    std::cout << math::ccm.tan(30) << "\n";
    std::cout << math::ccm.max(6, 10) << "\n";
    std::cout << math::ccm.abs(-6) << "\n";
}
