#pragma once

#include "ccm.hpp"

#define PI 3.141592653589
#define check_bool if(volume) goto volume; else goto sa //check if bool arg in shapes' volume/surface area is true or false
#define var const T&
#define using_math using namespace math;

using_math

template<typename T>
struct basic_geo {
    T area(const T& length, const T& width) const { return length * width; }

    T triangle_area(const T& base, const T& height) const { return (base * height) / 2; }

    T trapezoid_area(const T& b1, const T& b2, const T& h) const { return ((b1 + b2) * h) / 2; }

    T ellipse(const T& a, const T& b) { return PI * a * b; }

    template<typename...Args>
    T perim(Args...args) { return (args + ...); }

    T circum(const T& radius) const { return 2 * PI * radius; }

    T circle_area(const T& radius) const { return PI * math::ccm.pow(radius); }

    T pythag(const T& leg1, const T& leg2) const { return std::hypot(leg1, leg2); }

    T get_leg(const T& leg1, const T& hyp) const { return math::ccm.sqrt(math::ccm.pow(hyp) - math::ccm.pow(leg1)); }

    /* 

    * volumes and surface area for the following shapes respectively: rectangular prism, cone, sphere, cylinder,
    rectangular pyramid, triangular pyramid, tetrahedron, triangular prism, ellipsoid *

    * the "check_bool" macro checks whether the volume boolean (see below functions) are true of false. If true
    (or no arg is passed in), then the function will calculate the volume of that shape. If the arg is false
    (if false, you have to pass the arg in), then the function will calculate the surface area. It shows a
    good use for goto, which keeps the code consice and, ironically, easy to read * 
    
    */

    T rectprism(const T& l, const T& w, const T& h, bool volume = true) const {
        check_bool; 
        volume: return l * w * h; 
        sa: return 2 * ((w*l) + (h*l) + (h*w));
    }

    T cone(const T& rad, const T& h, bool volume = true) const { 
        check_bool;
        volume: return (PI * math::ccm.pow(rad) * h) / 3; 
        sa: return PI * rad * (rad + math::ccm.root(math::ccm.pow(rad) + math::ccm.pow(h)));
    }

    T sphere(const T& rad, bool volume = true) const {
        check_bool;
        volume: return (4 * PI * math::ccm.cube(rad)) / 3;
        sa: return 4 * PI * math::ccm.pow(rad);
    }

    T cylinder(const T& r, const T& h, bool volume = true) const {
        check_bool; 
        volume: return PI * math::ccm.pow(r) * h;
        sa: return (2 * PI * r * h) + (2 * PI * math::ccm.pow(r));
    }

    T rectpyramid(const T& l, const T& w, const T& h, bool volume = true) const {
        check_bool; 
        volume: return rectprism(l, w, h) / 3; 
        sa: return l * w + l * (ccm.root(ccm.pow(w/2) + ccm.pow(h))) + w * ccm.root(ccm.pow(l/2) + ccm.pow(h));
    }

    T tripyramid(const T& B, const T& h, var pmeter = 0, var slant_h = 0, bool volume = true) const {
        check_bool; 
        volume: return (B * h) / 3;
        sa: return B + 0.5 * (pmeter * slant_h); 
    }

    T tetrahedron(const T& a, bool volume = true) const {
        check_bool;
        volume: return math::ccm.cube(a) / (6 * math::ccm.root(2));
        sa: return a * 4; 
    }

    T triprism(const T& b, const T& h, const T& l, var s1 = 0, var s2 = 0, var s3 = 0, bool volume = true) const {
        check_bool; 
        volume: return triangle_area(b, h) * l; 
        sa: return b * h + l * (s1 + s2 + s3);
    }

    T ellipsoid(const T& a, const T& b, const T& c, bool volume = true) const {
        check_bool; 
        volume: return (4 * PI * a * b * c) / 3; 
        sa: return 4 * PI * ccm.pow((ccm.pow(a * b, 1.6) + ccm.pow(a * b, 1.6) + ccm.pow(a * b, 1.6)) / 3, 1.6 );
    }
};

typedef basic_geo<double> gbase;
namespace math { gbase geo; }