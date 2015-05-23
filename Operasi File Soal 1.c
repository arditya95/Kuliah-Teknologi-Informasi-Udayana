#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LINESIZE 255
FILE *fp;
int state=1,n,i,c=1;
long id;
char nim[LINESIZE],file[LINESIZE],src[LINESIZE],check;
const char *invalid_characters = "1234567890!@#$%^&*()_-=+{}[]\|:;?/>'<~`";
void cari(FILE*,char [],char []);
void print_data();
void insert_data();

int main()
{
    int pil;
    input:
    fflush(stdin);
    system("cls");
    printf("+------------------------------------------+\n");
    printf("|  Program Sistem Informasi Data Mahasiswa |\n");
    printf("|                KELOMPOK 2                |\n");
    printf("+------------------------------------------+\n");
    printf("|   Pilih Program                          |\n");
    printf("|   [1] File Baru (File lama akan terhapus)|\n");
    printf("|   [2] Insert Data                        |\n");
    printf("|   [3] Print Data                         |\n");
    printf("+------------------------------------------+\n\n");
    printf("============================================\n");
    printf(" Inputkan Pilihan: ");
    if(scanf("%d%c",&pil,&check)!=2 || pil<1 || pil>3 || check!='\n'){
        printf(" Pilihan harus angka 1-3.\n\n");
        system("pause");
        goto input;
    }
    else{
    printf("============================================\n");
        switch(pil){
        case 1:{create_new();break;}
        case 2:{insert_data();break;}
        case 3:{print_data();break;}
        }
    }
    back();
}

void create_new () {
    char *nama = malloc(LINESIZE),*c;
    input2 :
    fflush(stdin);
    system("cls");
    fp=fopen("data_mahasiswa.txt", "w+");
    printf("+------------------------------------------+\n");
    printf("|   Program Sistem Informasi Mahasasiswa   |\n");
    printf("|                KELOMPOK 2                |\n");
    printf("+------------------------------------------+\n");
    printf(" Inputkan Jumlah Data: ");
    if (scanf("%d%c",&n,&check)!=2 || check!='\n') {state=0;goto msg;}
    printf("============================================\n");

    for (i=0;i<n;i++){
        printf(" NIM : ");
        if (scanf("%ld%c",&id,&check)!=2 || check!='\n'){state=0;goto msg;}

        snprintf(nim, sizeof(nim), "%ld", id);
        printf(" NAMA: ");
        fflush(stdin);
        fgets (nama,LINESIZE,stdin);
        c=nama;
        while(*c){
            if (strchr(invalid_characters, *c)){state=0;goto msg;}
            c++;
        }
        if ((strlen(nama)>0) && (nama[strlen (nama) - 1] == '\n'))
            nama[strlen(nama)-1] = '\0';
        fclose(fp);
        fp=fopen("data_mahasiswa.txt", "a+");
        cari(fp,nim,nama);
        fprintf(fp,"%s;%s\n",nim,nama);
        fclose(fp);
    }
    printf("\n+------------------------------------------+\n");
    printf("|      Pembaharuan file telah disimpan.    |\n");
    printf("+------------------------------------------+\n");

    msg:
    if (state!=1){
        printf("\n+------------------------------------------+\n");
        printf("|      Data yang dimasukkan salah.         |\n");
        printf("+------------------------------------------+\n");
        system("pause");
        goto input2;
    }
}

void insert_data () {
    char *nama = malloc(LINESIZE),*c;
    input3 :
    fflush(stdin);
    system("cls");
    fp=fopen("data_mahasiswa.txt", "a+");
    printf("+------------------------------------------+\n");
    printf("|   Program Sistem Informasi Mahasasiswa   |\n");
    printf("|                KELOMPOK 2                |\n");
    printf("+------------------------------------------+\n");
    printf(" Inputkan Jumlah Data: ");
    if (scanf("%d%c",&n,&check)!=2 || check!='\n') {state=0;goto msg;}
    printf("============================================\n");

    for (i=0;i<n;i++){
        printf(" NIM : ");
        if (scanf("%ld%c",&id,&check)!=2 || check!='\n'){state=0;goto msg;}

        snprintf(nim, sizeof(nim), "%ld", id);
        printf(" NAMA: ");
        fflush(stdin);
        fgets (nama,LINESIZE,stdin);
        c=nama;
        while(*c){
            if (strchr(invalid_characters, *c)){state=0;goto msg;}
            c++;
        }
        if ((strlen(nama)>0) && (nama[strlen (nama) - 1] == '\n'))
            nama[strlen(nama)-1] = '\0';
        fclose(fp);
        fp=fopen("data_mahasiswa.txt", "a+");
        cari(fp,nim,nama);
        fprintf(fp,"%s;%s\n",nim,nama);
        fclose(fp);
    }
    printf("\n+------------------------------------------+\n");
    printf("|      Pembaharuan file telah disimpan.    |\n");
    printf("+------------------------------------------+\n");

    msg:
    if (state!=1){
        printf("\n+------------------------------------------+\n");
        printf("|        Data yang dimasukkan salah.       |\n");
        printf("+------------------------------------------+\n");
        system("pause");
        goto input3;
    }
}

void print_data(FILE* fp){
    fp=fopen("data_mahasiswa.txt", "r");
    char line[LINESIZE],* nim,* nama;
    system("cls");
    printf("+------------------------------------------+\n");
    printf("|    Hasil Cetak Seluruh Data Mahasiswa    |\n");
    printf("|               KELOMPOK 2                 |\n");
    printf("+------------------------------------------+\n");
    while(fgets(line, sizeof(line), fp)){

        nim = strtok(line, ";");
        nama = strtok(NULL, ";");
        printf(" NIM : %s\n", nim);
        printf(" NAMA: %s\n", nama);
    }
}

void cari(FILE* fp,char a[],char b[]){
    char line[LINESIZE],* nim,* nama;
    while(fgets(line, sizeof(line), fp)){
        nim = strtok(line, ";");
        nama = strtok(NULL, ";");
        if (strcmp(a,nim)==0) {
            c=0;
            printf(" \n Error: NIM telah digunakan dalam file.\n");
            printf(" NIM : %s\n", nim);
            printf(" NAMA: %s\n", nama);
            printf(" Data telah ada dalam file. Baris ke-%d\n",i+1);
            goto duplicate;
        }
    }
    duplicate:
    printf("");
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
