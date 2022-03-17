/*Nama File 	: FaktorBil.c*/
/*Deskripsi 	: Membuat algoritma menentukan faktor-faktor dari integer sembarang*/
/*Pembuat   	: [Muhammad Rafasya Putra Ristianto - 24060121130074]*/
/*Tgl Pembuatan	: [rabu, 16 Maret 2022]*/

#include<stdio.h> //Header File

//Program Utama
int main()
{
    //Kamus
    int N, i;

    //Algoritma
    printf("Masukkan integer sembarang = ");
    scanf("%d", &N);
    if(N <= 0){
        printf("N harus bilangan positif");
    }
    else{
        for(i = 1; i <= N; i++){
            if(N % i == 0){
                printf("%d|", i);
            }
        }
    }
    return 0;
}

