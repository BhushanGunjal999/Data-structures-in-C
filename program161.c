#include<stdio.h>

int strlenX(char *str)
{
    int iCount = 0;

    while (*str != '\0')
    {
        iCount++;
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[10];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);    

    iRet = strlenX(Arr);

    printf("Length of string is : %d\n",iRet);
    return 0;
}