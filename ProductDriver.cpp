// CS1300 Spring 2021
// Author: Sergio Borrego
// Recitation: 119 – Christen Malloy
// Project 2 - Product Driver Problem 1
#include <iostream>
#include <string>
#include <iomanip>
#include "Product.h"
//this is my test for the product implementation
int main()
{
    //i create a product
    string name="Ryzen pcgmer";
    double pricepc=300.00;
    string typepr="Electronics";
    Product Pcgaming(name,pricepc,typepr);

    //check if the products are in order with the values assigned
    cout<<Pcgaming.getName()<<" This is the name set"<<endl;
    cout<<Pcgaming.getPrice()<<" This is the price set"<<endl;
    cout<<Pcgaming.getCategory()<<" This is the category"<<endl;


    //Check if the set functions work correctly
    Pcgaming.setName("New pc gaming ryzen");
    Pcgaming.setPrice(499.99);
    Pcgaming.setCategory("Gaming Stuff");

    //and if the new values assigned are get
    cout<<Pcgaming.getName()<<" This is the new name set"<<endl;
    cout<<Pcgaming.getPrice()<<" This is the new price set"<<endl;
    cout<<Pcgaming.getCategory()<<" This is the new category"<<endl;
}
