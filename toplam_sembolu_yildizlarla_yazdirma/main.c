#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,r,s;

    for(r=0;r<1;r++)
    {
        for(a=0;a<11;a++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(r=0;r<9;r++)
    {
        for(s=-1;s<1*r;s++)
        {
            printf("  ");
        }
        for(a=0;a<1;a++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(r=0;r<9;r++)
    {
        for(s=0;s<9-1*r;s++)
        {
            printf("  ");
        }
        for(a=0;a<1;a++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(r=10;r<11;r++)
    {
        for(a=0;a<11;a++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
