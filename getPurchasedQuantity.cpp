#include <iostream>
#include <string>
#include <iomanip>
#include "Product.h"
#include "Customer.h"
#include <fstream>

using namespace std;

int getPurchasedQuantity (string customename,string prodname,Customer CustomrsArr[],Product prodsArr[],int custarrsi,int productArrsiz)
{
    bool customer=false;
    bool prod=false;
    int valuer=0;
    for (int i = 0; i < custarrsi; i++)
    {
        customer=false;
        prod=false;
        if(CustomrsArr[i].getCustomerName()==customename)
        {
            customer=true;
        }
        for (int j = 0; j < productArrsiz; j++)
        {
            if(prodsArr[i].getName()==prodname)
            {
                prodname=true;
                if(customer==true)
                {
                    valuer=CustomrsArr[i].getPurchasesAt(j);
                    break;
                }
            }
        }
        if(customer==true && prod==true)
        {
            break;
        }
    }
    if(customer==true && prod==true)
    {
        return valuer;
    }else
    {
        return -3;
    }
}