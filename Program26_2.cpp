/*
    Write a program which checks whether 5th & 18th bit is on or off
*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0

bool CheckBit(UINT iNo)
{
   UINT iMask = 0X20010;
   UINT iResult =0;
   
   iResult  = iNo & iMask;
   if(iResult == iMask) 
   {
       return true;
   }               
   else
   {
       return false;
   }                                                
}

int main()
{
    UINT iValue =0;
    bool bRet = false;

    cout<<"Enter the number: "<<"\n";
    cin >> iValue;
    
    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        cout<<"5th  & 18th Bit is ON.." <<"\n";
    }
    else
    {
        cout<<"5th  & 18th Bit is OFF.." <<"\n";
    }

    return 0;
}