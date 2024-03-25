// 234_UCP1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//1.	Jelaskan bagaimana algoritma Insertion Sort membandingkan serta menukar elemen-elemen?
//2.	Jelaskan bagaimana algoritma Selection Sort membandingkan serta menukar elemen - elemen?
//3.	Dalam algorithma sortir, bagaimana cara untuk mengetahui jumlah langkah yang dilakukan? Jelaskan.

//Jawab:
//1. Algoritma Insertion Sort membandingkan serta menukar elemen-elemen dengan cara sebagai berikut:
//      a. Pertama, algoritma insertion sort akan membagi list data menjadi sorted dan unsorted list. Sorted list berisi elemen pertama dari elemen-elemen yang ada dan unsorted list berisi elemen-elemen sisanya.
//      b. Setelah itu, algoritma akan membandingkan elemen pertama dari unsorted list dan dibandingkan dengan elemen yang berada di sorted list.
//      c. Setelah membandingkan kedua elemen, algoritma insertion sort akan menempatkan elemen dari unsorted list tadi ke tempat yang benar pada sorted list. Karena insertion sort mengurutkan dari yang kecil ke yang besar, maka jika elemen dari unsorted list lebih kecil dari elemen di sorted list, maka ia akan ditaruh di sebelah kiri elemen yang ada di sorted list, dan jika ia lebih besar maka ia akan ditaruh di sebelah kanan elemen yang ada di sorted list.
//      d. Kemudian, algoritma akan melakukan hal yang sama pada elemen-elemen berikutnya dari unsorted list hingga semua elemen pada unsorted list tersortir rapi pada sorted list. Ia akan membandingkan elemen pertama dari unsorted list dan membandingkannya dengan elemen-elemen yang ada pada sorted list, setelah itu ia akan ditempatkan pada posisi yang benar.
//2. Dalam menjawab soal ini, saya akan menggunakan permisalan n = 5, dengan begitu maka Algoritma Selection Sort membandingkan serta menukar elemen-elemen dengan cara sebagai berikut:
//      a. Pertama, algoritma akan mencari elemen yang memiliki nilai terkecil pada arr[0] hingga arr[n-1], kemudian ia akan menempatkannya pada index 0 dan menaruh elemen yang berada di index 0 ke tempat yang tadi ditempati oleh elemen dengan nilai terkecil tersebut.
//      b. Setelah ditemukan elemen dengan nilai terkecil dan menempatkannya di index 0, algoritma akan kembali mencari elemen yang memiliki nilai terkecil, dimulai dari arr[1] hingga arr[n-1]. Setelah itu ia akan menempatkan elemen terkecil di antara arr[1] - arr[n-1] pada index 1.
//      c. Kemudian, algoritma akan mencari elemen dengan nilai terkecil pada arr[2] hingga arr[n-1] dan menempatkannya pada index 2.
//      d. Setelah itu, algoritma akan kembali mencari elemen dengan nilai terkecil, namun pada arr[3] hingga arr[n-1] dan menempatkannya pada index 3. Dengan begitu, semua elemen kini tersortir dari yang memiliki nilai terkecil ke yang memiliki nilai terbesar.
//3. Dalam algoritma sortir, cara untuk mengetahui berapa jumlah langkah yang dilakukan adalah dengan mengurangi n dengan 1 (n-1). Pass/langkah yang dapat diketahui telah dilakukan ketika satu elemen telah berada di tempat di mana ia semestinya berada berdasarkan bagaimana algoritma tersebut mensortir elemen, entah dari yang terkecil atau yang terbesar.


#include <iostream>
using namespace std;

int azizah[34];
int n;

void input() {
    while (true) {
        cout << "Masukkan banyaknya elemen pada array: ";
        cin >> n;
        if (n <= 34)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 34 elemen.\n";
        }
    }
    cout << endl;
    cout << "=======================" << endl;
    cout << "Masukkan elemen array: " << endl;
    cout << "=======================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << (i + 1) << ":";
        cin >> azizah[i];
    }
}


void UCP1() {
    int i, j, min_index;

    for (j = 0; j <= n - 2; j++) {  //step 1
        min_index = j; //step 2a
        for (i = j + 1; i <= n - 1; i++) {  //step 2b
            if (azizah[i] < azizah[min_index]) {  //step 2c
                min_index = i;
            }
        }
        int temp = azizah[j];
        azizah[j] = azizah[min_index];
        azizah[min_index] = temp;
    }
}

void display() {
    cout << endl;
    cout << "=================================" << endl;
    cout << "Elemen array yang telah tersusun" << endl;
    cout << "=================================" << endl;
    for (int j = 0; j < n; j++) {
        cout << azizah[j] << endl;
    }
}

int main()
{
    input();
    UCP1();
    display();

    system("pause");

    return 0;
}