// CS1300 Spring 2021
// Author: Sergio Borrego
// Recitation: 119 – Christen Malloy
// Homework 7 - Problem # 4

#include <iostream>
#include <string>
#include <iomanip>
#include "Product.h"
#include <fstream>

//I use namespace as always
using namespace std;
/*
    This is a function that will found and return all the products
    in an array with the same category
*/
int countCategory(string category,Product listp[],int prodstored)
{
    //i create some variables here that is a dummy a value will be useless in case nothing is found
    // and the counter that is the return value
    int dummy=0;
    int counter=0;
    //loop to move around the categories
    for(int i = 0; i < prodstored; i++)
    {
        //if the category founds something it will add one
        if(listp[i].getCategory()==category)
        {
            ++counter;
        }
        //if not just dummy will be added
        else
        {
            ++dummy;
        }
    }
    //if its 0 the return will be 0
    if (counter==0)
    {
        return 0;
    }
    //if not will just be the counter
    return counter;
    
}

int main()
{
   //i create a product
    string name="Ryzen pcgmer";
    double pricepc=300.00;
    string typepr="Electronics";
    Product Pcgaming(name,pricepc,typepr);
    Product listproduct[1];
    listproduct[0]=Pcgaming;
cout<<"total category is"<<countCategory("Electronics",listproduct,1)<<endl;
}