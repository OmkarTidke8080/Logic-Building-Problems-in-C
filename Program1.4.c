// Accept one number and check whether it is divisible by 5 or not

#include<stdio.h>

typedef int BOOL;
#define TRUE 1;
#define FALSE 0;

int Check( int iNo)
{
    if((iNo % 5)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter NUmber\n");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == 1)
    {
        printf("Divsible by 5");
    }
    else
    {
        printf("Not Divisible 5");
    }
    return 0;

}
