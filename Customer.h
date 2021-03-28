// CS1300 Spring 2021
// Author: Sergio Borrego
// Recitation: 119 – Christen Malloy
// Project 2 - Problem # 6 Customer Classfile

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
//I add my libraries as always just in case
#ifndef CUSTOMER_H
#define CUSTOMER_H

//Using namespace as always
using namespace std;

//I create the class 
class Customer
{
private:
//Private attributes the name size that is static and constand and the list of purchases
    string customerName;
   static const int size=50;
    int purchase[size];
public:
    //Here I set the default constructor and the other functions
    Customer();
    Customer(string,int[],int);
    string getCustomerName();
    void setCustomerName(string);
    int getPurchasesAt(int);
    bool setPurchasesAt(int,int);
    int getTotalPurchaseCount();
    int getNumUniquePurchases();
    int getSize();
};
#endif 

