#include <stdio.h>
#include <locale.h>
//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//У меня АНГЛИЙСКАЯ ВИНДА у меня в кодировке UTF-8 нету русского поэтому всё на английском
//В лабах выше 3 уже есть русский я пофиксил




void copy_array(int n, int src[], int dest[]) {
    for (int i = 0; i < n; i++) {
        dest[i] = src[i];
    }
}

int main() {

    setlocale(LC_ALL,"Russian");

    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[5]; // Размер массива должен быть равен размеру исходного массива а то ошибчочки ошибочки аааааааааа
    int n = sizeof(arr1) / sizeof(arr1[0]);


    printf("Исходный массив: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    copy_array(n, arr1, arr2);

    printf("Копия массива: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}

