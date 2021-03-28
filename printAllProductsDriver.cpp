// CS1300 Spring 2021
// Author: Sergio Borrego
// Recitation: 119 – Christen Malloy
// Project 2 - Problem # 3 Print all products driver

//here as always include my libraries
#include <iostream>
#include <string>
#include <iomanip>
#include "Product.h"
#include <fstream>

//I use namespace as always
using namespace std;
//first i define product to set every value at 0


//Here I define the function to print the products on an array
void printallproducts(Product productb[],int numproducts)
{
    //I check if the number of products inside the array is greater than 0 if its not we just print
    //there is not products stored
    if (numproducts<=0)
    {
        cout<<"No products are stored"<<endl;
    }else
    {
        //if there is products We deploy a message and use a foor loop to print them
        cout<<"Here is a list of products"<<endl;
        for (int i = 0; i < numproducts; i++)
        {
            //the I will told us which position is gonna be in the list of products
            //We print with get name the name and then the price rounded to two digits
            cout<<productb[i].getName()<<" costs ";
            cout<<fixed<<setprecision(2)<<productb[i].getPrice()<<endl;
        }
        
    }

}

//Test Ground 
int main()
{
    //here I set a array of products
    Product gamingconsoles[4];

    //I define each product of the array
    gamingconsoles[0]=Product("Switch",499.99,"Gaming Console");
    gamingconsoles[1]=Product("PS4",599.99,"Gaming Console");
    gamingconsoles[2]=Product("Xbox One",399.99,"Gaming Console");
    gamingconsoles[3]=Product("PC",1000.00,"Gaming Console");

    //and print them
    printallproducts(gamingconsoles,4);
    return 0;
}