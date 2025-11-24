#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FirstOcc
//  Description :   It is used to give the index value of last occurance of a number
//  Input :         Integers 
//  Output :        Integer
//  Auther :        Diksha Kadu Vispute
//  Date :          15/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int LastOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt > 0; iCnt--)
    {
        if((Arr[iCnt]) == iNo)
        {
            return iCnt;
            break;
        }
    }

    return -1;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    int *iPtr = NULL;
    int iRet = 0;

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

    iRet = LastOcc(iPtr, iSize, iValue);

    if(iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("Last occurance of number is %d ",iRet);
    }

    free(iPtr);

    return 0;
}
