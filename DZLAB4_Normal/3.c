#include <stdio.h>
#include <locale.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//У меня АНГЛИЙСКАЯ ВИНДА у меня в кодировке UTF-8 нету русского поэтому всё на английском
//В лабах выше 3 уже есть русский я пофиксил


void swap_elements(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int main() {

    setlocale(LC_ALL,"Russian");

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]); // Размер массива

    printf("Исходный массив: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    swap_elements(arr, 1, 3); // индекс 1 и 3 меняй вася еууу

    printf("Массив после смены: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
