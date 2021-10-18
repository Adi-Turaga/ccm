# CCM: An alternative C++ math library 
This README is basically about the CCM library
# Overview
**CCM** is an alternative to the reliable "cmath" library in C++. It features, basically, a class around cmath functions. For example:
  ```cpp
  #include <iostream>
  #include <ccm/ccm.hpp> // the main library
  
  int main() {
      math::ccm.pow(5); // basically pow(5, 2) in cmath
      math::ccm.sqrt(4); // basically sqrt(4) in cmath
  }
  ```
  Along with the ccm.hpp header, there is an additional header for basic geometric formulas (for shapes)
  
  ```cpp
  #include <iostream>
  #include <ccm/geometry.hpp>
  
  int main() {
      math::geo.area(5, 3); // calculates the area of a square/rectangle/parallelogram with a height of 5 and a width of 3
      math::geo.sphere(4); // calculates the volume of a sphere with a radius of 4 units
  }
  ```
  # Contributing
  Contributing is welcome, as this library does need some work. If you see bugs or want to add a new feature, please take the necessary steps to do so. 
  
  # To Install
  * *For Linux/Unix users*: Execute the *linux_install.sh* file (first make it executable)
  * *For Windows users*: Place the *ccm* directory wherever header files are usually located
