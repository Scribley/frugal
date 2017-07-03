/* 
 * File:   Tag.cpp
 * Author: Sam Kerridge
 * 
 * Created on May 29, 2017, 7:36 PM
 */

#include "Tag.h"
#include <string>
#include <iostream>

using namespace std;

Tag::Tag() {}

void Tag::setName(string name) {
    this->name = name;
}

void Tag::print() {
    cout << name;
}


