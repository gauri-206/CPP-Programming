#include<stdio.h>

struct Demo
{
    int i;
    float f;

    struct Demo obj;      //getting error
};