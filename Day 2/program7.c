#include<stdio.h>

int AdditionTwoNumber(int iNo1, int iNo2)
{
    int iSum =0;
    iSum= iNo1 + iNo2;   //business logic
    return iSum;
}

int main()
{
    int iValue1=0, iValue2=0, iRet=0;

    printf("Enter first number:\n");
    scanf("%d",&iValue1);

    printf("Enter second number:\n");
    scanf("%d",&iValue2);

    iRet = AdditionTwoNumber(iValue1,iValue2);

    printf("Additon is:%d\n",iRet);

    return 0;

}