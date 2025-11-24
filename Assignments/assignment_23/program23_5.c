#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Product
//  Description :   It is used to give product of all odd elements
//  Input :         Integers 
//  Output :        Integer
//  Auther :        Diksha Kadu Vispute
//  Date :          15/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Product(int Arr[], int iLength)
{
    int iCnt = 0, iMult = 0;

    for(iCnt = 0,iMult = 1; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iMult = iMult * Arr[iCnt];
        }
    }

    return iMult;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;
    int *iPtr = NULL;
    int iRet = 0;

    printf("Enter the number of elements :");
    scanf("%d",&iSize);

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

    iRet = Product(iPtr, iSize);

    printf("Product of all odd elements is : %d\n",iRet);

    free(iPtr);

    return 0;
}
