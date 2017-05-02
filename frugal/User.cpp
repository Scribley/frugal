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

User::User(int userID, string name, int age, bool gender, string password) {
    this->userID=userID;
    this->name=name;
    this->age=age;
    this->gender=gender;
    this->password=password;
     
}

void User::setName(){ 

}

void User::setAge(){
    
}

void User::print(){
    cout << userID << endl << name << endl << age <<endl << gender << endl << password << endl;
}

//User::User(const User& orig) {
//}
//
//User::~User() {
//}

