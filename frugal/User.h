/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   User.h
 * Author: sealo
 *
 * Created on 2 May 2017, 12:40 PM
 */

#ifndef USER_H
#define USER_H
#include <string>


class User {
public:
    User(int userID, std::string name, int age, bool gender, std::string password);
    
    int userID;
    std::string name;
    int age;
    bool gender; //true = male
    std::string password;
    
    
    void setName();
    void setAge();
    void setGender();
    void print();    
    
    
    
    
    
    
    
//    User(const User& orig);
//    virtual ~User();
private:

};

#endif /* USER_H */

