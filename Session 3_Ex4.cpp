#include <stdio.h>

int main() {
    float toan, van, anh, tong, trung_binh;

    // Nhap diem cua 3 mon
    printf("Nhap diem Toan: ");
    scanf("%f", &toan);

    printf("Nhap diem Van: ");
    scanf("%f", &van);

    printf("Nhap diem Anh: ");
    scanf("%f", &anh);

    // Tinh tong diem va diem trung binh
    tong = toan + van + anh;
    trung_binh = tong / 3;

    // Hien thi ket qua
    printf("Tong diem: %g\n", tong);
    printf("Diem trung binh: %.2f\n", trung_binh);

    return 0;
}

