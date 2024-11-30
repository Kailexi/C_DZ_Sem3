#include <stdio.h>
#include <locale.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//У меня АНГЛИЙСКАЯ ВИНДА у меня в кодировке UTF-8 нету русского поэтому всё на английском
//В лабах выше 3 уже есть русский я пофиксил




//Пример с балеринами был непонятным мы кодеры нам лучше на пальцах как ребёнку объяснять
void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) { // Внешний цикл (проходы)
        for (int j = 0; j < n - i - 1; j++) { // Внутренний цикл (сравнение элементов)
            if (arr[j] > arr[j + 1]) { // Если элементы в неправильном порядке
                // ТО Меняем их местами прикол с балеринами короче когда они там бегают
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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

    bubble_sort(arr, n);

    printf("Отсортированный массив: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
