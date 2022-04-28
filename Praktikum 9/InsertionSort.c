/*Nama File 	: InsertionSort.c*/
/*Deskripsi 	: Membuat program mengurutkan integer dengan insertion sort*/
/*Pembuat   	: Muhammad Rafasya Putra Ristianto - 24060121130074*/
/*Tgl Pembuatan	: Selasa, 26 April 2022*/

#include<stdio.h>//Header File

//Sub Program
void InsertionSort(int T[], int N)
{
    //Kamus Lokal
    int i, temp, j;
    //Algoritma
    for (i = 1; i < N; i++) {
        temp = T[i];
        j = i - 1;
        while (j >= 0 && T[j] > temp) {
            T[j + 1] = T[j];
            j-- ;
        }
        T[j + 1] = temp;
    }
}

//Program Utama
int main()
{
    //Kamus
    int T[100], N, i;
    //Algoritma
    printf("Insertion Sort \n");
    printf("Masukkan banyak elemen : ");
    scanf("%d", &N);
    printf("Masukkan nilai : \n");
    for(i = 0; i < N; i++){
        scanf("%d", &T[i]);
    }
    //Memanggil Sub Program
    InsertionSort(T, N);
    printf("Hasil pengurutan sebagai berikut : \n");
    for(i = 0; i < N; i++){
        printf("%d ", T[i]);
    }
}
