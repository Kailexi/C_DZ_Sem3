#include <stdio.h>
#include <locale.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//У меня АНГЛИЙСКАЯ ВИНДА у меня в кодировке UTF-8 нету русского поэтому всё на английском
//В лабах выше 3 уже есть русский я пофиксил



int sum_array(int arr[], int m) {
    // Базовый случай: если один элемент в массиве
    if (m == 1) {
        return arr[0];
    }
    // Рекурсивный случай: сумма первого элемента и суммы остальных элементов
    return arr[0] + sum_array(arr + 1, m - 1);
}

int main() {

    setlocale(LC_ALL,"Russian");

    int m;



    printf("Введите количество элементов в массиве (1 <= m <= 100): ");
    scanf("%d", &m);

    int arr[m];  // Массив длиной m


    printf("Введите элементы массива:\n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr[i]);
    }


    printf("Сумма элементов массива: %d\n", sum_array(arr, m));

    return 0;
}
