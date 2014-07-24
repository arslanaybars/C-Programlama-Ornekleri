#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


    int x=0x1A;
    int y=0xF2;
    int z;

int main(void)
{
    z=x & y;
    printf("%X\n",z);
    z=x|y;
    printf("%X\n",z);
    z=x ^ y;
    printf("%X\n",z);
    z=x<<7;
    printf("%X\n",z);
    z=x>>7;
    printf("%X\n",z);
    z=~x;
    printf("%X\n",z);

       fflush(stdin);
       getchar();
       return 0;
}

