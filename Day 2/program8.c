/*
  step1: understand the problem statement
  step2: write the algorithem
  step3: Decide the program language
  step4: write the program
  step5: test the program
*/
/*
  Algorithm

START
    Accpet first number as no1
    Accpet second number as no2
    perform Addition of no1 and no2
    Diplay the Addition on screen
Stop 
*/
#include<stdio.h>

int AdditionTwoNumber(float fNo1, float fNo2)
{
    float fSum =0;
    fSum= fNo1 + fNo2;   //business logic
    return fSum;
}

int main()
{
    float fValue1 =0.0f, fValue2=0.0f,  fRet=0.0f;

    printf("Enter first number:\n");
    scanf("%f",&fValue1);

    printf("Enter second number:\n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumber(fValue1,fValue2);

    printf("Additon is:%f\n",fRet);

    return 0;

}