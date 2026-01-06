#include<stdio.h>

int Add(int a, int b)
{
    int sum =0;
    sum= a+b;   //business logic
    return sum;
}

int main()
{
    int i=0, j=0, ans=0;

    printf("Enter first number:\n");
    scanf("%d",&i);

    printf("Enter second number:\n");
    scanf("%d",&j);

    ans = Add(i,j);

    printf("Additon is:%d\n",ans);

    return 0;

}