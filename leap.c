#include <stdio.h>

	int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d",&year);

    if(year%4 == 0)
    {
        if( year%100 == 0)
        {
            // year is divisible by 400, hence the year is a leap year
            if ( year%400 == 0)
                printf("yes", year);
            else
                printf("no", year);
        }
        else
            printf("yes", year );
    }
    else
        printf("no", year);
    
    return 0;
}
