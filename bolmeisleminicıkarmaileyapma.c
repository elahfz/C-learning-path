#include<stdio.h>
int main(){

int bolunen,bolen;

printf("bolmek istediginiz sayiyi giriniz");
scanf("%d" , &bolunen);

printf("kaca bolmek istersiniz");
scanf("%d" ,&bolen);

int bolum=0;

    while (bolunen>= bolen)
    {
       bolunen=bolunen-bolen;
       bolum++;
    }

printf("bolum=%d,kalan=%d",bolum,bolunen);
return 1;


    return 0;
}