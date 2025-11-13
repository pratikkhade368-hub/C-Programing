#include<stdio.h>
int main()
{
 int Arr [4] ={10,20,30,40};
 int Brr [] ={10,20,30,40,50};
 int Crr [6] ={10,20,30};

 printf("size of Arr is:%lu\n",sizeof(Arr)); // 16 
 printf("size of Brr is:%lu\n",sizeof(Brr)); //20
 printf("size of Crr is:%lu\n",sizeof(Crr)); //24

 return 0;
}