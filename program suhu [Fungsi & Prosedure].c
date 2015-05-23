#include <stdio.h>
float suhucelcius(float suhu); //Deklarasi Fungsi
void suhurheamur(float suhu); //Deklarasi Procedure
main()
{
float suhu, hasil;
int pilihan,state;
char ulang;
    input:
    system("cls");
    fflush(stdin);
do{
    printf("+----------------------------------------------------+\n");
    printf("|                    KELOMPOK 2                      |\n");
    printf("+----------------------------------------------------+\n");
    printf("|  Pilih satuan suhu yang ingin anda konversikan :   |\n");
    printf("|    1. Celcius ke Rheamur                           |\n");
    printf("|    2. Rheamur ke Celcius                           |\n");
    printf("+----------------------------------------------------+\n");
    printf("\n Pilihan Anda : ");
    if (scanf("%d",&pilihan)!=1)
        {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto input;}
	{
    switch(pilihan)
    {
    case 1:
    inputcelcius:
    fflush(stdin);
    printf("\n Masukkan Besar Suhu : ");
    if (scanf("%f", &suhu)!=1)
        {
            printf(" Nilai yang Dimasukkan Salah.\n");
            goto inputcelcius;
        }
    printf(" Suhu dalam Rheamur : %.2f Rheamur\n", suhucelcius(suhu));// Fungsi
    break;

    case 2:
    inputrheamur:
    fflush(stdin);
    printf("\n Masukkan Besar Suhu : ");
    if (scanf("%f", &suhu)!=1)
        {
            printf(" Nilai yang Dimasukkan Salah.\n");
            goto inputrheamur;
        }
    suhurheamur(suhu);// Procedure
    break;

    default:
    printf(" Maaf Kode yang Anda Masukkan Tidak Tepat..\n");
    }
}
    printf("\nUlang Tekan [Y/y] atau Tekan Karakter Lain Untuk Keluar : ");
    scanf("%s",&ulang);
    system ("cls");
}while(ulang=='y'||ulang=='Y');
return 0;
}

float suhucelcius(float suhu) //Fungsi
{
    float hasil;
    hasil=suhu*0.8;
    return hasil;
}

void suhurheamur(float suhu) //Prosedure
{
    float hasil;
    hasil=suhu/0.8;
    printf("suhu dalam Celcius : %.2f Celcius\n",hasil);
}
