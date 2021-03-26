#include <iostream>
#include <string>
#include <iomanip>
#include "Product.h"
#include "Customer.h"
#include <fstream>

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


int readPurchases(string Filename,Customer arrcust[],int customstored,int custarrsize,int maxcol)
{
    ifstream fileopen;
    fileopen.open(Filename);
    if(fileopen.is_open())
    {

    }
    else
    {
        return -1;
    }

}