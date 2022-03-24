/*Nama File 	: SiputNaik.c*/
/*Deskripsi 	: Membuat algoritma untuk mengetahui berapa hari waktu yang dibutuhkan oleh
                  siput tersebut untuk mencapai ketinggian N meter*/
/*Pembuat   	: [Muhammad Rafasya Putra Ristianto - 24060121130074]*/
/*Tgl Pembuatan	: [selasa, 22 Maret 2022]*/

#include<stdio.h> //Header File

//Program Utama
int main()
{
    //Kamus
    float N, tinggi;
    tinggi = 0;
    int hari;
    hari = 0;

    //Algoritma
    printf("Masukkan kedalaman lubang (N) = ");
    scanf("%f", &N);

    if(N <= 0){
        printf("N harus bilangan positif");
    }
    else {
        while(tinggi >= 0 && tinggi < N){
            tinggi = tinggi + 0.3;
            if(tinggi < N){
                tinggi = tinggi - 0.1;
            }
            hari = hari + 1;
        }
        printf("Waktu yang dibutuhkan siput untuk mencapai ketinggian %.1f meter adalah %d hari", N, hari);
    }
    return 0;
}
