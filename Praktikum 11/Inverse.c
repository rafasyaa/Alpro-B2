/*Nama File 	: Inverse.c*/
/*Deskripsi 	: Menampilkan kalimat dalam sebuah pita dalam keadaan terbalik*/
/*Pembuat   	: Muhammad Rafasya Putra Ristianto - 24060121130074*/
/*Tgl Pembuatan	: Senin, 16 Mei 2022*/

#include <stdio.h>
#include <conio.h>
#include "mesinkar.c"

int main(){
    /*Kamus*/
    int CharLength;
    char Char[100];
    int i;

    /*Algoritma*/
    printf("==Inverse Pita==\n");
    CharLength = HitungChar();

    if(CharLength>=100)
    {
        printf("Karakter dalam pita maks 100 termasuk titik");
    }
    else
    {
        START();
        i = 0;
        while(!EOP()){
            Char[i] = CC;
            ADV();
            i++;
        }

        printf("Pita dibaca = ");
        for (i = 0; i < CharLength; i++){
            printf("%c", Char[i]);
        }

        printf("\nPita setelah diinverse = ");
        for (i = CharLength-1; i >= 0; i--) {
            printf("%c", Char[i]);
        }
    }
    getch();
    return 0;
}
