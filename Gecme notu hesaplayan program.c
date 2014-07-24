#include <stdio.h>

int main(void)
{
  int vize,final;
  float ort;
 
  printf("vize ve final notunu giriniz : \n");
  scanf("%d %d",&vize,&final);
 
  ort=(vize*0.4)+(final*0.6);
 
  printf("gecme notun : %2.2f",ort);
  printf("\n\npress enter to exit");
 
  fflush(stdin);
  getchar();
  return 0;
}
