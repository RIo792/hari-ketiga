#include <stdio.h>
 
float bungaTabungan(float pokok, float persen, int tahun) {
    return pokok * (persen / 100) * tahun;
}
 
int main() {
    float pokok = 1000000;
    float bunga = bungaTabungan(pokok, 5, 3);
    printf("Pokok      = Rp %.0f\n", pokok);
    printf("Bunga 3 th = Rp %.0f\n", bunga);
    printf("Total      = Rp %.0f\n", pokok + bunga);
    return 0;
}
