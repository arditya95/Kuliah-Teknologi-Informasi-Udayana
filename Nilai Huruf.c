#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b,c,state;
float d;
char ulang;
    input:
    fflush(stdin);
    system("cls");
do{
    printf("+--------------------------------------------------+\n");
    printf("|                  KELOMPOK 2                      |\n");
    printf("+--------------------------------------------------+\n");
    printf("|  Program Menghitung Nilai Angka dan Nilai Huruf  |\n");
    printf("+--------------------------------------------------+\n");
    {
    printf(" Range Nilai 0-100\n");
    printf("\n Masukkan Nilai Tugas     : ");
    if (scanf("%i",&a)!=1)
        {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto input;}
    printf("\n Masukkan Nilai Middle    : ");
	if (scanf("%i",&b)!=1)
        {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto input;}
    printf("\n Masukkan Nilai Ujian     : ");
	if (scanf("%i",&c)!=1)
        {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto input;}
	printf("+--------------------------------------------------+");

if(a>100||b>100||c>100)
{
printf(" Salah satu/beberapa nilai yang anda masukkan melebihi batas nilai tertinggi\n");
}
    d=(a*0.35)+(b*0.3)+(c*0.35);
    printf("\n Nilai Angka = %0.2f\n",d);

if(d<45)
{
	printf(" Nilai Huruf = E\n");
}
else
if(d<55)
{
	printf(" Nilai Huruf = D\n");
}
else
if(d<65)
{
	printf(" Nilai Huruf = C\n");
}
else
if(d<80)
{
	printf("Nilai Huruf = B\n");
}
else
printf(" Nilai Huruf = A\n");
}
    printf("\nUlang Tekan [Y/y] atau Tekan Karakter Lain Untuk Keluar : ");
    scanf("%s",&ulang);
    system ("cls");
}while(ulang=='y'||ulang=='Y');
return 0;
}
