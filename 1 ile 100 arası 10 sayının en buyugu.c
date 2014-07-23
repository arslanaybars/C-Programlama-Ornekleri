#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Aybars ARSLAN*/

int randmax(void);

int main ()
{
    int y;

    y = randmax();

    return 0;
}

int randmax(void)
{
    int a,max,j;

    srand(time(NULL));

    max = 0;

    for (j=0 ; j<10 ; j++) {
        a = rand()%100;
        printf("%d\n",a);

        if (max<a) max=a;
    }

    printf("En buyuk deger = %d\n",max);

    return max;


}
