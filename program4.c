/*
   Steps to create the application

   Step 1 : Understand the problem statement 
   Step 2 : Write the algorithm
   Step 3 : Decide the programming language
   Step 4 : Write the program
   Step 5 : Test the written program



Problem Statement = Write a program which performs addition of two numbers

 Question 1 : 
 Sir which type of data that you are going to provide as a input

 Question 2 :
 Sir Are you going to provide a positive or negative value is their any spesification

  Algorithm =

  START
      Accept First Number as No1
      Accept Second Number as No2
      Create one variable as Ans
      Perform Addition of No1 and No2 
      Store the addition into variable ANS
      Display the value of ANS
  STOP

 Question 3 : 
 Sir In which language should I write the code
 
 Question 4 : 
 I can write a code in C, C++ and Java whichever you want

Then Write the Program

*/

//////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which performs addition of two numbers
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////
//
// Function Name : Addition 
// Input :         Unsigned integer, Unsigned integer
// Output :        Unsigned integer
// Description :   performs addtion of 2 numbers
// Author :        Bhushan Sanjay Gunjal
// Date :          25/08/2024
//
//////////////////////////////////////////////////////////////////////////////

unsigned int Addition(unsigned int iValue1, unsigned int iValue2)
{
    unsigned int iResult = 0;
    iResult = iValue1 + iValue2;
    return iResult;
}

//////////////////////////////////////////////////////////////////////////////
// Entry Point Function
//////////////////////////////////////////////////////////////////////////////

int main()
{
    unsigned int iNo1 = 0, iNo2 = 0, iAns = 0;

    printf("Enter first number : \n");
    scanf("%d",&iNo1);

    printf("Enter Second number : \n");
    scanf("%d",&iNo2);

    iAns = Addition(iNo1,iNo2);

    printf("Addition is : %d\n", iAns);

    return 0;
}


