#include<stdio.h>

int main()
{
    double Arr[] ={10,20,30,40.0};
    printf("size of Arr:%lu:\n",sizeof(Arr));
    
    Arr++; //error
    return 0;
}