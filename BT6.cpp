#include <stdio.h>
#include <string.h>

struct SinhVien {
    int id;
    char name[100];
    int age;
    char phoneNumber[15];
};

int main() {
    struct SinhVien sinhVienArray[50] = {
        {1, "Nguyen Van A", 20, "0123456789"},
        {2, "Tran Thi B", 21, "0987654321"},
        {3, "Le Van C", 19, "0933445566"},
        {4, "Pham Thi D", 22, "0911223344"},
        {5, "Hoang Van E", 23, "0901234567"}
    };
    int soLuongSinhVien = 5;

    if (soLuongSinhVien >= 50) {
        printf("Mang da day, khong the them sinh vien moi.\n");
        return 1;
    }

    struct SinhVien sinhVienMoi;
    sinhVienMoi.id = soLuongSinhVien + 1;

    printf("Nhap ten sinh vien moi: ");
    getchar();
    fgets(sinhVienMoi.name, sizeof(sinhVienMoi.name), stdin);
    printf("Nhap tuoi sinh vien moi: ");
    scanf("%d", &sinhVienMoi.age);
    printf("Nhap so dien thoai sinh vien moi: ");
    scanf("%s", sinhVienMoi.phoneNumber);

    sinhVienArray[soLuongSinhVien] = sinhVienMoi;
    soLuongSinhVien++;

    printf("\nDanh sach sinh vien sau khi them moi:\n");
    for (int i = 0; i < soLuongSinhVien; i++) {
        printf("ID: %d\n", sinhVienArray[i].id);
        printf("Ten: %s", sinhVienArray[i].name);
        printf("Tuoi: %d\n", sinhVienArray[i].age);
        printf("So dien thoai: %s\n", sinhVienArray[i].phoneNumber);
    }

    return 0;
}

