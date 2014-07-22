#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Aybars ARSLAN bir karakter ve bir sayi girildiginde sayi kadar karakteri yazan program.*/

void Yaz(char a,int sayi);
int main()
{
    char a;
    int sayi;
    printf("Bir karakter giriniz :");
    scanf("%c",&a);
    printf("Bir sayi giriniz :");
    scanf("%d",&sayi);

    Yaz (a,sayi);

    return 0;
    }
    void Yaz (char a,int sayi)
    {
    int i;

      for(i=0;i<=sayi;i++)
      {
      printf("%c",a);
      }

    printf("Program sonlandirmak icin enter tusuna basiniz");

      fflush(stdin);//system girdi parametlerinin bosaltilmasi..
      getchar();//ekrandan deger girilene kadar beklenir..
      return 0;
  }
