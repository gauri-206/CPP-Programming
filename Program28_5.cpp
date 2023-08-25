/*
     Write a program which accept one number from user and toggle contents
     of first and last nibble of the number. Return modified number. 
     (Nibble is a group of four bits)
*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask1 = 0X0000000F;
    UINT iMask2 = 0XF0000000;

    UINT iMask = iMask1 | iMask2

    return(iMask ^ iNo);    
}

int main()
{
    UINT iValue =0;
    UINT iRet =0;

    cout<<"Enter the number: \n";
    cin >> iValue;

    iRet = ToggleBit(iValue);

    cout<<"Modified number is:  "<<iRet <<"\n";

    return 0;
}