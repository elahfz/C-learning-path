#include<stdio.h>

int main(){
int x,sayi,faktöriyel=1;
printf("bir sayi giriniz");
scanf("%d" , &sayi);
for (x=1 ; x<=sayi ; x++)
{
    faktöriyel=faktöriyel*x;
}

printf("sayinin faktoriyeli %d" , faktöriyel);


return 0;

}

