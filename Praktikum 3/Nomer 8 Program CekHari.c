/*Nama File 	: CekHari.c*/
/*Deskripsi 	: Membuat program yang mengecek hari menggunakan integer*/
/*Pembuat   	: [Muhammad Rafasya Putra Ristianto - 24060121130074]*/
/*Tgl Pembuatan	: [selasa, 8 Maret 2022]*/

#include <stdio.h> /*Header File*/

/*Program Utama*/
int main()
{
    /*Kamus*/
    int H;

    /*Algoritma*/
    printf("Cek Hari \n");
    printf("Masukkan nilai integer = ");
    scanf("%d", &H);
        switch(H){
    case 1 :
        printf("Senin");
        break;
    case 2 :
        printf("Selasa");
        break;
    case 3 :
        printf("Rabu");
        break;
    case 4 :
        printf("Kamis");
        break;
    case 5 :
        printf("Jumat");
        break;
    case 6 :
        printf("Sabtu");
        break;
    case 7 :
        printf("Minggu");
        break;
    default :
        printf("Masukan nomor hari tidak tepat");
    }
    return 0;
}
