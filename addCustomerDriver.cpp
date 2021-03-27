#include "Product.h"
#include "Customer.h"
#include <string>
#include <iostream>

using namespace std;

int addCustomer(string customerName,Customer customerarr[],int numprods,int custmstored,int custarrsize)
{
    bool namfound=false;
    if(custmstored>=custarrsize)
    {
        return -2;
    }else if(customerName=="")
    {
        return -1;
    }else
    {
        for (int i = 0; i < custmstored; i++)
        {
            if(customerarr[i].getCustomerName()==customerName)
            {
                namfound=true;
            }
        }
        
    }
}