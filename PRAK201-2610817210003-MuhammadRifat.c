#include <stdio.h>

int main(){
    char nama[100], nim[50], kelas[50], ttl[100], alamat[100], hobby[100], nohp[50];

printf("Nama: ");
scanf("%[^\n]", nama);
printf("NIM: ");
scanf("%s", nim);
printf("kelas paralel: ");
scanf("%s", kelas);
printf("Tempat/tanggal lahir: ");
scanf("%s", ttl);
printf("Alamat: ");
scanf("%s", alamat);
printf("Hobi: ");
scanf("%s", hobby);
printf("No.Hp: ");
scanf("%s", nohp);

printf("nama: %s\n", nama);
printf("nim: %s\n", nim);
printf("kelas paralel: %s\n", kelas);
printf("ttl: %s\n", ttl);
printf("alamat: %s\n", alamat);
printf("hobby: %s\n", hobby);
printf("no.hp: %s\n", nohp);

return 0;
}