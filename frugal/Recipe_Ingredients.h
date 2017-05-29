/* 
 * File:   Recipe_Ingredients.h
 * Author: Sam Kerridge
 *
 * Created on May 29, 2017, 2:53 PM
 */

#ifndef RECIPE_INGREDIENTS_H
#define RECIPE_INGREDIENTS_H
#include <string>

using namespace std;

class Recipe_Ingredients {
public:
    Recipe_Ingredients();
    
//    int recipeID;
    int ingredientID;
    double quantity;
    double totalPrice;
    
    void setQuantity(double quantity);
    void setIngredientID(int ID);
    
    double getQuantity();
    
    void calcTotalPrice(double quantity, double price_per_unit, string unit);
    
    void print();
};

#endif /* RECIPE_INGREDIENTS_H */

