#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include "Customer.h"
//here I include all my libraries just in case

//namespace as always
using namespace std;

//I get the default builder
Customer::Customer()
{
    //set name to 0
    customerName="";
    //and fill the array of purchases with 0
    for (int i = 0; i < size; i++)
    {
        purchase[i]=0;
    }
}
//I set the constructor with arguments
Customer::Customer(string namecust,int purchases[],int sizearr)
{
    //set the name as the argument
    customerName=namecust;
    //set the purchases given
    for (int i = 0; i < sizearr; i++)
    {
        purchase[i]=purchases[i];
    }
    //and if there is space left set it to 0
    if (sizearr<size)
    {
        for (int i = sizearr; i < size; i++)
        {
            purchase[i]=0;
        }
        
    }
    
}

//Here I set the name of the customer with a string argument
void Customer::setCustomerName(string namescust)
{
    customerName=namescust;
}
//I get the name as a return value
string Customer::getCustomerName()
{
    return customerName;
}
// I get the purchases at a certain place in the array
int Customer::getPurchasesAt(int place)
{
    if(place<=size&&place>=0){   

    return purchase[place];
    }
    else
    {
        return -1;
    }
}
// Here I find the unique purchases finding the slots that are not zero
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
//Here I get the purchases in total if we add them
int Customer::getTotalPurchaseCount()
{
    int addition=0;
    for (int i = 0; i < size; i++)
    {
        addition=addition+purchase[i];
    }
    return addition;
}
//We can set the purchases to a diferent value with the user imput of a position and the new value
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
//Here I just get the size
int Customer::getSize()
{
    return size;
}
