#include "Ingredient.h"
#include <iostream>
#include <string>

using namespace std;

Ingredient::Ingredient() {}

void Ingredient::setID(int ingredientID) {
    this->ingredientID = ingredientID;
}

void Ingredient::setName(string name) {
    this->name = name;
}

void Ingredient::setUnit(string unit) {
    this->unit = unit;
}

void Ingredient::setPrice(double price_per_unit) {
    this->price_per_unit = price_per_unit;
}

string Ingredient::getUnit() {
    return unit;
}

void Ingredient::print() {
    cout << ingredientID << endl << name << endl << unit << endl << price_per_unit;
}

