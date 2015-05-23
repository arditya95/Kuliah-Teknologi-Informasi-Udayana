#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct mhs{
	char nama[256];
	int nilai;
}
v_mhs[100], tmp_mhs;

void get_file(char nama[]);
void set_file(char nama[]);
void show_struct();
void bubbleSort();

int jml  = 0;
int main(){

	char fileinput[250];
	char fileoutput[250];
    kelompok2();
    printf("|        PROGRAM ASISTENSI MAHASISWA (.txt)           |\n");
    printf("+-----------------------------------------------------+\n");
	printf("\nMasukkan lokasi file mentah : ");
	gets(fileinput);
	fflush(stdin);
	get_file(fileinput);

	printf("\n\nData Terbaca\n");
     printf("--------------------------------\n");

	show_struct();
	bubbleSort();


	printf("\n\nData Terurut\n");
	printf("--------------------------------\n");

	show_struct();

	printf("\nMasukkan Lokasi Penyimpanan File Hasil Sorting : ");
	gets(fileoutput);
	fflush(stdin);

	set_file(fileoutput);
	getch();
}

void bubbleSort(){
	int j, k;

	for(j = 0; j < jml-1; j++){
		for(k = jml-1; k >=(j+1); k--){
			if(v_mhs[k].nilai > v_mhs[k-1].nilai){

				tmp_mhs.nilai    = v_mhs[k].nilai;
				v_mhs[k].nilai   = v_mhs[k-1].nilai;
				v_mhs[k-1].nilai = tmp_mhs.nilai;

				strcpy(tmp_mhs.nama, v_mhs[k].nama);
				strcpy(v_mhs[k].nama, v_mhs[k-1].nama);
				strcpy(v_mhs[k-1].nama, tmp_mhs.nama);
			}
		}
	}
}

void show_struct(){

	int i;

	for(i = 0; i < jml; i++){
		printf("%s \t: %d \n",v_mhs[i].nama,v_mhs[i].nilai);
	}
}

void set_file(char fileloc[]){

	FILE *fp;
	int i;
	fp = fopen(fileloc,"w");
	for(i = 0; i < jml; i++){
		fprintf(fp,"%d. %s %d \n",(i+1), v_mhs[i].nama, v_mhs[i].nilai);
	}
	fclose(fp);
	printf("\nData Berhasil Disimpan");
}

void get_file(char fileloc[]){

	FILE *pf;
	char karakter;
	int pair = 1;
	char string[256];
	pf = fopen(fileloc,"r");
	if(pf != NULL)
	{
		while((fgets(string,256,pf)) != NULL){
			if(pair == 1){
				char *pos;
				if ((pos=strchr(string, '\n')) != NULL)
				{
    				*pos = '\0';
				}
				strcpy(v_mhs[jml].nama,string);
			}else if(pair == 2){

				v_mhs[jml].nilai = atoi(string);
			}
			if(pair % 2 == 0){
				pair = 0;
				jml++;
			}
			pair++;
		}
	}else{
		printf("Gagal membuka file, pastikan lokasi file benar");
		exit(EXIT_FAILURE);

	}
	fclose(pf);
}

void kelompok2()
{
    printf("+-----------------------------------------------------+\n");
    printf("|                     KELOMPOK 2                      |\n");
    printf("+-----------------------------------------------------+\n");
}
