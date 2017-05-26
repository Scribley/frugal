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

using namespace std;

class User {
public:
    User();
    
    int userID;
    string name;
    std::string gender;
    std::string email;
    std::string password;
    
    
    void setUserID(int userID);
    void setName(string name);
    void setGender(std::string gender);
    void setEmail(std::string email);
    void setPassword(std::string password);
    void print();    
    
    
    
    
    
    
    
//    User(const User& orig);
//    virtual ~User();
private:

};

#endif /* USER_H */

