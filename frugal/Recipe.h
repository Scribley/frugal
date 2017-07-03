/* 
 * File:   Recipe.h
 * Author: sealo
 *
 * Created on 27 May 2017, 11:03 AM
 */

#ifndef RECIPE_H
#define RECIPE_H
#include<string>

using namespace std;

class Recipe {
public:
    Recipe();
    
    int recipeID;
    string title;
    string description;
    string method;
    string author;
//    string tags;
//    string ingredients;
    
    void setRecipeID(int recipeID);
    void setTitle(string title);
    void setDescription(string description);
    void setMethod(string method);
    void setAuthor(string author);
    
    int getRecipeID();
    string getTitle();
    string getDescription();
    string getMethod();
    string getAuthor();
    
    
//    void setTags(string tags);
//    void setIngredients(string ingredients);
    
    void print();
};

#endif /* RECIPE_H */

