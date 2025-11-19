#include<stdio.h>

int main()
{
    char cvalue = 's';
    int ivalue =11;
    float fvalue =90.78f;
    double dvalue = 98.564323;

    printf("size of charater is :%lu\n",sizeof(cvalue));
    printf("size of integer is :%lu\n",sizeof(ivalue));
    printf("size of float is :%lu\n",sizeof(fvalue));
    printf("size of double is :%lu\n",sizeof(dvalue));

    
    
    return 0;

}