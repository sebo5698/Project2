// CS1300 Spring 2021
// Author: Sergio Borrego
// Recitation: 119 – Christen Malloy
// Homework 7 - Product Driver
#include <iostream>
#include <string>
#include <iomanip>
#include "Customer.h"

using namespace std;
//this is my testing ground
int main()
{
	
// Checking Paramterized Constructor
int purchases[] = {3,4,5};
Customer c = Customer("Punith", purchases, 3);
cout << c.getCustomerName() << endl;
cout << "getPurchasesAt(0) = " << c.getPurchasesAt(0) << endl;
cout << "getPurchasesAt(1) = "<< c.getPurchasesAt(1) << endl;
cout << "getPurchasesAt(2) = "<< c.getPurchasesAt(2) << endl;
cout << "getPurchasesAt(9) = "<< c.getPurchasesAt(9) << endl;
cout << "getPurchasesAt(29) = "<< c.getPurchasesAt(29) << endl;
cout << "getPurchasesAt(49) = "<< c.getPurchasesAt(49) << endl;
cout << "getPurchasesAt(-9) = "<< c.getPurchasesAt(-9) << endl;
cout << "getPurchasesAt(-29) = "<< c.getPurchasesAt(-29) << endl;
cout << "getPurchasesAt(52) = "<< c.getPurchasesAt(52) << endl;

	
// Checking Setter and Getter for Customer Name
c.setCustomerName("John");
cout << c.getCustomerName() << endl;

	
// Checking Getter for Size
cout << c.getSize() << endl;

// Checking Getter for Total Purchase Count
c.setCustomerName("Jimmy");
for(int i=0; i<c.getSize(); i+=15){
c.setPurchasesAt(i,i);
}
cout << c.getCustomerName() << "'s Total Purchase Count is: " << c.getTotalPurchaseCount() << endl;


// Checking Getter for Total Purchase Count
c.setCustomerName("Jimmy");
for(int i=0; i<c.getSize(); i+=10){
    c.setPurchasesAt(i,i);
}
cout << c.getCustomerName() << "'s Total Purchase Count is: " << c.getTotalPurchaseCount() << endl;
	
// Checking Getter for Number of Unique Purchases
c.setCustomerName("Jimmy");
for(int i=1; i<c.getSize(); i+=10){
    c.setPurchasesAt(i,i);
}
cout << c.getCustomerName() << "'s Number of Unique Purchases is: " << c.getNumUniquePurchases() << endl;

}