#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include "Customer.h"

using namespace std;

Customer::Customer()
{
    customerName="";
    size=50;
    purchase[size];
}
Customer::Customer(string namecust,int purchases[],int sizearr)
{
    customerName=namecust;
    size=sizearr;
    purchases[sizearr]=purchase[sizearr];
}

void Customer::setCustomerName(string namescust)
{
    customerName=namescust;
}

string Customer::getCustomerName()
{
    return customerName;
}

