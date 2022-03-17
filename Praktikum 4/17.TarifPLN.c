/*Nama File 	: TarifPLN.c*/
/*Deskripsi 	: Menghitung besarnya tarif listrik yang dikenakan, kemudian menampilkan besarnya tarif tersebut*/
/*Pembuat   	: [Muhammad Rafasya Putra Ristianto - 24060121130074]*/
/*Tgl Pembuatan	: [rabu, 16 Maret 2022]*/

#include<stdio.h> //Header File

//Program Utama
int main()
{
    //Kamus
    int G, P, X;

    //Algoritma
    printf("Masukkan golongan tarif 1-2 = ");
    scanf("%d", &G);
    printf("Masukkan pemakaian daya listrik = ");
    scanf("%d", &P);
    if(G >= 1 && G <=2 && P > 0){
        if(G == 1){
            if(P < 100){
                X = 100 * 1000;
                printf("%d", X);
            }
            else if(P >= 100 && P < 1000){
                X = P * 1000;
                printf("%d", X);
            }
            else if(P >= 1000){
                X = P * 1000 + (0.1 * P * 1000);
                printf("%d", X);
            }
        }
        else if (G == 2){
            if(P < 100){
                X = 100 * 2000;
                printf("%d", X);
            }
            else if(P >= 100 && P < 1000){
            X = P * 2000;
            printf("%d", X);
            }
            else if(P >= 1000){
            X = P * 2000 + (0.1 * P * 2000);
            printf("%d", X);
            }
        }
    }
    else {
        printf("Masukan salah");
    }
    return 0;
}
