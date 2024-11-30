#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//� ���� ���������� ����� � ���� � ��������� UTF-8 ���� �������� ������� �� �� ����������
//� ����� ���� 3 ��� ���� ������� � ��������



bool is_prime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}


void filter_primes(int arr[], int size, int (*condition)(int)) {
    for (int i = 0; i < size; i++) {
        if (condition(arr[i])) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}


int main() {

    setlocale(LC_ALL,"Russian");

    int arr[1000];

    // ��������� ������ ������� �� 1 �� 1000
    for (int i = 0; i < 1000; i++) {
        arr[i] = i + 1;
    }

    // ���������� ������� �����
    printf("������� ����� �� ������� �� 1 �� 1000:\n");
    filter_primes(arr, 1000, is_prime);

    return 0;
}
