/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Tag.h
 * Author: JB Dunedin
 *
 * Created on May 29, 2017, 7:36 PM
 */

#ifndef TAG_H
#define TAG_H
#include <string>

using namespace std;

class Tag {
public:
    Tag();
    
    string name;
    
    void setName(string name);
    
    void print();
};

#endif /* TAG_H */

