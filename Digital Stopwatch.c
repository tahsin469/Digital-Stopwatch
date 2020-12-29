#include <stdio.h>
#define CYCLE 60
#include <unistd.h>
#include <conio.h>
int main()
{
    int hours, minutes, seconds;
    printf("Enter Hours Minutes Seconds:");
    scanf("%d%d%d", &hours, &minutes, &seconds);
     system("cls");
    int HOURS=0,MINUTES=0,SECONDS=0;
    while (1)
    {
        printf("Digital Stop Watch \n \n \n");
         printf("%.2d:%.2d:%.2d\n", HOURS, MINUTES, SECONDS);
        if (HOURS==hours&&MINUTES==minutes&&SECONDS==seconds){
            break;
        }
        SECONDS++;
        sleep(1);
        if(SECONDS==CYCLE)
        {
           MINUTES++;
           SECONDS=0;
        }
        else
        {
            system("cls");
        }
        if (MINUTES==CYCLE)
        {
            HOURS++;
            MINUTES=0;
        }
    }
    return 0;
}
