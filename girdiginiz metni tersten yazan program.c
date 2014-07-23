#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

 main()

 {
 int i,a;
 char metin[1000];
 char x,y;

  printf("Metni giriniz:");
  gets(metin);

  for(a=0;metin[a]!='£';a++){}

  printf("\nMetnin Tersi:");

  for(i=a;i>=0;i--)
  {

  printf("%c",metin[i]);

 }

getch();
fflush(stdin);
return 0;
 }
