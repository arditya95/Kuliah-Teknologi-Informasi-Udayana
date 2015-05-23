#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float persegi();
float persegipanjang();
float lingkaran();
float segitiga();
float trapesium();
float jajargenjang();
float belahketupat();
float layanglayang();
int back(void);
int exitcreen(void);

int main(){
    char ulang;
    int state, pilihan;
    input:
    system("cls");
    fflush(stdin);
        {
            kelompok2();
    printf("|  PROGRAM MENGHITUNG LUAS DAN KELILING BANGUN DATAR  |\n");
    printf("|    [1]. Persegi                                     |\n");
    printf("|    [2]. Persegi Panjang                             |\n");
    printf("|    [3]. Lingkaran                                   |\n");
    printf("|    [4]. Segitiga                                    |\n");
    printf("|    [5]. Trapesium                                   |\n");
    printf("|    [6]. Jajar Genjang                               |\n");
    printf("|    [7]. Belah Ketupat                               |\n");
    printf("|    [8]. Layang - Layang                             |\n");
    printf("+-----------------------------------------------------+\n");
    printf("\nPilihan Kode Bangun Datar : ");
    if (scanf("%d",&pilihan)!=1) {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause"); goto input;}
    {
        switch(pilihan){
        case 1 :
            persegi();
            break;
        case 2 :
            persegipanjang();
            break;
        case 3 :
            lingkaran();
            break;
        case 4 :
            segitiga();
            break;
        case 5 :
            trapesium();
            break;
        case 6 :
            jajargenjang();
            break;
        case 7 :
            belahketupat();
            break;
        case 8 :
            layanglayang();
            break;
        default :
        printf("\n*Maaf Kode yang Anda Masukkan Tidak Tepat..*\n");
        back();
        }
    }
        }
    return 0;
}

        float persegi(){
            float s,luas, keliling;
            inputpersegi :
            system("cls");
            fflush(stdin);
            kelompok2();
            printf("=======================================================\n");
            printf("\n          Menghitung Luas dan Keliling Persegi         \n");
            printf("\n=======================================================\n");
            printf("\nMasukan sisi     : ");
            if (scanf("%f", &s)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputpersegi;}
            luas = s * s;
            keliling = 4 * s;
            printf("\nLuas Persegi     : %.2f", luas);
            printf("\nKeliling Persegi : %.2f", keliling);
            printf("\n=======================================================\n");
            back();
            return 0;
        }

        float persegipanjang(){
            float p, l, luas, keliling;
            inputpersegipanjang :
            system("cls");
            fflush(stdin);
            kelompok2();
            printf("=======================================================\n");
            printf("\n      Menghitung Luas dan Keliling Persegi Panjang     \n");
            printf("\n=======================================================\n");
            printf("\nMasukan nilai panjang    : ");
            if (scanf("%f", &p)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputpersegipanjang;}
            printf("Masukian nilai lebar     : ");
            if (scanf("%f", &l)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputpersegipanjang;}
            luas = p * l;
            keliling = 2 * p + l;
            printf("\nLuas persegi panjang     : %.2f ", luas);
            printf("\nKeliling persegi panjang : %.2f ", keliling);
            printf("\n=======================================================\n");
            back();
            return 0;
        }

        float lingkaran(){
            float r, d, luasl, kelilingl;
            float phi = 3.14;
            inputlingkaran :
            system("cls");
            fflush(stdin);
            kelompok2();
            printf("=======================================================\n");
            printf("\n         Menghitung Luas dan Keliling Lingkaran        \n");
            printf("\n=======================================================\n");
            printf("\nMasukan jari-jari  : ");
            if (scanf("%f", &r)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputlingkaran;}
            d = 2 * r;
            luasl = phi * r * r;
            kelilingl = phi * d;
            printf("\nLuas Lingkaran     : %.2f", luasl);
            printf("\nKeliling Lingkaran : %.2f", kelilingl);
            printf("\n=======================================================\n");
            back();
            return 0;
        }

        float segitiga(){
            int x;
            float l, kll, a, b, c, temp1, temp2, t;
            double temp;
            inputjenisegitiga :
            system("cls");
            fflush(stdin);
            kelompok2();
            printf("|  JENIS-JENIS SEGITIGA :                             |\n");
            printf("|     [1]. Segitiga Sembarang                         |\n");
            printf("|     [2]. Segitiga Siku-Siku                         |\n");
            printf("|     [3]. Segitiga Sama Kaki atau Sama Sisi          |\n");
            printf("+-----------------------------------------------------+\n");
            printf("\nPilih Jenis Segitiga : ");
            if (scanf("%i", &x)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputjenisegitiga;}
            printf("\n");
            switch(x)
                {
                case 1 :
                    inputsegitigasembarang :
                    system("cls");
                    fflush(stdin);
                    kelompok2();
                    printf("=======================================================\n");
                    printf("\n          Luas dan Keliling Segitiga Sembarang         \n");
                    printf("\n=======================================================\n\n");
                    printf("Masukkan Sisi 1 segitiga sembarang : ");
                    if (scanf("%f", &a)!=1)
                        {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputsegitigasembarang;}
                    printf("Masukkan Sisi 2 segitiga sembarang : ");
                    if (scanf("%f", &b)!=1)
                        {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputsegitigasembarang;}
                    printf("Masukkan Sisi 3 segitiga sembarang : ");
                    if (scanf("%f", &c)!=1)
                        {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputsegitigasembarang;}
                    printf("\n");

                    kll=a+b+c;
                    temp1=kll/2;
                    temp2=temp1*(temp1-a)*(temp1-b)*(temp1-c);
                    l=sqrt(temp1);
                    break;

                case 2 :
                    inputsegitigasiku :
                    system("cls");
                    fflush(stdin);
                    kelompok2();
                    printf("=======================================================\n");
                    printf("\n         Luas dan Keliling Segitiga Siku-Siku          \n");
                    printf("\n=======================================================\n\n");
                    printf("Masukkan Alas segitiga             : ");
                    if (scanf("%f", &a)!=1)
                        {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputsegitigasiku;}
                    printf("Masukkan Sisi Miring segitiga      : ");
                    if (scanf("%f", &b)!=1)
                        {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputsegitigasiku;}
                    printf("Masukkan Tinggi segitiga           : ");
                    if (scanf("%f", &t)!=1)
                        {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputsegitigasiku;}
                    printf("\n");

                    kll=a+b+t;
                    l=a*t/2;
                    break;

                case 3 :
                    inputsegitigasama :
                    system("cls");
                    fflush(stdin);
                    kelompok2();
                    printf("=======================================================\n");
                    printf("\n  Luas dan Keliling Segitiga Sama Kaki atau Sama Sisi  \n");
                    printf("\n=======================================================\n\n");
                    printf("Masukkan Alas segitiga             : ");
                    if (scanf("%f", &a)!=1)
                        {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputsegitigasama;}
                    printf("Masukkan Sisi Miring segitiga      : ");
                    if (scanf("%f", &b)!=1)
                        {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputsegitigasama;}
                    printf("Masukkan Tinggi segitiga           : ");
                    if (scanf("%f", &t)!=1)
                        {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputsegitigasama;}
                    printf("\n");

                    kll=a+b*2;
                    l=a*t/2;
                    break;

                default :
                    printf("Kode Program Salah");
                }
                    printf("\nLuas segitiga                      : %.2f cm^2\n",l);
                    printf("Keliling segitiga                  : %.2f cm",kll);
                    printf("\n=======================================================\n");
                    back();
            return 0;
        }

        float trapesium(){
            float sa, sb, ski, ska, t, luast, kelilingt;
            inputtrapesium :
            system("cls");
            fflush(stdin);
            kelompok2();
            printf("=======================================================\n");
            printf("\n         Menghitung Luas dan Keliling Trapesium        \n");
            printf("\n=======================================================\n");
            printf("\nMasukan sisi atas  : ");
            if (scanf("%f", &sa)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputtrapesium;}
            printf("Masukan sisi bawah : ");
            if (scanf("%f", &sb)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputtrapesium;}
            printf("Masukan tinggi     : ");
            if (scanf("%f", &t)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputtrapesium;}
            printf("Masukan sisi kiri  : ");
            if (scanf("%f", &ski)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputtrapesium;}
            printf("Masukan sisi kanan : ");
            if (scanf("%f", &ska)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputtrapesium;}

            luast = (sa + sb) * t / 2;
            kelilingt = sa + sb+ ski + ska;
            printf("\nLuas Trapesium     : %.2f", luast);
            printf("\nKeliling Trapesium : %.2f", kelilingt);
            printf("\n=======================================================\n");
            back();
            return 0;
        }

        float jajargenjang(){
            float a, t, s1, s2, luasj, kelilingj;
            inputjajargenjang :
            system("cls");
            fflush(stdin);
            kelompok2();
            printf("=======================================================\n");
            printf("\n       Menghitung Luas dan Keliling Jajargenjang       \n");
            printf("\n=======================================================\n");
            printf("\nMasukan alas            : ");
            if (scanf("%f", &a)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputjajargenjang;}
            printf("Masukan tinggi          : ");
            if (scanf("%f", &t)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputjajargenjang;}
            printf("Masukan sisi horizontal : ");
            if (scanf("%f", &s1)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputjajargenjang;}
            printf("Masukan sisi miring     : ");
            if (scanf("%f", &s2)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputjajargenjang;}

            luasj = a * t;
            kelilingj = (s1 + s2) * 2;
            printf("\nLuas Jajargenjang       : %.2f", luasj);
            printf("\nKeliling Jajargenjang   : %.2f", kelilingj);
            printf("\n=======================================================\n");
            back();
            return 0;
        }

        float belahketupat(){
            float d1, d2, s, luasb, kelilingb;
            inputbelahketupat :
            system("cls");
            fflush(stdin);
            kelompok2();
            printf("=======================================================\n");
            printf("\n       Menghitung Luas dan Keliling Belah Ketupat      \n");
            printf("\n=======================================================\n");
            printf("\nMasukan diagonal 1     : ");
            if (scanf("%f", &d1)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputbelahketupat;}
            printf("Masukan diagonal 2     : ");
            if (scanf("%f", &d2)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputbelahketupat;}
            printf("Masukan sisi           : ");
            if (scanf("%f", &s)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputbelahketupat;}

            luasb = d1 * d2 / 2;
            kelilingb = 4 * s;
            printf("\nLuas Belah Ketupat     : %.2f", luasb);
            printf("\nKeliling Belah Ketupat : %.2f", kelilingb);
            printf("\n=======================================================\n");
            back();
            return 0;
        }

        float layanglayang(){
            float d1, d2, s1, s2, luasl, kelilingl;
            inputlayang :
            system("cls");
            fflush(stdin);
            kelompok2();
            printf("=======================================================\n");
            printf("\n       Menghitung Luas dan Keliling Layang-layang      \n");
            printf("\n=======================================================\n");
            printf("\nMasukan diagonal 1     : ");
            if (scanf("%f", &d1)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputlayang;}
            printf("Masukan diagonal 2     : ");
            if (scanf("%f", &d2)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputlayang;}
            printf("Masukan sisi panjang   : ");
            if (scanf("%f", &s1)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputlayang;}
            printf("Masukan sisi pendek    : ");
            if (scanf("%f", &s2)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputlayang;}

            luasl = d1 * d2 / 2;
            kelilingl = 2 * (s1 + s2);
            printf("\nLuas Layang-layang     : %.2f", luasl);
            printf("\nKeliling Layang-layang : %.2f", kelilingl);
            printf("\n=======================================================\n");
            back();
            return 0;
        }

int back()
    {
    char h;
    printf("\nUlang Tekan [Y/y] atau Tekan Karakter Lain Untuk Keluar : ");
    scanf("%s",&h);
    system("cls");
    if(h=='y'||h=='Y')
    {
        main();
    }
    else
    {
        exitcreen();
    }
return 0;
}

int exitcreen()
{
    printf("Terimakasih telah menggunakan program ini \n");
    printf("\nTekan enter untuk keluar\n");
return 0;
}

void kelompok2()
{
    printf("+-----------------------------------------------------+\n");
    printf("|                     KELOMPOK 2                      |\n");
    printf("+-----------------------------------------------------+\n");
}
