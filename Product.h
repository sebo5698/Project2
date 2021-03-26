// CS1300 Spring 2021
// Author: Sergio Borrego
// Recitation: 119 – Christen Malloy
// Homework 7 - Problem # 3 Products Classfile

//Here I include my default librarys
#include <iostream>
#include <string>
#include <iomanip>

//I use namespace to avoid use std
using namespace std;

//Here I define my class as product
class Product
{

//I define private attributes such as names prices and categorys
private:
    string name;
    double price;
    string category;
//In the public part I deffine my functrions to define and get some attributes from the private part
public:
    Product();
    Product(string,double,string);
    string getName();
    void setName(string);
    double getPrice();
    void setPrice(double);
    string getCategory();
    void setCategory(string);
};
