#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char cValue)
{
    if ((cValue >= 'a') && (cValue <= 'z'))
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main()
{
    char ch = '\0';
    bool bRet = 0;

    printf("Enter Character\n");
    scanf("%c",&ch);

    bRet = CheckSmall(ch);

    if (bRet == true)
    {
        printf("%c is a Small case letter\n",ch);
    }
    else
    {
        printf("%c is not a Small case letter\n",ch);
    }
    

    return 0;
}