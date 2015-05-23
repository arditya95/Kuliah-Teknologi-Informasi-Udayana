#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void kubus (float);
void balok (float, float, float);
void bola (float);
void limassegitiga (void);
void limassegiempat (float, float, float);
void prismasegitiga (void);
int back(void);
int exitcreen(void);

main()
{
    int kode,state;
    char ulang;
    float s, phi, r, a, p, l , pa, ta, t, ab, bc, ac;
    input:
    system("cls");
    fflush(stdin);
    kelompok2();
    printf("|  PROGRAM MENGHITUNG LUAS DAN KELILING BANGUN RUANG  |\n");
    printf("|    [1]. Kubus                                       |\n");
    printf("|    [2]. Balok                                       |\n");
    printf("|    [3]. Bola                                        |\n");
    printf("|    [4]. Limas Segitiga                              |\n");
    printf("|    [5]. Limas Segiempat                             |\n");
    printf("|    [6]. Prisma Segitiga                             |\n");
    printf("+-----------------------------------------------------+\n");
    printf("\nPilihan Kode Bangun Ruang : ");
    if (scanf("%d",&kode)!=1) {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto input;}
        printf("\n");
        switch(kode){
        case 1 :
            inputkubus :
            system("cls");
            fflush(stdin);
            kelompok2();
            printf("========================================================\n");
            printf("\n       PROGRAM MENGHITUNG LUAS DAN KELILING KUBUS       \n");
            printf("\n========================================================\n");
            printf("\nMasukan sisi         : ");
            if (scanf("%f", &s)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputkubus;}
            kubus(s);
            break;

        case 2 :
            inputbalok:
            system("cls");
            fflush(stdin);
            kelompok2();
            printf("========================================================\n");
            printf("\n       PROGRAM MENGHITUNG LUAS DAN KELILING BALOK       \n");
            printf("\n========================================================\n");
            printf("\nMasukan panjang      : ");
            if (scanf("%f", &p)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputbalok;}
            printf("Masukan lebar        : ");
            if (scanf("%f", &l)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputbalok;}
            printf("Masukan tinggi       : ");
            if (scanf("%f", &t)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputbalok;}
            balok (p, l, t);
            break;

        case 3 :
            inputbola:
            system("cls");
            fflush(stdin);
            kelompok2();
            printf("========================================================\n");
            printf("\n        PROGRAM MENGHITUNG LUAS DAN KELILING BOLA       \n");
            printf("\n========================================================\n");
            printf("\nMasukan jari-jari   : ");
            if (scanf("%f", &r)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputbola;}
            bola (r);
            break;

        case 4 :
            kelompok2();
            printf("========================================================\n");
            printf("\n   PROGRAM MENGHITUNG LUAS DAN KELILING LIMAS SEGITIGA  \n");
            printf("\n========================================================\n");
            limassegitiga ();
            break;

        case 5 :
            inputlimassegiepat:
            system("cls");
            fflush(stdin);
            kelompok2();
            printf("========================================================\n");
            printf("\n  PROGRAM MENGHITUNG LUAS DAN KELILING LIMAS SEGIEMPAT  \n");
            printf("\n========================================================\n");
            printf("\nMasukan panjang                : ");
            if (scanf("%f", &p)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputlimassegiepat;}
            printf("Masukan lebar                  : ");
            if (scanf("%f", &l)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputlimassegiepat;}
            printf("Masukan tinggi                 : ");
            if (scanf("%f", &t)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputlimassegiepat;}
            limassegiempat (p, l, t);
            break;

        case 6 :
            kelompok2();
            printf("========================================================\n");
            printf("\n  PROGRAM MENGHITUNG LUAS DAN KELILING PRISMA SEGITIGA  \n");
            printf("\n========================================================\n");
            prismasegitiga ();
            break;

        default :
            printf("\n*Maaf Kode yang Anda Masukkan Tidak Tepat..*\n");
            back();
        }
return 0;
}

    void kubus (float s){
        float volumek, luask;
        volumek = s * s * s;
        luask = 6 * s * s;
        printf("\nLuas Permukaan Kubus : %.2f", luask);
        printf("\nVolume Kubus         : %.2f", volumek);
        printf("\n========================================================\n");
        back();
    }

    void balok (float p, float l, float t){
        float volumeb, luasb;
        volumeb = p * l * t;
        luasb = 2*((p*l)+(p*t)+(l*t));
        printf("\nLuas Permukaan Balok : %.2f", luasb);
        printf("\nVolume Balok         : %.2f", volumeb);
        printf("\n========================================================\n");
        back();
    }

    void bola (float r){
        float volumebo, luasbo, phi = 3.14;
        volumebo = 4 * phi * r * r;
        luasbo = (4 * phi * r * r * r) / 3;
        printf("\nLuas Permukaan Bola : %.2f", luasbo);
        printf("\nVolume Bola         : %.2f", volumebo);
        printf("\n========================================================\n");
        back();
    }

    void limassegitiga(void)
    {
        int x,y;
        float v, lp, la, t, kll, temp1, a, b, c, lsa, lsb, lsc;
        double temp2;
        inputjenislimas:
        system("cls");
        fflush(stdin);
        kelompok2();
        printf("|  JENIS-JENIS LIMAS SEGITIGA :                       |\n");
        printf("|     [1]. Limas Segitiga Sembarang                   |\n");
        printf("|     [2]. Limas Segitiga Siku-Siku                   |\n");
        printf("|     [3]. Limas Segitiga Sama Kaki atau Sama Sisi    |\n");
        printf("+-----------------------------------------------------+\n");
        printf("\nPilih Jenis Limas Segitiga : ");
        if (scanf("%i", &x)!=1)
            {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputjenislimas;}
        printf("\n");
        switch(x){
        case 1 :
            inputlimassembarang:
            system("cls");
            fflush(stdin);
            kelompok2();
            printf("========================================================\n");
            printf("\n        Volume dan Luas Limas Segitiga Sembarang        \n");
            printf("\n========================================================\n\n");
            printf("Masukkan Sisi Alas 1 limas         : ");
            if (scanf("%f", &a)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputlimassembarang;}
            printf("Masukkan Sisi Alas 2 limas         : ");
            if (scanf("%f", &b)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputlimassembarang;}
            printf("Masukkan Sisi Alas 3 limas         : ");
            if (scanf("%f", &c)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputlimassembarang;}
            printf("Masukkan Tinggi limas              : ");
            if (scanf("%f", &t)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputlimassembarang;}
            printf("\n");

            kll=a+b+c;
            temp1=kll/2;
            temp2=temp1*(temp1-a)*(temp1-b)*(temp1-c);
            la=sqrt(temp2);
            v=la*t/3;
            lsa=a*t/2;
            lsb=b*t/2;
            lsc=c*t/2;
            temp1=lsa+lsb+lsc;
            lp=la+temp1;
            break;

        case 2 :
            inputlimassiku:
            system("cls");
            fflush(stdin);
            kelompok2();
            printf("========================================================\n");
            printf("\n        Volume dan Luas Limas Segitiga Siku-Siku        \n");
            printf("\n========================================================\n\n");
            printf("Masukkan Alas segitiga             : ");
            if (scanf("%f", &a)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputlimassiku;}
            printf("Masukkan Sisi Miring Alas segitiga : ");
            if (scanf("%f", &b)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputlimassiku;}
            printf("Masukkan Tinggi Alas segitiga      : ");
            if (scanf("%f", &c)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputlimassiku;}
            printf("Masukkan Tinggi limas              : ");
            if (scanf("%f", &t)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputlimassiku;}
            printf("\n");

            la=a*c/2;
            v=la*t/3;

            lsa=a*t/2;
            lsb=b*t/2;
            lsc=c*t/2;
            temp1=lsa+lsb+lsc;
            lp=la+temp1;
            break;

        case 3 :
            inputlimassama:
            system("cls");
            fflush(stdin);
            kelompok2();
            printf("========================================================\n");
            printf("\n Volume dan Luas Limas Segitiga Sama Kaki atau Sama Sisi\n");
            printf("\n========================================================\n\n");
            printf("Masukkan Alas segitiga             : ");
            if (scanf("%f", &a)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputlimassama;}
            printf("Masukkan Sisi Miring Alas segitiga : ");
            if (scanf("%f", &b)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputlimassama;}
            printf("Masukkan Tinggi Alas segitiga      : ");
            if (scanf("%f", &c)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputlimassama;}
            printf("Masukkan Tinggi limas              : ");
            if (scanf("%f", &t)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputlimassama;}
            printf("\n");
            la=a*c/2;
            v=la*t/3;

            lsa=a*t/2;
            lsb=2*(b*t/2);
            temp1=lsa+lsb;

            lp=la+temp1;
            break;

        default :
            printf("Kode Program Salah");
        }
        printf("\nVolume limas segitiga              : %.2f cm^3\n",v);
        printf("Luas Permukaan limas segitiga      : %.2f cm^2",lp);
        printf("\n========================================================\n");
        back();
    }

    void limassegiempat (float p, float l, float t){
        float luasle, volumele;
        volumele = 1 * (p * l * t) / 3;
        luasle = ((p+ l) *t)+(p * l);
        printf("\nLuas Permukaan Limas Segiempat : %.2f", luasle);
        printf("\nVolume Limas Segiempat         : %.2f", volumele);
        printf("\n========================================================\n");
        back();
    }

    void prismasegitiga (){
        int x;
        float v, lp, la, kll, t, a, b, c, temp1;
        double temp2;
        inputjenisprisma:
        system("cls");
        fflush(stdin);
        kelompok2();
        printf("|  JENIS-JENIS PRISMA SEGITIGA :                      |\n");
        printf("|     [1]. Prisma Segitiga Sembarang                  |\n");
        printf("|     [2]. Prisma Segitiga Siku-Siku                  |\n");
        printf("|     [3]. Prisma Segitiga Sama Kaki atau Sama Sisi   |\n");
        printf("+-----------------------------------------------------+\n");
        printf("\nPilih Jenis Prisma Segitiga : ");
        if (scanf("%i", &x)!=1)
            {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputjenisprisma;}
        printf("\n");
        switch(x)
        {
        case 1 :
            inputprismasembarang:
            system("cls");
            fflush(stdin);
            kelompok2();
            printf("========================================================\n");
            printf("\n        Volume dan Luas Prisma Segitiga Sembarang       \n");
            printf("\n========================================================\n\n");
            printf("Masukkan Sisi Alas 1 prisma        : ");
            if (scanf("%f", &a)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputprismasembarang;}
            printf("Masukkan Sisi Alas 2 prisma        : ");
            if (scanf("%f", &b)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputprismasembarang;}
            printf("Masukkan Sisi Alas 3 prisma        : ");
            if (scanf("%f", &c)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputprismasembarang;}
            printf("Masukkan Tinggi prisma             : ");
            if (scanf("%f", &t)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputprismasembarang;}
            printf("\n");

            kll=a+b+c;
            temp1=kll/2;
            temp2=temp1*(temp1-a)*(temp1-b)*(temp1-c);
            la=sqrt(temp2);

            v=la*t;
            lp=(2*la)+(kll*t);
            break;

        case 2 :
            inputprismasiku:
            system("cls");
            fflush(stdin);
            kelompok2();
            printf("========================================================\n");
            printf("\n        Volume dan Luas Prisma Segitiga Siku-Siku       \n");
            printf("\n========================================================\n\n");
            printf("Masukkan Alas segitiga             : ");
            if (scanf("%f", &a)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputprismasiku;}
            printf("Masukkan Sisi Miring Alas segitiga : ");
            if (scanf("%f", &b)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputprismasiku;}
            printf("Masukkan Tinggi Alas segitiga      : ");
            if (scanf("%f", &c)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputprismasiku;}
            printf("Masukkan Tinggi prisma             : ");
            if (scanf("%f", &t)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputprismasiku;}
            printf("\n");

            la=a*c/2;
            v=la*t;

            kll=a+b+c;
            lp=(2*la)+(kll*t);
            break;

        case 3 :
            inputprismasama:
            system("cls");
            fflush(stdin);
            kelompok2();
            printf("========================================================\n");
            printf("\nVolume dan Luas Prisma Segitiga Sama Kaki atau Sama Sisi\n");
            printf("\n========================================================\n\n");
            printf("Masukkan Alas segitiga             : ");
            if (scanf("%f", &a)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputprismasama;}
            printf("Masukkan Sisi Miring Alas segitiga : ");
            if (scanf("%f", &b)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputprismasama;}
            printf("Masukkan Tinggi Alas segitiga      : ");
            if (scanf("%f", &c)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputprismasama;}
            printf("Masukkan Tinggi prisma             : ");
            if (scanf("%f", &t)!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputprismasama;}
            printf("\n");

            la=a*c/2;
            v=la*t;
            kll=a+b*2;
            lp=(2*la)+(kll*t);
            break;

        default :
            printf("Kode Program Salah");
        }
            printf("\nVolume prisma segitiga             : %.2f cm^3\n",v);
            printf("Luas Permukaan prisma segitiga     : %.2f cm^2",lp);
        printf("\n========================================================\n");
        back();
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
    printf("\nTerimakasih telah menggunakan program ini \n");
    printf("\nTekan enter untuk keluar\n");
return 0;
}

void kelompok2()
{
    printf("+-----------------------------------------------------+\n");
    printf("|                     KELOMPOK 2                      |\n");
    printf("+-----------------------------------------------------+\n");
}
