// Write a program which check whether number is even or odd.

#include<stdio.h>    // For printf and scanf
#include<stdbool.h>  // for bool data type

//////////////////////////////////////////////////////////////////////////////
//
// Function Name : CheckEvenOdd 
// Input :         Integer
// Output :        Boolean
// Description :   Check Whether input is Even or Odd
// Author :        Bhushan Sanjay Gunjal
// Date :          25/08/2024
//
//////////////////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    if((iNo % 2 )==0)
    {
       return true;
    }
    else
    {
       return false;
    }

}

//////////////////////////////////////////////////////////////////////////////
// Entry Point Function
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                // Variable to accept input
    bool bRet = false;             // Variable to accept return value

    printf("Please enter number to check whether it is even or odd : \n");
    scanf("%d",&iValue);
    
    bRet = CheckEvenOdd(iValue);   // Function call
    
    if(bRet == true)
    {
        printf("%d is Even number\n",iValue);
    }
    else
    {
        printf("%d is Odd number\n",iValue);
    }
    return 0;
}