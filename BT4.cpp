#include <stdio.h>

struct SinhVien {
    int id;
    char name[100];
    int age;
    char phoneNumber[15];
};

int main() {
    struct SinhVien sinhVienArray[50];
    int soLuongSinhVien = 5;

    for (int i = 0; i < soLuongSinhVien; i++) {
        sinhVienArray[i].id = i + 1;
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
    for (int i = 0; i < soLuongSinhVien; i++) {
        printf("ID: %d\n", sinhVienArray[i].id);
        printf("Ten: %s", sinhVienArray[i].name);
        printf("Tuoi: %d\n", sinhVienArray[i].age);
        printf("So dien thoai: %s\n", sinhVienArray[i].phoneNumber);
    }

    return 0;
}

