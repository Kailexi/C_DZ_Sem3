#include <stdio.h>
#include <locale.h>
//Made by Kailexi/Alexander Soldatov lmao

//https://github.com/Kailexi/C_DZ_Sem3
//Normal

//WARNING:
//У меня АНГЛИЙСКАЯ ВИНДА у меня в кодировке UTF-8 нету русского поэтому всё на английском
//В лабах выше 3 уже есть русский я пофиксил
// Рекурсивная функция для вычисления суммы элементов массива
int sumArray(int arr[], int n) {
    // Базовый случай: если длина массива равна 0, сумма равна 0
    if (n == 0) {
        return 0;
    }
    // Рекурсивный случай: текущий элемент + сумма оставшихся элементов
    return arr[n - 1] + sumArray(arr, n - 1);
}

int main() {

    setlocale(LC_ALL,"Russian");

    int m;


    printf("Введите количество элементов массива (1 < m  < 100): ");
    scanf("%d", &m);

    // Проверка допустимости размера массива
    if (m < 1 || m > 100) {
        printf("Ошибка: количество элементов должно быть в диапазоне от 1 до 100.\n");
        return 1;
    }

    int arr[m]; // Массив длиной m

    printf("Введите элементы массива: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr[i]);
    }


    int sum = sumArray(arr, m);


    printf("Сумма элементов массива: %d\n", sum);

    return 0;
}
