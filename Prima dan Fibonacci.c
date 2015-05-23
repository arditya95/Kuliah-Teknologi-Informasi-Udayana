#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int n,a=0,b=1,c=2,state,i;
    char ulang;
    input:
    fflush(stdin);
    system("cls");
    do{
    printf("+-----------------------------------------------+\n");
    printf("|                  KELOMPOK 2                   |\n");
    printf("+-----------------------------------------------+\n");
    printf("|Menampilkan Deret n Buah Bil. Prima & Fibonacci|\n");
    printf("+-----------------------------------------------+\n");
    {
    printf(" Masukkan Banyak Suku : ");
    if (scanf("%i",&n)!=1)
        {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto input;}
    printf(" Deret %i Buah Bilangan Prima     : ",n);

    while(b<=n)
{
    for(i=2;i<c;i++)
{
    if(c%i==0)
{
    a++;
}
}
    if(a==0)
{
    printf("%i ",c);
    c++;
    b++;
}
    if(a>0)
{
    c++;
    a=0;
}
}
    int i,num1=0, num2=1, temp;
    printf("\n");
    printf(" Deret %i Buah Bilangan Fibonacci : ",n);
    printf("%i ",num2);
    for(i=1;i<n;i++)
{
    temp=num2;
    num2+=num1;
    num1=temp;
    printf("%i ",num2);
}
    }
    printf("\n\nUlang Tekan [Y/y] atau Tekan Karakter Lain Untuk Keluar : ");
    scanf("%s",&ulang);
    system ("cls");
}while(ulang=='y'||ulang=='Y');
}
