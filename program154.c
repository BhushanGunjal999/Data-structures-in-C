#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char cValue)
{
    if ((cValue >= 'A') && (cValue <= 'Z'))
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

    bRet = CheckCapital(ch);

    if (bRet == true)
    {
        printf("%c is a capital letter\n",ch);
    }
    else
    {
        printf("%c is not a capital letter\n",ch);
    }
    

    return 0;
}