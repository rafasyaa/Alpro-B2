/*Nama File 	: CekBulan.c*/
/*Deskripsi 	: Membuat program yang mengecek bulan menggunakan integer*/
/*Pembuat   	: [Muhammad Rafasya Putra Ristianto - 24060121130074]*/
/*Tgl Pembuatan	: [kamis, 10 Maret 2022]*/

#include <stdio.h> /*Header File*/

/*Program Utama*/
int main()
{
    /*Kamus*/
    int B;

    /*Algoritma*/
    printf("Cek Bulan \n");
    printf("Masukkan nilai integer = ");
    scanf("%d", &B);
        switch(B){
    case 1 :
        printf("Januari");
        break;
    case 2 :
        printf("Februari");
        break;
    case 3 :
        printf("Maret");
        break;
    case 4 :
        printf("April");
        break;
    case 5 :
        printf("Mei");
        break;
    case 6 :
        printf("Juni");
        break;
    case 7 :
        printf("Juli");
        break;
    case 8 :
        printf("Agustus");
        break;
    case 9 :
        printf("September");
        break;
    case 10 :
        printf("Oktober");
        break;
    case 11 :
        printf("November");
        break;
    case 12 :
        printf("Desember");
        break;
    default :
        printf("Masukan nomor bulan tidak tepat");
    }
    return 0;
}

