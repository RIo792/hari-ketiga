#include <stdio.h>
 
int linearSearch(int arr[], int n, int target) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == target) return i;
    }
    return -1;
}
 
int main() {
    int n, i, target;
    printf("Masukkan jumlah data: ");
    scanf("%d", &n);
    int data[n];
    printf("Masukkan %d angka: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &data[i]);
    }
    printf("Masukkan angka yang dicari: ");
    scanf("%d", &target);
    int idx = linearSearch(data, n, target);
    if (idx != -1)
        printf("Ditemukan di indeks %d\n", idx);
    else
        printf("Tidak ditemukan\n");
    return 0;
}
