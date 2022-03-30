/*Nama File 	: Tetris2.c*/
/*Deskripsi 	: Diberikan sebuah integer N > 0 yang dimasukan melalui keyboard, maka tampilkanlah dilayar susunan karakter ‘*’*/
/*Pembuat   	: Muhammad Rafasya Putra Ristianto - 24060121130074*/
/*Tgl Pembuatan	: senin, 28 Maret 2022*/

#include<stdio.h> //Header File

//Program Utama
int main()
{
    //Kamus
    int N, i, j;

    //Algoritma
    printf("Masukkan integer sembarang = ");
    scanf("%d", &N);
    if(N <= 0){
        printf("N harus bilangan positif");
    }
    else{
        for(i = 1; i <= N; i++){
            for(j = 1; j <= i; j++){
                printf("*");
            }
            printf("\n");
        }
        for(i = N-1; i >= 1; i--){
            for(j = 1; j <= i; j++){
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}


