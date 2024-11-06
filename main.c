#include <stdio.h>

int main(void) {

    char ulangi;
    int arus, resistensi, tegangan;

    do {
        printf("Program menghitung tegangan dengan do-while\n");
        printf("===========================================\n");

        printf("masukkan arus (ampere) = \n");
        scanf("%d",&arus);

        printf("masukkan resistensi (ampere) = \n");
        scanf("%d",&resistensi);

        tegangan = arus * resistensi;
        printf("tegangan adalah = %d\n" , tegangan);
        printf("===========================================\n");
        printf("apakah anda ingin melanjutkan program ? \n");
        scanf("%s",&ulangi);
    } while(ulangi == 'y' || ulangi == 'Y');


    return 0;
}
