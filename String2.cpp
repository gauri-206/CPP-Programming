#include<iostream>
using namespace std;

int strlenX(char str[])    // int strlenX(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    cout<<"Enter your first name:" << "\n";
    cin >> Arr;

    iRet = strlenX(Arr);      //strleX(100)

    cout<<"Length of name is:" <<iRet<< "\n";

    return 0;
}