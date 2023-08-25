/*
    Write a program which checks whether first and last bit is on or off
    1st bit means bit number 1 and last bit means bit number 32
*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0

bool CheckBit(UINT iNo)
{
    UINT iMask = 0X80000001;
    UINT iResult =0;

    iResult = iNo & iMask;

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
    int iValue =0;
    bool bRet = false;

    cout <<"Enter the number: "<<"\n";
    cin >> iValue;

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        cout << "First and last bit are ON.." <<"\n";
    }
    else
    {
        cout << "First and last bit are OFF.." <<"\n";
    }

    return 0;
}