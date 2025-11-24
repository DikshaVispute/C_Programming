#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Check
//  Description :   It is used to check whether the given value is present or not
//  Input :         Integers 
//  Output :        Boolean
//  Auther :        Diksha Kadu Vispute
//  Date :          15/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    bool bFlag = false;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt]) == iNo)
        {
            bFlag = true;
        }
    }

    return bFlag;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    int *iPtr = NULL;
    bool bRet = false;

    printf("Enter the number of elements : ");
    scanf("%d",&iSize);

    printf("Enter the value : ");
    scanf("%d",&iValue);

    iPtr = (int*)malloc(iSize * sizeof(int));

    if(iPtr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d Elements \n ",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter %d element :\n",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }

    bRet = Check(iPtr, iSize, iValue);

    if(bRet == true)
    {
        printf("%d is present\n",iValue);
    }
    else
    {
        printf("%d is absent\n",iValue);
    }

    free(iPtr);

    return 0;
}