/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

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
    string tags;
    string ingredients;
    
    void setRecipeID(int recipeID);
    void setTitle(string title);
    void setDescription(string description);
    void setMethod(string method);
    void setAuthor(string author);
    void setTags(string tags);
    void setIngredients(string ingredients);
    
    void print();
    
//    Recipe(const Recipe& orig);
//    virtual ~Recipe();
//private:

};

#endif /* RECIPE_H */

