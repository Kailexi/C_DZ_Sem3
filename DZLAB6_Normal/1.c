#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//У меня АНГЛИЙСКАЯ ВИНДА у меня в кодировке UTF-8 нету русского поэтому всё на английском
//В лабах выше 3 уже есть русский я пофиксил



int main() {

    setlocale(LC_ALL,"Russian");

    int n, sum = 0;


    printf("Введите размер массива: ");
    scanf("%d", &n);

    // Динамически выделить память для массива
    int *arr = (int*)malloc(n * sizeof(int));

    // Проверка на успешное выделение памяти
    if (arr == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }


    printf("Введите элементы массива:\n");
    for (int i = 0; i < n; i++) {
        printf("Элемент %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i]; // Добавляем текущий элемент к сумме
    }


    printf("\nМассив: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Сумма элементов массива: %d\n", sum);


    free(arr);

    return 0;
}
