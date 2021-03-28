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

int countCategory(string category,Product listp[],int prodstored)
{
    int dummy=0;
    int counter=0;
    for(int i = 0; i < prodstored; i++)
    {
        if(listp[i].getCategory()==category)
        {
            ++counter;
        }
        else
        {
            ++dummy;
        }
    }
    if (counter==0)
    {
        return 0;
    }
    return counter;
    
}