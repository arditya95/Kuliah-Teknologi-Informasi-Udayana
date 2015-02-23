#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void searching();
void sorting();
void insertionSort(int number[], int x);
void bubbleSort(int deret[], int panjangbaris);
void quickSort(int L, int R);
void sequenSearch(int deret[], int nilai, int cari);
void binnarySearch(int deret[], int nilai, int cari);
void pilihinput();
int manual();
int random();
void show();
int search();
int back();
int exitcreen(void);

int nilai;
int cari;
int deret[100000];

int main()
{
    char ulang;
    int pilihan, i, kode;
    clock_t tStart = clock();
    input0:
        system("cls");
        fflush(stdin);
        kelompok2();
        printf("|  PILIH PROGRAM                                      |\n");
        printf("|    [1]. Searching                                   |\n");
        printf("|    [2]. Sorting                                     |\n");
        printf("|    [3]. Keluar                                      |\n");
        printf("+-----------------------------------------------------+\n");
        printf("\nPilihan Kode Program : ");
        if (scanf("%d",&pilihan)!=1){printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause"); goto input0;}
        {
            switch(pilihan){
        case 1:
                input01:
                fflush(stdin);
                system("cls");
                searching();
                break;
        case 2:
                input02:
                fflush(stdin);
                system("cls");
                sorting();
                break;
        case 3:
                printf("\n");
                exit(0);
                break;
        default:
            printf("\nKode Pilihan anda tidak tersedia\n");
            }
        }
        printf("\n\nTime taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
        back();
}

void searching()
{
    char ulang;
    int pilihan,i,code;
    input:
    system("cls");
    fflush(stdin);
    kelompok2();
    printf("|  PROGRAM SEARCHING                                  |\n");
    printf("|    [1]. Sequential Search                           |\n");
    printf("|    [2]. Binary Search                               |\n");
    printf("|    [3]. Kembali                                     |\n");
    printf("|    [4]. Keluar                                      |\n");
    printf("+-----------------------------------------------------+\n");
    printf("\nPilihan Kode Program : ");
    if (scanf("%d",&pilihan)!=1)
        {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto input;}
    {
        switch(pilihan){
        case 1 :
             input4 :
                fflush(stdin);
                system("cls");
                pilihinput();
                printf("Pilih Kode Program : ");
                if (scanf("%d", &code)!=1)
                    {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto input4;}
                switch(code){
                    case 1:
                        manual();
                        show();
                        search();
                        sequenSearch(deret,nilai,cari);
                        break;
                    case 2 :
                        random();
                        show();
                        search();
                        sequenSearch (deret,nilai,cari);
                        break;
                    default :
                        printf("\nKode Program yang Anda Masukkan Salah..!");
                    }
            break;

        case 2 :
            input5 :
                fflush(stdin);
                system("cls");
                pilihinput();
                printf("Pilih Kode Program : ");
                if (scanf("%d", &code)!=1)
                    {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto input5;}
                switch(code){
                    case 1:
                        manual();
                        show();
                        insertionSort(deret,nilai);
                        show();
                        search();
                        binnarySearch(deret,nilai,cari);

                        break;
                    case 2 :
                        random();
                        show();
                        insertionSort(deret,nilai);
                        show();
                        search();
                        binnarySearch(deret,nilai,cari);
                        break;
                    default :
                        printf("\nKode Program yang Anda Masukkan Salah..!");
                            }
            break;

        case 3:
            main();
            break;
        case 4:
            printf("\n");
            exit(0);
            break;
        default :
            printf("\nKode Program yang Anda Masukkan Tidak Ada...!\n");
    }
    }
}

void sorting()
{
    char ulang;
    int pilihan,i,code;
    input:
    system("cls");
    fflush(stdin);
    kelompok2();
    printf("|  PROGRAM SORTING                                    |\n");
    printf("|    [1]. Insertion Sort                              |\n");
    printf("|    [2]. Bubble Sort                                 |\n");
    printf("|    [3]. Quick Sort                                  |\n");
    printf("|    [4]. Kembali                                     |\n");
    printf("|    [5]. Keluar                                      |\n");
    printf("+-----------------------------------------------------+\n");
    printf("\nPilihan Kode Program : ");
    if (scanf("%d",&pilihan)!=1)
        {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto input;}
    {
        switch(pilihan){
        case 1 :
            input1 :
                fflush(stdin);
                system("cls");
                pilihinput();
                printf("Pilih Kode Program : ");
                if (scanf("%d", &code)!=1)
                    {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto input1;}
                switch(code){
                    case 1:
                        manual();
                        show();
                        insertionSort(deret,nilai);
                        show();
                        break;
                    case 2 :
                        random();
                        show();
                        insertionSort(deret,nilai);
                        show();
                        break;
                    default :
                        printf("\nKode Program yang Anda Masukkan Salah..!");
                            }
        break;

        case 2 :
            input2 :
                fflush(stdin);
                system("cls");
                pilihinput();
                printf("Pilih Kode Program : ");
                if (scanf("%d", &code)!=1)
                    {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto input1;}
                switch(code){
                    case 1:
                        manual();
                        show();
                        bubbleSort(deret,nilai);
                        show();
                        break;
                    case 2 :
                        random();
                        show();
                        bubbleSort(deret,nilai);
                        show();
                        break;
                    default :
                        printf("\nKode Program yang Anda Masukkan Salah..!");
                            }
            break;

        case 3:
            input3 :
                fflush(stdin);
                system("cls");
                pilihinput();
                printf("Pilih Kode Program : ");
                if (scanf("%d", &code)!=1)
                    {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto input1;}
                switch(code){
                    case 1:
                        manual();
                        show();
                        quickSort(0,nilai-1);
                        show();
                        break;
                    case 2 :
                        random();
                        show();
                        quickSort(0,nilai-1);
                        show();
                        break;
                    default :
                    printf("\nKode Program yang Anda Masukkan Salah..!");
                    }
            break;
        case 4 :
            main();
            break;
        case 5 :
            printf("\n");
            exit(0);
            break;

        default :
            printf("\nKode Program yang Anda Masukkan Tidak Ada...!");
    }
    }
}

void pilihinput()
    {
        system("cls");
        kelompok2();
        printf("|  Pilihan Dalam Menginput Data                       |\n");
        printf("|    [1]. Input Data Manual                           |\n");
        printf("|    [2]. Input Data Acak                             |\n");
        printf("+-----------------------------------------------------+\n");
    }

int manual()
{
    int i;
    inputx :
    fflush(stdin);
    system("cls");
    kelompok2();
    printf("Input nilai panjang deret : ");
    if (scanf("%d", &nilai)!=1)
        {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputx;}
    for(i=0; i<nilai; i++)
        {
            printf("Masukkan bilangan ke- %d : ", i+1);
            if (scanf("%d",&deret[i])!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputx;}
        }
        return nilai;
}

int random()
{
    int i;
    srand((unsigned)time(NULL));
    inputy :
    fflush(stdin);
    system("cls");
    kelompok2();
    printf("Input nilai panjang deret : ");
    if (scanf("%d", &nilai)!=1)
        {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputy;}
    for (i = 0; i<nilai; i++)
        {
            deret[i] = rand()%100;
        }
    printf("Bilangan random telah diinputkan dengan batas bilangan terbesar adalah 100\n");
    return nilai;
}

void show()
{
    int i;
    printf("\nDeret angka sebelum mengalami proses pengurutan : \n");
         for (i = 0; i<nilai; i++)
         {
             printf("%d ", deret[i]);
         }
}
void insertionSort(int number[], int x)
{
    int n;
    int a,i,t;
    for(i=1; i<x; i++){
        n = number[i];
        a = i;
        while ((a > 0) && (number[a-1] > n))
        {
            number[a] = number[a-1];
            a--;
        }
        number[a] = n;
    }
}

void bubbleSort (int deret[], int panjangbaris)
{
    int nilai,a,i;
    for (i=1; i<panjangbaris; i++)
    {
        for(a = 0; a < panjangbaris-i; a++)
        {
            if(deret[a] > deret[a+1])
            {
                nilai = deret[a];
                deret[a] = deret[a+1];
                deret[a+1] = nilai;
            }
        }
    }
}

void quickSort(int L, int R)
{
    int i, a, t;
    int mid;
    i = L;
    a = R;
    mid = deret[(L+R) / 2 ];

    do{
        while (deret[i] < mid) i++;
        while (deret[a] > mid) a--;

        if (i <= a){
            t = deret[a];
            deret[a] = deret[i];
            deret[i] = t;
            i++;
            a--;
        }
    } while (i < a);

    if (L < a) quickSort (L,a);
    if (i < R) quickSort (i,R);
}

int search()
{
    inputcari :
    fflush(stdin);
    printf("\n\nMasukan bilangan yang akan Anda cari: ");
    if (scanf("%d", &cari)!=1)
        {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputcari;}
    return cari;
}

void sequenSearch (int deret[], int nilai, int cari)
{
    int dapat = 0;
    int lokasi[nilai],i;
    for(i=0; i<nilai; i++){
        if (deret[i] == cari){
            dapat++;
            lokasi[i] = i+1;
        }
        else {
            lokasi[i] = 0;
        }
    }
    if(dapat > 0){
        printf("Data telah ditemukan. \nData terletak pada deret ke :");
        for (i = 0; i<nilai; i++){
            if (lokasi[i] > 0){
                printf(" %d", lokasi[i]);
            }
        }
    }
    else {
        printf("Data yang Anda cari tidak ditemukan");
    }
}

void binnarySearch (int deret[], int nilai, int cari)
{
    int kiri, kanan, tengah;
    kiri = 0;
    kanan = nilai-1;
    tengah = (kanan-kiri/2);

    while ((deret[tengah] != cari) && (kiri>=0) && (kanan<nilai) && (kanan>=kiri))
    {
        if (cari>deret[tengah])
        {
            kiri = tengah+1;
        }
        else if (cari<deret[tengah])
        {
            kanan = tengah-1;
        }
        tengah = kiri + (kanan-kiri)/2;
    }
    if (deret[tengah]==cari)
    {
        printf("Data telah ditemukan pada deret ke: %d", tengah+1);
    }
    else
    {
        printf("Data yang Anda cari tidak ditemukan");
    }
}

int back()
    {
    char h;
    printf("\nTekan [Y/y] untuk mengulang atau Tekan Karakter Lain Untuk Keluar : ");
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
