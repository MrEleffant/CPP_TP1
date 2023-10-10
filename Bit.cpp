//
// Created by thiba on 03/10/2023.
//
#include "Bit.hpp"
#include <iostream>

std::ostream& operator<<(std::ostream& os, const Bit& bit) {  	// << operator overloaded - redirecting to toString method.
    os << bit.toString();
    return os;
}