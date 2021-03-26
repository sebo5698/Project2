// CS1300 Spring 2021
// Author: Sergio Borrego
// Recitation: 119 – Christen Malloy
// Homework 7 - Problem # 3 Definition of class functions file

//Here I include my default libraries 
#include <iostream>
#include <string>
#include <iomanip>
#include "Product.h"

//as always using namespace
using namespace std;

//first i define product to set every value at 0
Product::Product()
{
    name="";
    price=0.0;
    category="";
}

//here I define that if the User pase some filles it will change then to the private attributes of the object
//this means the things you pass as arguments here are gonna go to the private vars from the object
Product::Product(string thename, double theprice,string thecategory)
{
    name=thename;
    price=theprice;
    category=thecategory;
}

//with this function I return a string that is the name stored in the object
string Product::getName()
{
    return name;
}

//this one is made to modify private attributes and set a new name
void Product::setName(string thename)
{
    name=thename;
}

//Here is the same as get name but this return the price
double Product::getPrice()
{
    return price;
}

//same as set name but with price
void Product::setPrice(double theprice)
{
    price=theprice;
}

//same as get name but with category other private attribute
string Product::getCategory()
{
    return category;
}

//same as set name but with category
void Product::setCategory(string thecategory)
{
    category=thecategory;
}