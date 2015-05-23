#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void pilihan();
void Input();
void show(char opr);
void penjumlahan();
void pengurangan();
void perkalian();
void tranpose();
int back();
int exitcreen(void);

//Ini adalah baris deklarasi array 2 dimensi
float entryA[2][2],entryB[2][2],varC[2][2];
int a,b,c;

int main(void){ //fungsi utama dari main
	int selesai=1,pilih;//program akan berlanjut jika variabel selesai bernilai 1
	pilih :
        fflush(stdin);
        system("cls");
        kelompok2();
    printf("|    PROGRAM PENGHITUNGAN MATRIKS 2 ORDO              |\n");
    printf("|    [1]. Penjumlahan                                 |\n");
    printf("|    [2]. Pengurangan                                 |\n");
    printf("|    [3]. Perkalian                                   |\n");
    printf("|    [4]. Tranpose                                    |\n");
    printf("+-----------------------------------------------------+\n");
		printf("\nMasukkan Pilihan : ");
		if (scanf("%d",&pilih)!=1)
            {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto pilih;}

		switch(pilih){
		case 1 :
		    penjumlahan();
            break;
		case 2 :
		    pengurangan();
            break;
		case 3 :
		    perkalian();
            break;
		case 4 :
		    tranpose();
            break;
		default :
            printf("Pilihan Salah\n");
            break;
		}
		back();
}

void Input(){ //fungsi input digunakan untuk menyimpan inputan dari user
	int i,j;
	inputmatrikA :
    system("cls");
    fflush(stdin);
    kelompok2();
	printf("\n----Matriks A----\n");
	for (i=0; i<2; i++){ //pengulangan untuk matrik A dengan jumlah perulangan < 2
		for (j=0; j<2; j++){
			printf("Input Matrix A[%d][%d] : ",i, j);
			if (scanf("%f",&entryA[i][j])!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputmatrikA;}
		}
}

	printf("\n----Matriks B----\n");
       //perulangan matriks B

	for (i=0; i<2; i++){
		for (j=0; j<2; j++){
			printf("Input Matrix B[%d][%d] : ",i, j);
			if (scanf("%f",&entryB[i][j])!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputmatrikA;} //menyimpan inputan dari user dari hasil pengulangan ke dalam variabel
		}
	}
}

//menunjukkan jenis operasi dalam matriks misal menunjukkan operasi penjumlahan
void show(char opr){
	for (a=0; a<2; a++){ //menampilkan nilai matrik A yang tadi diinputkan
		for (b=0; b<2; b++){
			printf("%2.0f ",entryA[a][b]);
		}

		if(a==0) printf("\t%c\t",opr);
		else printf("\t \t");
		for (b=0; b<2; b++){
			printf("%2.0f ",entryB[a][b]); //menampilkan nilai matriks B dari inputan user ke variabel
		}

		printf("\n");
	}
}

void penjumlahan(){ //memanggil fungsi penjumlahan
	Input();//memanggil fungsi input
	printf("\n");
	show('+');//memanggil fungsi show jenis operasi + /jumlah
	printf("\n");
	printf("Hasil Penjumlahan:\n");

	for (a=0; a<2; a++){
		for (b=0; b<2; b++){
			printf("%2.0f ",entryA[a][b]+entryB[a][b]);
		}
		printf("\n");
	}
}

void pengurangan(){//fungsi pengurangan
	Input(); //memanggil fungsi show jenis operasi (–) minus/kurang
	printf("\n");
	show('-');
	printf("\n");
	printf("Hasil Pengurangan:\n");

	for (a=0; a<2; a++){
		for (b=0; b<2; b++){
			printf("%2.0f ",entryA[a][b]-entryB[a][b]);
		}
		printf("\n");
	}
}

void perkalian(){ //fungsi perkalian
	Input();//memanggil fungsi input
//memanggil fungsi show jenis operasi perkalian dan mencetak karakter “x”
    printf("\n");
	show('x');
	printf("\n");
	printf("Hasil Perkalian:\n");

	for (a=0; a<2; a++){
		for (b=0; b<2; b++){
			varC[a][b]=0;
			for (c=0; c<2; c++){
				varC[a][b]+=entryA[a][c]*entryB[c][b]; /*artinya adalah
							varC[a][b]= varC[a][b]+(entryA[a][c]*entryB[c][b]) */
}
			printf("%2.0f ",varC[a][b]);
		}
		printf("\n");
	}
}

void tranpose()
{
    /*TRANPOSE*/
    int A[2][2], i, j;
    //Input Matriks A
    inputmatrik :
    system("cls");
    fflush(stdin);
    kelompok2();
    printf("\nMasukan Matriks A\n");
    printf("------------------\n");
    for(i=0;i<2;i++)
    {
       for(j=0;j<2;j++)
       {
          printf("[%i][%i]: ",i+1,j+1);
          if (scanf("%i",&A[i][j])!=1)
                {printf("\nKode yang Anda Inputkan Salah....!!\n\n"); system("pause");goto inputmatrik;}
       }
    }
    printf("\n\n");
    //Matriks A
    printf("Matriks\n");
    printf("------------------\n");
    for(i=0;i<2;i++)
    {
       for(j=0;j<2;j++)
       {
          printf("%3i",A[i][j]);
       }
       printf("\n");
    }
    printf("\n\n");
    //Transpose Matriks A
    printf("Transpose Matriks\n");
    printf("------------------\n");
    for(i=0;i<2;i++)
    {
       for(j=0;j<2;j++)
       {
          printf("%3i",A[j][i]);
       }
       printf("\n");
    }
    printf("\n");
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

