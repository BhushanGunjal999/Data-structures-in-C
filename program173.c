#include<stdio.h>
#define ERR_NOTFOUND -1

int FirstOccurance(char *str, char cValue)
{
    int iCnt = 1;

    while ((*str != '\0') && (*str != cValue))
    {
        str++;
        iCnt++;
    }
    
    if (*str == '\0')
    {
        return ERR_NOTFOUND;
    }
    else
    {
        return iCnt;
    }
    
}

int main()
{
    char Arr[20];
    char ch = '\0';
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s", Arr);

    printf("Enter the Character : \n");
    scanf(" %c",&ch);

    iRet = FirstOccurance(Arr,ch);
    if (iRet == ERR_NOTFOUND)
    {
        printf("Their is no such character\n");
    }
    else
    {
        printf("First Occurance of that character is at : %d\n",iRet);
    }
    
    return 0;
}