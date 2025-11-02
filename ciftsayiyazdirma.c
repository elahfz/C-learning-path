#include<stdio.h>
int main(){

int x,y;
printf("bir sayi giriniz");
scanf("%d" ,&x);

for (y=0 ; y<=x ; y++)
{
    if (y%2==0)
    {
    printf("%d\n" ,y);
    }
    
}

return 0;
}
