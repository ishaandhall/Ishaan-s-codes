#include <stdio.h>
int main()
{
    int sec;
    printf("Enter seconds: ");
    scanf("%d", &sec);
    if(sec>=3600)
    {
        printf("%d hour(s) ", sec/3600);
        sec=sec%3600;
    }
    if(sec>=60)
    {
        printf("%d minute(s) ", sec/60);
        sec=sec%60;
    }
    printf("%d second(s)\n", sec);
    return 0;
}
