#include <stdio.h>
 
float nilaiAkhir(float uts, float uas, float tugas) {
    return (uts * 0.3) + (uas * 0.4) + (tugas * 0.3);
}
 
void cetakGrade(float nilai) {
    if (nilai >= 85) printf("Grade: A\n");
    else if (nilai >= 70) printf("Grade: B\n");
    else if (nilai >= 55) printf("Grade: C\n");
    else printf("Grade: D\n");
}
 
int main() {
    float na = nilaiAkhir(80, 90, 75);
    printf("Nilai Akhir = %.2f\n", na);
    cetakGrade(na);
    return 0;
}
