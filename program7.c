// Write a program which check whether number is divisible by 3 and 5.

#include<stdio.h>    // For printf and scanf
#include<stdbool.h>  // for bool data type

//////////////////////////////////////////////////////////////////////////////
//
// Function Name : CheckDivisible
// Input :         Integer
// Output :        Boolean
// Description :   Check Whether input is divisible by 3 and 5.
// Author :        Bhushan Sanjay Gunjal
// Date :          25/08/2024
//
//////////////////////////////////////////////////////////////////////////////

bool CheckDivisible(int iNo)
{
    if(((iNo % 3) == 0) && ((iNo % 5) == 0))
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

    printf("Please enter number to check whether it is divisible by 3 AND 5 : \n");
    scanf("%d",&iValue);
    
    bRet = CheckDivisible(iValue);   // Function call
    
    if(bRet == true)
    {
        printf("%d is comletely divisible by 3 and 5 \n",iValue);
    }
    else
    {
        printf("%d is not comletely divisible by 3 and 5\n",iValue);
    }
    return 0;
}


/*
    Logical Operators

    1 : Logical AND &&
    2 : Logical OR  ||

   -------------------------------------------------
    Expression1     Expression2     &&       ||
   -------------------------------------------------
    true            true           true      true
    true            false          false     true
    false           false          false     false
    false           true           false     true
   -------------------------------------------------
*/