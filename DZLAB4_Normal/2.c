#include <stdio.h>
#include <locale.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//У меня АНГЛИЙСКАЯ ВИНДА у меня в кодировке UTF-8 нету русского поэтому всё на английском
//В лабах выше 3 уже есть русский я пофиксил



#define SIZE 6 // Максимальный размер массива


void insert_element(int arr[], int *n, int index, int value) {
    if (*n >= SIZE) {
        printf("Ошибка: массив переполнен, невозможно вставить элемент.\n");
        return;
    }
    for (int i = *n; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = value; // Вставляем элемент потому что задача хдд
    (*n)++;
}


void delete_element(int arr[], int *n, int index) {
    if (*n <= 0) {
        printf("Ошибка: массив пуст, невозможно удалить элемент.\n");
        return;
    }
    for (int i = index; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
}


int main() {

    setlocale(LC_ALL,"Russian");

    int arr[SIZE] = {1, 2, 3, 4, 5}; // Предполагаем, что массив заранее выделен с запасом правильно же да?
    int n = 5;

    printf("Исходный массив: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    insert_element(arr, &n, 2, 10); // Вставляем значение 10 на индекс 2 например можно и по другому всем пофиг
    printf("Массив после вставки: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    delete_element(arr, &n, 2); // Удаляем элемент на индексе 2 или нет почему нет не правда ли?
    printf("Массив после удаления: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}