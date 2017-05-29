/* 
 * File:   Ingredient.h
 * Author: Sam Kerridge, Logan Searle
 *
 * Created on May 29, 2017, 2:01 PM
 */

#ifndef INGREDIENT_H
#define INGREDIENT_H
#include <string>

using namespace std;

class Ingredient {
public:
    Ingredient();
    
    int ingredientID;
    string name;
    string unit;
    double price_per_unit;
    
    void setID(int ingredientID);
    void setName(string name);
    void setUnit(string unit);
    void setPrice(double price_per_unit);
    
    string getUnit();
    
    void print();
};



#endif /* INGREDIENT_H */

