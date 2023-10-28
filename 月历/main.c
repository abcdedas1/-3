#include <stdio.h>
main()
{
    int year,month,k,d;
    int h=0;
    int v=0;
    int i=0;
    int day=0;
    int a;
    printf("输入年份和月，注意两者之间要加回车并且只能输入1900年及之后的年份\n");
    scanf("%d",&year);
    if(year<1900)//
    {
        printf("年份错误");
        return 0;
    }
    for(int a=1900;a<year;a=a+1)
    {
    if((a%4==0&&a%100!=0)||(a%400==0))
    {
    day=day+366;
    }
    else
    {
        day=day+365;
    }
    }
    scanf("%d",&month);
    if((year%4==0&&year%100!=0)||(year%400==0))
    {
    switch(month)
    {
    case 1:day=day+0;
    break;
    case 2:day=day+31;
    break;
    case 3:day=day+31+29;
    break;
    case 4:day=day+31+29+31;
    break;
    case 5:day=day+31+29+31+30;
    break;
    case 6:day=day+31+29+31+30+31;
    break;
    case 7:day=day+31+29+31+30+31+30;
    break;
    case 8:day=day+31+29+31+30+31+30+31;
    break;
    case 9:day=day+31+29+31+30+31+30+31+31;
    break;
    case 10:day=day+31+29+31+30+31+30+31+31+30;
    break;
    case 11:day=day+31+29+31+30+31+30+31+31+30+31;
    break;
    case 12:day=day+31+29+31+30+31+30+31+31+30+31+30;
    break;
    }
    }
    else
    {
    switch(month)
    {
    case 1:day=day+0;
    break;
    case 2:day=day+31;
    break;
    case 3:day=day+31+28;
    break;
    case 4:day=day+31+28+31;
    break;
    case 5:day=day+31+28+31+30;
    break;
    case 6:day=day+31+28+31+30+31;
    break;
    case 7:day=day+31+28+31+30+31+30;
    break;
    case 8:day=day+31+28+31+30+31+30+31;
    break;
    case 9:day=day+31+28+31+30+31+30+31+31;
    break;
    case 10:day=day+31+28+31+30+31+30+31+31+30;
    break;
    case 11:day=day+31+28+31+30+31+30+31+31+30+31;
    break;
    case 12:day=day+31+28+31+30+31+30+31+31+30+31+30;
    break;
    }
    }
    k=day%7;
    printf("  日  一  二  三  四  五  六\n");

    while(v<k+1&&k!=6)
    {
        v=v+1;
        printf("    ");
        i=i+1;
    }
    if((year%4==0&&year%100!=0)||(year%400==0))
    {
    switch(month)
    {
    case 4:
    case 6:
    case 9:
    case 11:
    while(h<30)
    {
        h=h+1;
        if(h<10){
        printf("  %d ",h);
        }
        else
        {
            printf(" %d ",h);
        }
        i=i+1;
        if(i%7==0)
        {
            printf("\n");
        }
    }
    break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    while(h<31)
    {
        h=h+1;
        if(h<10){
        printf("  %d ",h);
        }
        else
        {
        printf(" %d ",h);
        }
        i=i+1;
        if(i%7==0)
        {
            printf("\n");
        }
    }
    break;
    case 2:
        while(h<29)
    {
        h=h+1;
        if(h<10){
        printf("  %d ",h);
        }
        else
        {
            printf(" %d ",h);
        }
        i=i+1;
        if(i%7==0)
        {
            printf("\n");
        }
    }
    break;
    }
    }
    else
    {

    switch(month)
    {
    case 4:
    case 6:
    case 9:
    case 11:
    while(h<30)
    {
        h=h+1;
        if(h<10){
        printf("  %d ",h);
        }
        else
        {
        printf(" %d ",h);
        }
        i=i+1;
        if(i%7==0)
        {
            printf("\n");
        }
    }
    break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
            while(h<31)
    {
        h=h+1;
        if(h<10){
        printf("  %d ",h);
        }
        else
        {
            printf(" %d ",h);
        }
        i=i+1;
        if(i%7==0)
        {
            printf("\n");
        }
    }
    break;
    case 2:
        while(h<28)
    {
        h=h+1;
        if(h<10){
        printf("  %d ",h);
        }
        else
        {
            printf(" %d ",h);
        }
        i=i+1;
        if(i%7==0)
        {
            printf("\n");
        }
    }
    break;
    }
    }
    return 0;
}
