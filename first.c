//enter the marks calculate percentage and print grades
#include <stdio.h>
int main()

{
    int m1,m2,m3,m4,m5,sum,total;
    printf("enter marks of the students\n");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    sum=m1+m2+m3+m4+m5;
    total=500;
    float p = (sum * 100.0) / total;
    printf("percentage is %.2f\n",p);
    if(p>=90)
    {
        printf("grade is A\n");
    }
    else if(p>=75)
    {
        printf("grade is B\n");
    }
    else if(p>=50)
    {
        printf("grade is C\n");
    }
    else if(p>=40)
    {
        printf("grade is D\n");
    }
    else
    {
        printf("grade is F\n");
    }
}