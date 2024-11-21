#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Yeu cau nguoi dung nhap nhiet do theo do Celsius
    printf("Nhap nhiet do theo do Celsius: ");
    scanf("%f", &celsius);

    // Chuyen doi sang do Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Hien thi ket qua
    printf("%g do Celsius bang %g do Fahrenheit\n", celsius, fahrenheit);

    return 0;
}

