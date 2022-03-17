/*Nama File 	: TunjAnak.c*/
/*Deskripsi 	: Menghitung besarnya tunjangan anak yang diberikan, dan kemudian menampilkan besarnya tunjangan anak tersebut*/
/*Pembuat   	: [Muhammad Rafasya Putra Ristianto - 24060121130074]*/
/*Tgl Pembuatan	: [rabu, 16 Maret 2022]*/

#include<stdio.h> //Header File

//Program Utama
int main()
{
    //Kamus
    int A, G, X;

    //Algoritma
    printf("Masukkan jumlah anak = ");
    scanf("%d", &A);
    printf("Masukkan gaji pokok = ");
    scanf("%d", &G);
    if(A >= 0 && G > 0){
        if(A <= 3){
            X = A * (0.1 * G);
            printf("%d", X);
        }
        else{
            X = 3 * (0.1 * G);
            printf("%d", X);
        }
    }
    else{
        printf("Masukan tidak boleh negatif");
    }
    return 0;
}
