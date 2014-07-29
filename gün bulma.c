#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
int gun,ay,yil;
long gt;
do
{
system("cls");
printf("Tarihi giriniz \n");
printf("Gun : "); scanf("%d",&gun);
printf("Ay : "); scanf("%d",&ay);
printf("Yil : "); scanf("%d",&yil);
gt=(((yil*1)*365)+(yil/4));
if(ay==2)
gt=gt+31;
else if(ay==3)
gt=gt+31+28;
else if(ay==4)
gt=gt+31+28+31;
else if(ay==5)
gt=gt+31+28+31+30;
else if(ay==5)
gt=gt+31+28+31+30+31;
else if(ay==6)
gt=gt+31+28+31+30+31;
else if(ay==7)
gt=gt+31+28+31+30+31+30;
else if(ay==8)
gt=gt+31+28+31+30+31+30+31;
else if(ay==9)
gt=gt+31+28+31+30+31+30+31+30;
else if(ay==10)
gt=gt+31+28+31+30+31+30+31+30+31;
else if(ay==11)
gt=gt+31+28+31+30+31+30+31+30+31+30;
else if(ay==12)
gt=gt+31+28+31+30+31+30+31+30+31+30+31;
gt=gt+gun;
if(yil%4==0 && ay>2)
gt=gt+1;
gt=gt%7;
if(gt==1)
printf("Pazar");
else if (gt==2)
printf("Pazartesi");
else if (gt==3)
printf("Sali");
else if (gt==4)
printf("Carsamba");
else if (gt==5)
printf("Persembe");
else if (gt==6)
printf("Cuma");
else if (gt==7)
printf("Cumartesi");
puts("\n\nCikmak icin Y harfine,Devam etmek icin N harfine basiniz..");
}while(getch() == 'n' || getch() == 'N');
fflush(stdin);
getchar();
return 0;
}

/********************************************************/
/********************************************************/
/********************************************************/
/******************written by Aybarslan******************/
/********************************************************/
/********************************************************/
/********************************************************/
