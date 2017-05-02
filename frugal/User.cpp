/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   User.cpp
 * Author: sealo
 * 
 * Created on 2 May 2017, 12:40 PM
 */

#include "User.h"
#include <iostream>
#include <string>

using namespace std;

User::User(string name, int age, bool gender) {
    this->name=name;
    this->age=age;
    this->gender=gender;
    
    cout << name << endl << age <<endl << gender << endl;
    
    
}

void User::setName(){
    
}

void User::setAge(){
    
}


//User::User(const User& orig) {
//}
//
//User::~User() {
//}

