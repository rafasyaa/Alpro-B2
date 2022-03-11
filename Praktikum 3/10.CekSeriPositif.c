/*Nama File 	: CekSeriPositif.c*/
/*Deskripsi 	: Membuat algoritma yang menerima 3 buah tahanan dan menghasilkan total tahanan jika dirangkai seri*/
/*Pembuat   	: [Muhammad Rafasya Putra Ristianto - 24060121130074]*/
/*Tgl Pembuatan	: [kamis, 10 Maret 2022]*/

#include <stdio.h> /*Header File*/

/*Program Utama*/
int main()
{
    /*Kamus*/
    int r1, r2, r3;
    int X;

    /*Algoritma*/
    printf("Cek Seri Positif \n");
    printf("Masukkan nilai r1 = ");
    scanf("%d", &r1);
    printf("Masukkan nilai r2 = ");
    scanf("%d", &r2);
    printf("Masukkan nilai r3 = ");
    scanf("%d", &r3);
    if (r1 >= 0 && r2 >= 0 && r3 >= 0){
        X = r1+r2+r3;
        printf("Total tahanan adalah = %d", X);
    }
    else {
        printf("Masukan tahanan tidak boleh negatif");
    }
    return 0;
}
