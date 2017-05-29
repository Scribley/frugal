/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Tag.cpp
 * Author: JB Dunedin
 * 
 * Created on May 29, 2017, 7:36 PM
 */

#include "Tag.h"
#include <string>

using namespace std;

Tag::Tag() {}

void Tag::setName(string name) {
    this->name = name;
}

void Tag::print() {
    cout << tagID << endl << name;
}


