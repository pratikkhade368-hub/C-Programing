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
    if the input is negative then convert it into positive
    perform Addition of no1 and no2
    Diplay the Addition on screen
  Stop 
*/

//////////////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name: AdditionTwoNumber    
//  Description:   it is use to perfrom addition
//  Input:         Float,Float
//  output:        Float        
//  Author:        Pratik Balasaheb Khade
//  Date:          09/10/2025
//
/////////////////////////////////////////////////////////////////


int AdditionTwoNumber(float fNo1, float fNo2)
{
    float fSum =0.0f;

    //Updator

    if(fNo1<0.0f)
    {
      fNo1=-fNo1;
    }

    if(fNo2<0.0f)
    {
      fNo2=-fNo2;
    }

    fSum= fNo1 + fNo2;   //business logic
    return fSum;
}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////


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
/////////////////////////////////////////////////////////////////
//
//  Testcases sucessfully handaled by the application
//
//  Input1:10.5   Input:3.2   output:13.7
//  Input1:10.5   Input:3.2   output:13.7
//  Input1:10.5   Input:3.2   output:13.7
//  Input1:-10.5  Input:-3.2  output:13.7
//  Input1:10.5   Input:3.2   output:13.7
//
/////////////////////////////////////////////////////////////////
