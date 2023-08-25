/*
   Write a program which accept one number from user and count number of 
   ON(1) bits in it without using % and / operator
*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

int CountOne(UINT iNo)
{
    int iCount =0;
    UINT iMask = 0X00000001;

    while(iMask != 0)
    {
        if((iMask & iNo) != 0)
        {
            iCount++;
        }

        iMask = iMask <<1;
    }
    return iCount;
}

int main()
{
    UINT iValue = 0;
    int iRet =0;
    
    cout<<"Enter the number: \n";
    cin>> iValue;

    iRet = CountOne(iValue);

    cout<<"Count of ON bits are: "<<iRet<<"\n";

    return 0;
}