#include<stdio.h>
#include<conio.h>
#include<unistd.h>
#define clrscr()printf("\e[1;1H\e[2j")
#define cycle 60
int main()
{
    int hour,minute,second;

    printf("Enter Hour Minute Second:");
    scanf("%d%d%d",&hour,&minute,&second);
    clrscr();

    int h=0,m=0,s=0;
    while(1)
    {
        printf("\n\n\n####### STOP WATCH #######\n\n\n");
        printf("         %.2d:%.2d:%.2d\n",h,m,s);
        printf("\n\n\n##########################\n\n\n");

        if(h==hour && m==minute && s==second)
        {
            break;
        }
        else
        {
            clrscr();
        }
        s++;
        printf("\a");
        Sleep(1000);
        if(s==cycle)
        {
            m++;
            printf("\a");
            s=0;
        }
        if(m==cycle)
        {
            h++;
            printf("\a");
            m=0;
        }
    }


    getch ();
}
