#include <stdio.h>
#include <locale.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//У меня АНГЛИЙСКАЯ ВИНДА у меня в кодировке UTF-8 нету русского поэтому всё на английском
//В лабах выше 3 уже есть русский я пофиксил




void reverse_array(int arr[], int size) {
    int temp;
    for (int i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int main() {

    setlocale(LC_ALL,"Russian");

    int n;

    printf("Введите количество элементов массива: ");
    scanf("%d", &n);

    int arr[n];

    printf("Введите элементы массива:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    reverse_array(arr, n);

    printf("Развернутый массив:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
