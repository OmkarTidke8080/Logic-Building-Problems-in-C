// ACCEPT n NUMBES from users and accept onr another number as NO and check whether No is present or not

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[],int iLength, int iNo)
{

    for(int i = 0; i < iLength; i++)
    {
        if(Arr[i] == iNo)
        {
            return TRUE;
        }
    }
    return FALSE;
}

int main()
{
  int iSize = 0;
  int iLength = 0;
  int iValue = 0;
  int *p = NULL;
  BOOL bRet = FALSE;
  int iCnt = 0;

  printf("Enter number of elements : \n");
  scanf("%d",&iSize);

  printf("Enter the number : \n");
  scanf("%d",iValue);

  p = (int *)malloc(iSize * sizeof(int));

  if(p == NULL)
  {
    printf("Unable to allocate memory");
    return 0;
  }

  printf("Enter %d ELements",iSize);

  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    printf(" Enter elements : %d  =>",iCnt+1);
    scanf("%d",&p[iCnt]);
  }
  bRet = Check(p,iSize,iValue);

  if(bRet == TRUE)
  {
    printf("NUmber is present");
  }
  else
  {
    printf("Number is not present");
  }

  free(p);

    return 0;
}