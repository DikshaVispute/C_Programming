#include <stdio.h>

/////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   It is used to print numbers from 5 to 1 on screen 
//  Author :        Diksha Kadu Vispute
//  Date :          15/11/2025
//
///////////////////////////////////////////////////////////

void Display()
{
    int i = 0;
    i = 5;
    while(i > 0)
    {
        printf("%d\t",i);
        i--;
    }
}
int main()
{
    Display();

    return 0;
}