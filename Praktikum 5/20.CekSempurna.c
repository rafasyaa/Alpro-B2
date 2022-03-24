/*Nama File 	: CekSempurna.c*/
/*Deskripsi 	: Membuat algoritma menentukan bilangan sempurna atau bukan*/
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
        for(i = 1; i < N; i++){
            if(N % i == 0){
                F = F + i;
            }
        }
    }
    if (F == N) {
        printf("Bilangan %d merupakan bilangan sempurna", N);
    }
    else {
        printf("Bilangan %d bukan merupakan bilangan sempurna", N);
    }
    return 0;
}

