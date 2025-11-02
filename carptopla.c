#include<stdio.h>

int main()
{
int sayi1,sayi2,z,toplam=0;

printf("carpmak istediginiz 1.sayiyi giriniz");
scanf("%d" ,&sayi1);

printf("carpmak istediginiz 2.sayiyi giriniz");
scanf("%d" ,&sayi2);

for (z=1 ; z<=sayi2 ; z++)
{
toplam=toplam+sayi1;
}
printf("sonuc= %d" ,toplam);

    return 0;
}