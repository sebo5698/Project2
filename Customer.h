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
    int size=50;
    int purchase[50];
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

