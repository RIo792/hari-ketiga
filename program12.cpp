#include <stdio.h>
 
void gabungArray(int a[], int na, int b[], int nb, int hasil[]) {
    int i;
    for (i = 0; i < na; i++) hasil[i] = a[i];
    for (i = 0; i < nb; i++) hasil[na + i] = b[i];
}
 
void cetakArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}
 
int main() {
    int a[3] = {1, 2, 3};
    int b[3] = {4, 5, 6};
    int hasil[6];
    gabungArray(a, 3, b, 3, hasil);
    printf("Gabungan: "); cetakArray(hasil, 6);
    return 0;
}
