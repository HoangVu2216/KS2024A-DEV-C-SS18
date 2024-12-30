#include <stdio.h>

struct SinhVien {
    char name[100];
    int age;
    char phoneNumber[15];
};

int main() {
    struct SinhVien sinhVienArray[5];

    for (int i = 0; i < 5; i++) {
        printf("Nhap thong tin sinh vien thu %d:\n", i + 1);
        printf("Nhap ten: ");
        getchar();
        fgets(sinhVienArray[i].name, sizeof(sinhVienArray[i].name), stdin);
        printf("Nhap tuoi: ");
        scanf("%d", &sinhVienArray[i].age);
        printf("Nhap so dien thoai: ");
        scanf("%s", sinhVienArray[i].phoneNumber);
    }

    printf("\nDanh sach sinh vien:\n");
    for (int i = 0; i < 5; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("Ten: %s", sinhVienArray[i].name);
        printf("Tuoi: %d\n", sinhVienArray[i].age);
        printf("So dien thoai: %s\n", sinhVienArray[i].phoneNumber);
    }

    return 0;
}

