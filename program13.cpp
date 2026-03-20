#include <stdio.h>
 
void konversiDetik(int totalDetik, int *jam, int *menit, int *detik) {
    *jam = totalDetik / 3600;
    *menit = (totalDetik % 3600) / 60;
    *detik = totalDetik % 60;
}
 
int main() {
    int jam, menit, detik;
    konversiDetik(3725, &jam, &menit, &detik);
    printf("3725 detik = %d jam %d menit %d detik\n", jam, menit, detik);
    return 0;
}
