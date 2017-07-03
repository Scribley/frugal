/* 
 * File:   Recipe_Ingredients.cpp
 * Author: Sam Kerridge
 * 
 * Created on May 29, 2017, 2:53 PM
 */

#include "Recipe_Ingredients.h"
#include "Ingredient.h"
#include <iostream>
#include <string>

using namespace std;

Recipe_Ingredients::Recipe_Ingredients() {}

Recipe_Ingredients::Recipe_Ingredients(int recipeID, int ingredientID, double quantity) {
    this->recipeID = recipeID;
    this->quantity = quantity;
    this->ingredientID = ingredientID;
}

//-------------------
//    MUTATORS
//-------------------

void Recipe_Ingredients::setRecipeID(int ID) {
    this->recipeID = ID;
}

// set the quantity required for the ingredient
void Recipe_Ingredients::setQuantity(double quantity) {
    this->quantity = quantity;
}

//set the ingredient ID to the parameter passed
void Recipe_Ingredients::setIngredientID(int ID) {
    this->ingredientID = ID;
}

//-------------------
//    ACCESSORS
//-------------------

double Recipe_Ingredients::getQuantity() {
    return quantity;
}

int Recipe_Ingredients::getIngredientID() {
    return ingredientID;
}

int Recipe_Ingredients::getRecipeID() {
    return recipeID;
}

// calculates the total price of the ingredient required for the recipe
// by multiplying the quantity by the price per unit
void Recipe_Ingredients::calcTotalPrice(double quantity, double price_per_unit, string unit) {
//    ingredientObject = db.getIngredientByID(ingredientID);
//    unit = ingredientObject.getUnit();
    if (unit == "mls" || unit == "g") {
        totalPrice = (quantity / 100) * price_per_unit;
    } else {
        totalPrice = quantity * price_per_unit;
    }
}

void Recipe_Ingredients::print() {
    cout << ingredientID << endl << quantity << endl << totalPrice;
}