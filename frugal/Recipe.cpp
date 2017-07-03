/* 
 * File:   Recipe.cpp
 * Author: sealo, kerridge
 * 
 * Created on 27 May 2017, 11:03 AM
 */

#include "Recipe.h"
#include <string>
#include <iostream>

using namespace std;

Recipe::Recipe() {}

//-------------------
//    MUTATORS
//-------------------

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

//-------------------
//    ACCESSORS
//-------------------

int Recipe::getRecipeID (){
    return recipeID;
}

string Recipe::getTitle(){
    return title;
}

string Recipe::getDescription() {
    return description;
}

string Recipe::getMethod() {
    return method;
}

string Recipe::getAuthor() {
    return author;
}

//void Recipe::setTags(string tags){
//    this->tags=tags;
//}
//
//void Recipe::setIngredients(string ingredients) {
//    this->ingredients=ingredients;
//}

void Recipe::print(){
    cout << recipeID << endl << title << endl << description << endl << method << endl << author;
}

