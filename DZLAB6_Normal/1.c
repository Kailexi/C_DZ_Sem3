#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//� ���� ���������� ����� � ���� � ��������� UTF-8 ���� �������� ������� �� �� ����������
//� ����� ���� 3 ��� ���� ������� � ��������



int main() {

    setlocale(LC_ALL,"Russian");

    int n, sum = 0;


    printf("������� ������ �������: ");
    scanf("%d", &n);

    // ����������� �������� ������ ��� �������
    int *arr = (int*)malloc(n * sizeof(int));

    // �������� �� �������� ��������� ������
    if (arr == NULL) {
        printf("������ ��������� ������!\n");
        return 1;
    }


    printf("������� �������� �������:\n");
    for (int i = 0; i < n; i++) {
        printf("������� %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i]; // ��������� ������� ������� � �����
    }


    printf("\n������: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("����� ��������� �������: %d\n", sum);


    free(arr);

    return 0;
}
