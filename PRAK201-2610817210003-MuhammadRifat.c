#include <stdio.h>

int main() {
    char nama[100], nim[50], kelas[50], ttl[100], alamat[100], hobby[100], no_hp[50];

    printf("%-20s: ", "Nama");
    scanf(" %[^\n]", nama);
    printf("%-20s: ", "NIM");
    scanf(" %[^\n]", nim);
    printf("%-20s: ", "Kelas Paralel");
    scanf(" %[^\n]", kelas);
    printf("%-20s: ", "Tempat/Tanggal Lahir");
    scanf(" %[^\n]", ttl);
    printf("%-20s: ", "Alamat");
    scanf(" %[^\n]", alamat);
    printf("%-20s: ", "Hobby");
    scanf(" %[^\n]", hobby);
    printf("%-20s: ", "No. HP");
    scanf(" %[^\n]", no_hp);

    printf("%-20s: %s\n", "Nama", nama);
    printf("%-20s: %s\n", "NIM", nim);
    printf("%-20s: %s\n", "Kelas Paralel", kelas);
    printf("%-20s: %s\n", "Tempat/Tanggal Lahir", ttl);
    printf("%-20s: %s\n", "Alamat", alamat);
    printf("%-20s: %s\n", "Hobby", hobby);
    printf("%-20s: %s\n", "No. HP", no_hp);

    return 0;
}
