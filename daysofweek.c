#include<stdio.h>
#include<string.h>

enum daysofweek{Sun,Mon,Tues,Wed,Thurs,Fri,Sat};
    int main()
    {
        enum daysofweek d;int x;
        printf("Enter the no between(0-6)\n");
        scanf("%d",&x);
        d=x;
        switch(d)
        {
            case Sun:printf("Sunday");
            break;
            case Mon:printf("Monday");
            break;
            case Tues:printf("Tuesday");
            break;
            case Wed:printf("Wednesday");
            break;
            case Thurs:printf("Thursday");
            break;
            case Fri:printf("Friday");
            break;
            case Sat:printf("Saturday");
            break;
            default :printf("Invalid No");

        
        }
        return 0;

    }
