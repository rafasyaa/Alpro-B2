/*Nama File 	: Palindrom.c*/
/*Deskripsi 	: Mengecek apakah susunan karakter pada pita karakter palindrom atau tidak*/
/*Pembuat   	: Muhammad Rafasya Putra Ristianto - 24060121130074*/
/*Tgl Pembuatan	: Selasa, 17 Mei 2022*/

#include <stdio.h>
#include <conio.h>
#include "mesinkar.c"

int Palindrom(char Char[]){
    // Kamus Lokal
    int CharLength;
    int i, j, cek;

    // Algoritma
    CharLength = HitungChar();
    cek = 0;
    for (i = 0; i < CharLength; i++) {
        if (Char[i] != Char[CharLength- i - 1]) {
            cek = 1;
            break;
        }
    }
    return cek;
}

int main(){
    /*Kamus*/
    int CharLength;
    char Char[100];
    int i, j, cek;

    /*Algoritma*/
    printf("==Cek Palindrom==\n");
    CharLength = HitungChar();
    if(CharLength>=100)
    {
        printf("Karakter dalam pita maks 100 termasuk titik");
    }
    else{
        START();
        i = 0;
        while(!EOP()){
            Char[i] = CC;
            ADV();
            i++;
        }
        cek = Palindrom(Char);
        if (cek){
            printf("Bukan palindrom");}
        else{
            printf("Palindrom");}

        getch();
        return 0;
    }
}
