#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplaySchedule
//  Description :   It is used to display exam time according to divisions
//  Input :         character
//  Output :        int
//  Auther :        Diksha Kadu Vispute
//  Date :          27/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplaySchedule(char chDiv)
{
    if((chDiv == 'A') || (chDiv == 'a'))
    {
        printf("The Exam starts at 7 AM\n");
    }
    else if((chDiv == 'B') || (chDiv == 'b'))
    {
        printf("The Exam starts at 8:30 AM\n");
    }
    else if((chDiv == 'C') || (chDiv == 'c'))
    {
        printf("The Exam starts at 9:20 AM\n");
    }
    else if((chDiv == 'D') || (chDiv == 'd'))
    {
        printf("The Exam starts at 10:30 AM\n");
    }
    else
    {
        printf("Invalid Division\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your Division :\n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;

}