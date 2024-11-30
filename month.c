#include<stdio.h>
#include<string.h>

enum month{jan,feb,mar,apr,may,june,july,aug,sept,oct,nov,dec};

int main()
{
    enum month d;int n;
    printf("Enter the no btw(0-11)");
    scanf("%d",&n);
    d=n;
    switch(d)
    {
        case jan:printf("January");
        break;
        case feb:printf("February");
        break;
        case mar:printf("March");
        break;
        case apr:printf("April");
        break;
        case may:printf("May");
        break;
        case june:printf("June");
        break;
        case july:printf("July");
        break;
        case aug:printf("August");
        break;
        case sept:printf("September");
        break;
        case oct:printf("October");
        break;
        case nov:printf("November");
        break;
        case dec:printf("December");
        break;
        default:printf("Invalid No");
    }
    return 0;



}
