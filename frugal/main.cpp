/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: sealo
 *
 * Created on 2 May 2017, 11:47 AM
 */
#include "User.h"
#include "Recipe.h"
#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    User u;
    u.setUserID(123);
    u.setName("1st user");
    u.print();
    
    Recipe r;
    r.setRecipeID(321);
    r.setTitle("1st recipe");
    r.print();
    return 0;
}

