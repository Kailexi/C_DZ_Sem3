#include <stdio.h>
#include <locale.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//� ���� ���������� ����� � ���� � ��������� UTF-8 ���� �������� ������� �� �� ����������
//� ����� ���� 3 ��� ���� ������� � ��������



int sum(int a, int b);
void reverse_array(int arr[], int size);

int main() {

    setlocale(LC_ALL,"Russian");


    int a, b;

    // ������� 1
    printf("������� ��� ����� ��� ��������: ");
    scanf("%d %d", &a, &b);
    printf("�����: %d\n", sum(a, b));

    // ������� 2
    int n;
    printf("������� ���������� ��������� �������: ");
    scanf("%d", &n);

    int arr[n];
    printf("������� �������� �������:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    reverse_array(arr, n);
    printf("����������� ������:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
