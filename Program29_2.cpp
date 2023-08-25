/*
   Write a program which accept two numbers from usre and display position 
   of comman ON bits from that two operators
*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

int CountOne(UINT iNo1, UINT iNo2)
{
    int iCount1 = 0;
    UINT iMask = 0x00000001; 

    while (iMask != 0) 
    {
        if (((iNo1 & iMask) != 0) && ((iNo2 & iMask) != 0))
        {
            iCount1++;
        }
        iMask = iMask << 1;
    }

    return (iCount1);
}

int main()
{
    UINT iValue1 = 0, iValue2 =0;
    int iRet = 0;
    
    cout << "Enter the 1st number: ";
    cin >> iValue1;

    cout << "Enter the 2nd number: ";
    cin >> iValue2;


    iRet = CountOne(iValue1, iValue2);

    cout << "Count of ON bits are: " << iRet << "\n";

    return 0;
}
