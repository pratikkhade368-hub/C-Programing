#include<stdio.h>

int imark = 89;

int main()
{
    char cvalue ='s';
    int ivalue = 11;
    float fvalue = 90.78f;
    double dvalue =98.564323;

    printf("size of charater is : %lu\n",sizeof(cvalue));
    printf("size of integer is : %lu\n",sizeof(ivalue));
    printf("size of float is : %lu\n",sizeof(fvalue));
    printf("size of double is : %lu\n",sizeof(dvalue));

    printf("Address of cvalue is : %lu\n",&cvalue);
    printf("Address of ivalue is : %lu\n",&ivalue);
    printf("Address of fvalue is : %lu\n",&fvalue);
    printf("Address of dvalue is : %lu\n",&dvalue);

    return 0;
}