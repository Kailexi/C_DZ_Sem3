#include <stdio.h>
#include <stdlib.h> // ��� ������� qsort �� ���� � ���� ������ �� ������� 4 ������������ ��� ������
#include <locale.h>


//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//� ���� ���������� ����� � ���� � ��������� UTF-8 ���� �������� ������� �� �� ����������
//� ����� ���� 3 ��� ���� ������� � ��������



int find_min(int arr[], int n) {

    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}


int find_max(int arr[], int n) {

    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}


double find_average(int arr[], int n) {

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (double)sum / n;
}

// ������������� ������� ��� qsort ���� � stackoverflow ���� �� ��������� ���� ��������((
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

//������ �������?
double find_median(int arr[], int n) {

    int sorted[n];
    for (int i = 0; i < n; i++) {
        sorted[i] = arr[i]; // ������� ����� ������� ��� ����������
    }
    qsort(sorted, n, sizeof(int), compare); // ��������� ������

    if (n % 2 == 0) {
        // ���� ���������� ��������� ������, ������� - ��� ������� ���� ������� ���������
        return (sorted[n / 2 - 1] + sorted[n / 2]) / 2.0;
    } else {
        // ���� ���������� ��������� ��������, ������� - ��� ������� �������
        return sorted[n / 2];
    }
}

int main() {

    setlocale(LC_ALL,"Russian");

    int arr[] = {5, 2, 8, 3, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("�������� ������: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("����������� ��������: %d\n", find_min(arr, n));
    printf("������������ ��������: %d\n", find_max(arr, n));
    printf("������� ��������������: %.2f\n", find_average(arr, n));
    printf("�������: %.2f\n", find_median(arr, n));

    return 0;
}
