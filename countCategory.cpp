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