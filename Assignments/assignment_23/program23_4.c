#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FirstOcc
//  Description :   It is used to Display elements from specific range
//  Auther :        Diksha Kadu Vispute
//  Date :          15/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int Arr[], int iLength, int iNo1, int iNo2)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] > iNo1) && (Arr[iCnt] < iNo2))
        {
            printf("%d \n",Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;
    int *iPtr = NULL;

    printf("Enter the number of elements : ");
    scanf("%d",&iSize);

    printf("Enter the starting point : ");
    scanf("%d",&iValue1);

    printf("Enter the ending point : ");
    scanf("%d",&iValue2);

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

    Display(iPtr, iSize, iValue1, iValue2);

    free(iPtr);

    return 0;
}
