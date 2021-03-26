#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

class Customer
{
private:
    string customerName;
    int purchase[50];
    int size;
public:
    Customer();
    Customer(string,int[],int);
    string getCustomerName();
    void setCustomerName(string);
    int getPurchasesAt(int);
    void setPurchaseAt(int,int);
    int getNumUniquePurchases();
    void getSize();
};

