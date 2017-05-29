/* 
 * File:   Recipe.cpp
 * Author: sealo
 * 
 * Created on 27 May 2017, 11:03 AM
 */

#include "Recipe.h"
#include <string>
#include <iostream>

using namespace std;

Recipe::Recipe() {}

void Recipe::setRecipeID(int recipeID){
    this->recipeID=recipeID;
}

void Recipe::setTitle(string title){
    this->title=title;
}

void Recipe::setDescription(string description){
    this->description=description;
}

void Recipe::setMethod(string method){
    this->method=method;
}

void Recipe::setAuthor(string author){
    this->author=author;
}

//void Recipe::setTags(string tags){
//    this->tags=tags;
//}
//
//void Recipe::setIngredients(string ingredients) {
//    this->ingredients=ingredients;
//}



void Recipe::print(){
    cout << recipeID << endl << title << endl;
}

