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

User::User() {}

void User::setUserID(int userID){
    this->userID=userID;
}

void User::setName(string name){ 
    this->name=name;
}

void User::setEmail(string email){
    this->email=email;
}

void User::setPassword(std::string password){
    this->password=password;
}

void User::setGender(std::string gender){
    this->gender=gender;
}

void User::print(){
    cout << userID << endl << name << endl << email <<endl << password << endl << gender << endl;
}

//User::User(const User& orig) {
//}
//
//User::~User() {
//}

