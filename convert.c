#include <stdio.h>

int main() {
    int choice;
    int decimalNum, binaryNum, octalNum;
    int digit, base, temp, position;

    printf("Menu Konversi Bilangan\n");
    printf("1. Bilangan Desimal ke Biner\n");
    printf("2. Bilangan Biner ke Desimal\n");
    printf("3. Bilangan Desimal ke Octal\n");
    printf("4. Bilangan Octal ke Desimal\n");
    printf("Pilih opsi (1/2/3/4): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Masukkan bilangan desimal: ");
            scanf("%d", &decimalNum);
            printf("Hasil konversi: ");
            for (int i = 7; i >= 0; i--) {
                int k = decimalNum >> i;
                if (k & 1)
                    printf("1");
                else
                    printf("0");
            }
            break;
        case 2:
            printf("Masukkan bilangan biner: ");
            scanf("%d", &binaryNum);
            decimalNum = 0;
            position = 1;
            while (binaryNum > 0) {
                digit = binaryNum % 10;
                decimalNum += digit * position;
                binaryNum /= 10;
                position *= 2;
            }
            printf("Hasil konversi: %d\n", decimalNum);
            break;
        case 3:
            printf("Masukkan bilangan desimal: ");
            scanf("%d", &decimalNum);
            printf("Hasil konversi: ");
            while (decimalNum > 0) {
                octalNum = decimalNum % 8;
                printf("%d", octalNum);
                decimalNum /= 8;
            }
            break;
        case 4:
            printf("Masukkan bilangan octal: ");
            scanf("%d", &octalNum);
            decimalNum = 0;
            position = 1;
            while (octalNum > 0) {
                digit = octalNum % 10;
                decimalNum += digit * position;
                octalNum /= 10;
                position *= 8;
            }
            printf("Hasil konversi: %d\n", decimalNum);
            break;
        default:
            printf("Opsi yang Anda pilih tidak valid.\n");
    }

    return 0;
}

