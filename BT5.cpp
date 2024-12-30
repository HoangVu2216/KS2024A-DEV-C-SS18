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
    int idCanTim;

    printf("Nhap id cua sinh vien can sua: ");
    scanf("%d", &idCanTim);

    int found = 0;
    for (int i = 0; i < soLuongSinhVien; i++) {
        if (sinhVienArray[i].id == idCanTim) {
            found = 1;
            printf("Thong tin sinh vien tim thay:\n");
            printf("ID: %d\n", sinhVienArray[i].id);
            printf("Ten: %s", sinhVienArray[i].name);
            printf("Tuoi: %d\n", sinhVienArray[i].age);

            printf("\nNhap ten moi: ");
            getchar();
            fgets(sinhVienArray[i].name, sizeof(sinhVienArray[i].name), stdin);
            printf("Nhap tuoi moi: ");
            scanf("%d", &sinhVienArray[i].age);

            printf("\nThong tin sinh vien da duoc cap nhat.\n");
            break;
        }
    }

    if (!found) {
        printf("Khong tim thay sinh vien co id %d.\n", idCanTim);
    }

    printf("\nDanh sach sinh vien sau khi cap nhat:\n");
    for (int i = 0; i < soLuongSinhVien; i++) {
        printf("ID: %d\n", sinhVienArray[i].id);
        printf("Ten: %s", sinhVienArray[i].name);
        printf("Tuoi: %d\n", sinhVienArray[i].age);
        printf("So dien thoai: %s\n", sinhVienArray[i].phoneNumber);
    }

    return 0;
}

