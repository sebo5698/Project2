// CS1300 Spring 2021
// Author: Sergio Borrego
// Recitation: 119 – Christen Malloy
// Project 2 - Problem # 6 Products Classfile

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

#ifndef CUSTOMER_H
#define CUSTOMER_H

using namespace std;

class Customer
{
private:
    string customerName;
   static const int size=50;
    int purchase[size];
public:
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

