#include <stdio.h>

struct SinhVien {
    char name[100];
    int age;
    char phoneNumber[15];
};

int main() {
    struct SinhVien sv;

    printf("Nhap ten sinh vien: ");
    fgets(sv.name, sizeof(sv.name), stdin);

    printf("Nhap tuoi sinh vien: ");
    scanf("%d", &sv.age);

    printf("Nhap so dien thoai sinh vien: ");
    scanf("%s", sv.phoneNumber);

    printf("\nThong tin sinh vien:\n");
    printf("Ten: %s", sv.name);
    printf("Tuoi: %d\n", sv.age);
    printf("So dien thoai: %s\n", sv.phoneNumber);

    return 0;
}

