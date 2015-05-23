#include <stdio.h>
#include <math.h>

int main()
{
    int state;
	double a,b,c;
	double diskriminan, x1,x2;
	char ulang;
	input:
    fflush(stdin);
    system("cls");
	do{
    printf("+------------------------------------------+\n");
    printf("|               KELOMPOK 2                 |\n");
    printf("+------------------------------------------+\n");
    printf("|  Program Mencari Akar Persamaan Kuadrat  |\n");
    printf("|      Bentuk Persamaan ax^2+bx+c=0        |\n");
    printf("+------------------------------------------+\n");
    printf(" Masukan Nilai Koefisien a= ");
    if (scanf("%lf",&a)!=1)
        {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto input;}
    printf(" Masukan Nilai Koefisien b= ");
    if (scanf("%lf",&b)!=1)
    {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto input;}
    printf(" Masukan Nilai Koefisien c= ");
    if (scanf("%lf",&c)!=1)
    {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto input;}
    printf("--------------------------------------------");

	if(a==0)
	{
    printf("\n Bukan Persamaan Kuadrat");
    }
    else
    {
	/*Menghitung Diskriminan*/
	diskriminan = b*b-4*a*c;

	/*Evaluasi Diskriminasi*/
	if(diskriminan > 0)
	{
		x1=(-b+sqrt(diskriminan))/(2*a);
		x2=(-b-sqrt(diskriminan))/(2*a);
		printf("\n Akar Real Berbeda :");
		printf("\n x1 = %.2lf\n",x1);
		printf(" x2 = %.2lf\n",x2);
	}
	else
	if(diskriminan == 0)
	{
		x1 = -b/(a*a);
		x2 = x1;
		printf("\n Akar Real Kembar:");
		printf("\n x1 = %.2lf\n",x1);
		printf(" x2 = %.2lf\n",x2);
	}
	else /*Diskriminan < 0*/
	{
		printf("\n Akar Imajiner :");
		printf("\n x1 = %.2lf",x1);
		printf("\n x2 = %.2lf",x2);
	}
	printf("\nUlang Tekan [Y/y] atau Tekan Karakter Lain Untuk Keluar : ");
    scanf("%s",&ulang);
    system ("cls");
	}

}while(ulang=='y'||ulang=='Y');
return 0;
}
