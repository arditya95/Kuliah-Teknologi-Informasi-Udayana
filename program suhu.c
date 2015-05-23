#include <stdio.h>
main()
{
float suhu, hasil;
int pilihan,state;
char ulang;
    input:
    fflush(stdin);
    system("cls");
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
    hasil=suhu*0.8;
    printf(" Suhu Dalam Celcius : %.2f Celcius\n", hasil);
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
    hasil=suhu/0.8;
    printf(" Suhu dalam Rheamur : %.2f Rheamur\n", hasil);
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
