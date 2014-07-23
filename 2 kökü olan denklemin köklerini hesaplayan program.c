#include <stdio.h>
#include <conio.h>
#include <math.h>

/*Aybars ARSLAN 2 kökü olan denklemin köklerini hesaplayan program.*/

int main(void)
{
    float a,b,c,d,x1,x2;

    do
    {
    system("cls");

    printf("ax2+bx+c denkleminde a,b,c degerlerini giriniz.\n");
    printf("\na = ");
    scanf("%f",&a);
    printf("\nb = ");
    scanf("%f",&b);
    printf("\nc = ");
    scanf("%f",&c);

    d = (b * b) - (4 * a * c);

    printf("\n\nDelta = %.2f\n",d);

        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("\nx1 = %.2f \nx2 = %.2f",x1,x2);

    if ( x1 > x2 )
       printf("\n\nBuyuk kok = %.2f\n",x1);
    else
       printf("\n\nBuyuk kok = %.2f\n",x2);


    puts("\n\nCikmak icin Y,Devam etmek icin N harfine basiniz");

    }
    while(getchar() == 'N' || getchar() == 'n');

    printf("\n\nProgrami sonlandirmak icin enter tusuna basiniz");


    fflush(stdin);
    getchar();
    return 0;

}
