#include <iostream>
#include "../ccm/geometry.hpp"

int main() {
    std::cout << math::geo.area(5, 4) << "\n"; // finds area of rectangle, parallelogram, etc.
    std::cout << math::geo.triangle_area(5, 4) << "\n"; // self-explanatory
    std::cout << math::geo.trapezoid_area(5, 4, 3) << "\n";
    std::cout << math::geo.pythag(3, 4) << "\n"; // find hypotenuse (pythagorean theorem)
    std::cout << math::geo.cone(5, 3) << "\n"; // volume of cone
    std::cout << math::geo.cone(5, 3, false) << "\n"; // surface area of cone
}