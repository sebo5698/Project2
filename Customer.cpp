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
    for (int i = 0; i < size; i++)
    {
        purchase[i]=0;
    }
}
Customer::Customer(string namecust,int purchases[],int sizearr)
{
    customerName=namecust;
    for (int i = 0; i < sizearr; i++)
    {
        purchase[i]=purchases[i];
    }
    if (sizearr<size)
    {
        for (int i = sizearr; i < size; i++)
        {
            purchase[i]=0;
        }
        
    }
    
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
    if(place<=size&&place>=0){        
    return purchase[place];
    }else
    {
        return -1;
    }
}

int Customer::getNumUniquePurchases()
{
    int uniquepu=0;
    for (int i = 0; i < size; i++)
    {
        if(purchase[i]!=0)
        {
            uniquepu++;
        }
    }
    return uniquepu;
    
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
    if(userimputposition<size&&userimputposition>=0){
        
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
