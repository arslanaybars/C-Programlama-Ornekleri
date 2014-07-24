#include <stdio.h>
#include <stdlib.h>
#include <time.h>//srandı kullanmak icin kütüphanemizi ekledik

int max(int*,int);

main(void)
{
    int *x;
    int i;

printf("10 elamanli dinamik bir diziye rasgele eleman yerlestirilmesi\n");
printf("ve bu 10 elamanli dinamik dizinin en buyuk elemaninin bulunmasi\n\n");
printf("\nmaximum number is %d\n\n",max(x,i));//En büyük sayıyı ekrana yazdırıyor.
return 0;
}

    int max(int *a,int b) //Maximum Degeri bulacak olan fonksiyon
{
    a=malloc(10*sizeof(int));//40 tane sekizli alan a için rezerve ediliyor.
    srand(time(NULL));
        for (b=0;b<10;b++)
    {
    *a = rand()%101;
    a++;
    }

    a-=10;//1. bellek alanina aliyoruz..

        for (b=0;b<10;b++)
    {
    printf("%p ----> %d\n",a,*a);//tutulan sayilari yazdiriyor
    a++;
    }

    a-=10;
    int max = 0;
        for(b=0;b<10;b++)
    {
    if (max < *a)
    max=*a;
    a++;
    }
    return max;
}
