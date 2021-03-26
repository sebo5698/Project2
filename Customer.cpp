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

int Customer::getPurchasesAt(int place)
{
    if(place<=size&&place>0){
    return purchase[place];
    }else
    {
        return -1;
    }
}

int Customer::getTotalPurchaseCount()
{
    int addition=0;
    for (int i = 0; i < size; i++)
    {
        addition=addition+purchase[i];
    }
    return addition;
}

bool Customer::setPurchasesAt(int userimputposition,int newvalue)
{
    if(userimputposition<=size&&userimputposition>0){
        
        purchase[userimputposition]={newvalue};
        return true;
    }else
    {
        return false;
    }
}

int Customer::getSize()
{
    return size;
}
