#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//� ���� ���������� ����� � ���� � ��������� UTF-8 ���� �������� ������� �� �� ����������
//� ����� ���� 3 ��� ���� ������� � ��������



typedef struct {
    char title[100];
    char author[100];
    int year;
    int available; // 1 - ��������, 0 - �� ��������
} Book;

int main() {

    setlocale(LC_ALL,"Russian");

    int n;

    // ������ ���������� ����
    printf("������� ���������� ����: ");
    scanf("%d", &n);

    // ������������ ��������� ������ ��� ������� ����
    Book* books = (Book*)malloc(n * sizeof(Book));
    if (books == NULL) {
        printf("������ ��������� ������!\n");
        return 1;
    }

    // ���������� ���������� � ������
    for (int i = 0; i < n; i++) {
        printf("\n����� %d:\n", i + 1);
        printf("������� �������� �����: ");
        getchar(); // ������� �����
        fgets(books[i].title, 100, stdin);
        books[i].title[strcspn(books[i].title, "\n")] = 0; // ������� ������ ����� ������
        printf("������� ������ �����: ");
        fgets(books[i].author, 100, stdin);
        books[i].author[strcspn(books[i].author, "\n")] = 0; // ������� ������ ����� ������
        printf("������� ��� ������� �����: ");
        scanf("%d", &books[i].year);
        printf("������� ������ ����������� (1 - ��������, 0 - �� ��������): ");
        scanf("%d", &books[i].available);
    }

    // ����� ����� �� ��������
    char search_title[100];
    printf("\n������� �������� ����� ��� ������: ");
    getchar(); // ������� �����
    fgets(search_title, 100, stdin);
    search_title[strcspn(search_title, "\n")] = 0; // ������� ������ ����� ������

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(books[i].title, search_title) == 0) {
            printf("\n���������� � �����:\n");
            printf("��������: %s\n", books[i].title);
            printf("�����: %s\n", books[i].author);
            printf("��� �������: %d\n", books[i].year);
            printf("������ �����������: %s\n", books[i].available ? "��������" : "�� ��������");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("����� �� �������.\n");
    }


    free(books);

    return 0;
}
