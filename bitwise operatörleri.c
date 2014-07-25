#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


    int x=0x1A;  // 0001 1010 temsil etmekte
    int y=0xF2;  // 1111 0010 temsil etmekte
    int z;

int main(void)
{
    z=x & y;  // x ve y degerlerimizi and-leyerek z değişkenimize atıyoruz
    printf("%X\n",z); // z değişkenimizin degeri
    z=x|y;    // x ve y degelerimizi or-luyoruz
    printf("%X\n",z);
    z=x ^ y;  // x ve y xor
    printf("%X\n",z);
    z=x<<7;  // x'i 7 bit sola kaydırıyoruz
    printf("%X\n",z);
    z=x>>7;  // x'i 7 bit saga kaydiriyoruz
    printf("%X\n",z); 
    z=~x;  // x'in degilini alıyoruz.
    printf("%X\n",z);

       fflush(stdin);
       getchar();
       return 0;
}

