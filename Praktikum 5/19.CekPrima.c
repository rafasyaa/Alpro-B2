/*Nama File 	: CekPrima.c*/
/*Deskripsi 	: Membuat algoritma menentukan bilangan prima atau bukan*/
/*Pembuat   	: [Muhammad Rafasya Putra Ristianto - 24060121130074]*/
/*Tgl Pembuatan	: [senin, 21 Maret 2022]*/

#include<stdio.h> //Header File

//Program Utama
int main()
{
    //Kamus
    int N, i, F;
    F = 0;

    //Algoritma
    printf("Masukkan integer sembarang = ");
    scanf("%d", &N);
    if(N <= 0){
        printf("N harus bilangan positif");
    }
    else{
        for(i = 1; i <= N; i++){
            if(N % i == 0){
                F = F + 1;
            }
        }
        if (F == 2) {
        printf("Bilangan %d merupakan bilangan prima", N);
        }
        else {
        printf("Bilangan %d bukan merupakan bilangan prima", N);
        }
    }

    return 0;
}
