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
#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    User u(123, "Logan", 20, true, "giday");
    u.print();
    return 0;
}

