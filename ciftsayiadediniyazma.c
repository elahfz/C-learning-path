#include<stdio.h>
int main(){

int i,n;
int t=0;
printf("bir sayi giriniz");
scanf("%d" ,&n);

for (i=0 ; i<=n ; i++)
{

    if (i%2==0)
    {
    t=t+1;
    }
    }
    printf("0'dan %d'ye kadar olan cift sayilarin adedi:%d\n" ,n,t);
    return 0;
}









