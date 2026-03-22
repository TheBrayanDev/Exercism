#include "triangle.h"

namespace triangle {

// TODO: add your solution here

flavor kind(double a, double b, double c)
{
    if (a <= 0 && b <= 0 && c <= 0){
        throw std::domain_error("All sides must be greater than zero.");
    } else if ( a + b < c || a + c < b || b + c < a ){
        throw std::domain_error("Not a triangle");
    } else if ( a == b && a == c ){
        return flavor::equilateral;
    } else if ( a == b || b == c || a == c){
        return flavor::isosceles;
    } else {
        return flavor::scalene;
    }
    return flavor();
}

} // namespace triangle
