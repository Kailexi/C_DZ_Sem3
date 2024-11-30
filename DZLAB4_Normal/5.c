#include <stdio.h>
#include <stdlib.h> // Для функции qsort не буду я бабл сортом из задания 4 пользоваться как хотите
#include <locale.h>


//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//У меня АНГЛИЙСКАЯ ВИНДА у меня в кодировке UTF-8 нету русского поэтому всё на английском
//В лабах выше 3 уже есть русский я пофиксил



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

// Сравнительная функция для qsort брал с stackoverflow если не сработает буду грустить((
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

//Почему медиана?
double find_median(int arr[], int n) {

    int sorted[n];
    for (int i = 0; i < n; i++) {
        sorted[i] = arr[i]; // Создаем копию массива для сортировки
    }
    qsort(sorted, n, sizeof(int), compare); // Сортируем массив

    if (n % 2 == 0) {
        // Если количество элементов четное, медиана - это среднее двух средних элементов
        return (sorted[n / 2 - 1] + sorted[n / 2]) / 2.0;
    } else {
        // Если количество элементов нечетное, медиана - это средний элемент
        return sorted[n / 2];
    }
}

int main() {

    setlocale(LC_ALL,"Russian");

    int arr[] = {5, 2, 8, 3, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Исходный массив: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Минимальное значение: %d\n", find_min(arr, n));
    printf("Максимальное значение: %d\n", find_max(arr, n));
    printf("Среднее арифметическое: %.2f\n", find_average(arr, n));
    printf("Медиана: %.2f\n", find_median(arr, n));

    return 0;
}
