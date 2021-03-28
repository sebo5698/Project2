// CS1300 Spring 2021
// Author: Sergio Borrego
// Recitation: 119 – Christen Malloy
// Project 2  - Problem # 2 The read products driver

//As always I set my default libraries
#include <iostream>
#include <string>
#include <iomanip>
#include "Product.h"
#include <fstream>

//I use namespace here
using namespace std;

/*
        WARNING ALL FROM HERE IS THE SPLIT FUNCTION!!!!
*/
int split (string splitstr,char separator,string finalarray[],int sizefinal)
{
    //here I create many variables that are gonna be useful
    // a substring that will help us later to store the words separated
    string auxsubstr;
    //counters of times separated and other useful counters
    int splittime=0;
    int counter1=0;
    int counter2=0;
    int counter3=0;
    int lenghtstring=splitstr.length();
    //here we check in case that the string is not empty in case it is it returns 0
    if (splitstr=="")
    {
        return 0;
    }

    for (int i = 0; i <= lenghtstring; i++)
    {
        //in this for loop it will check all the values inside the string
        //in case that the character in the string is the same as the separator the next will happend
        if (splitstr[i]==separator)
        {
            //counter 2 is gonna determine the lenght of the sub string so we rest 'i' that is the actual position by counter 3
            //counter 3 is the position where the sub string start being created
            counter2=(i-counter3);
            //here the sub string is created with counter 3 as a position and counter 2 as a size
            auxsubstr=splitstr.substr(counter3,counter2);
            //its set in the array 
            finalarray[counter1]=auxsubstr;
            //split time is gonna be added 1 because we already splited 
            splittime++;
            //counter 1 is the position in the array where the splits are stored and since we already split next time we have to store in the next position
            counter1++;
            //counter 2 that is the length determinator is gonna set to 0 to dont interfeer with the substraction at the beggining
            counter2=0;
            //counter 3 is gonna be added the actual position plus one to avoid taking the separator in the next string separator
            counter3=(i+1);
            //this next if is gonna check if the foor loop went to the end and didnt find another slash
            //this would mean we have one more word to separate since the last separator
        }else if(lenghtstring==i){
            //so all the process at the top is runned
            counter2=(i-counter3);
            auxsubstr=splitstr.substr(counter3,counter2);
            finalarray[counter1]=auxsubstr;
            splittime++;
            counter1++;
            counter2=0;
            counter3=(i+1); 
        }
        //here it checks if the size given by the user is smaller than all the split times it will return -1
        if(splittime>sizefinal){
            return -1;
        }
    }
    //here will just return the times splited
    return splittime;
}
/*
        WARNING ALL FROM HERE THE SPLIT FUNCTION ENDS
*/

//We start with a function read products that will return an int
// With arguments first the file name second an array of products third how many products are stored
//and finally the size of the product array
int readProducts(string filename, Product producta[],int productstored,int productarrsize)
{
    //I Start defining everything is necesary to open the file
    ifstream fileopen;
    fileopen.open(filename);
    //I create variables that are gonna be useful later
    string line;
    string storefunction[3];
    int counter=0;
    double pricetransformed=0.0;
    //This if will check how many products are stored already and set the counter to that number
    if (productstored<productarrsize)
    {
        counter=productstored;
    }
    //In case the products stored already are equal to the product array size we will return -2 as an error
    if(productstored==productarrsize)
    {
        return -2;
    }
    //we check if the file is open here
    if(fileopen.is_open())
    {
        //and do a while loop untill there is not lines left
        while (getline(fileopen,line))
        {
            //and if to check if the line is empty if it ends it will jump the loop one time
            if (line=="")
            {
                continue;
            }

                //if its not empty in that case we will split the line get and store it
                //on the array storefunction
                split(line,',',storefunction,3);
                //here we transform the second value the price to indt and with the price transformed
                //that is a double it will move it to a double
                pricetransformed=stod(storefunction[1]);
                //Here It will take the counter as a position to store the object setting first the name the price transformed
                //and the category
                producta[counter].setName(storefunction[0]);
                producta[counter].setPrice(pricetransformed);
                producta[counter].setCategory(storefunction[2]);
                //and will add one to counter
                ++counter;
            if (counter>=productarrsize)
            {
                //in case counter is already overpassed the limit of the array because this is the one that
                //determines where to save datta we will just return it as it is
                return counter;
            }
        }
        
        //then we will return just the counter to see how many objects were stored
        return counter;
    }
    else
    {
        //if it dosnt oppen the file we return -1
        return -1;
    }

}
//here is my test ground
int main()
{
    //here I create an array of products
    Product prodarray[50];
    //a string with the file name
    string textfilename;
    
    //I ask the user for a file name
    cout<<"enter file name please"<<endl;
    cin>>textfilename;
    
    //and I print how many were stored
    cout<<"total files stored: "<<readProducts(textfilename,prodarray,0,50)<<endl;

}