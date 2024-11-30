#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>


//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//� ���� ���������� ����� � ���� � ��������� UTF-8 ���� �������� ������� �� �� ����������
//� ����� ���� 3 ��� ���� ������� � ��������




// ��������� ��� �������� ������
typedef struct Node {
    int data;           // ������, �������� � �������� ������
    struct Node* next;  // ��������� �� ��������� ������� ������
} Node;



void append(Node** head, int value) {
    Node* new_node = (Node*)malloc(sizeof(Node));  // ������� ����� �������
    new_node->data = value;                         // ������������� ��������
    new_node->next = NULL;                           // ��������� ������� ����� NULL, ��� ��� �� � �����

    // ���� ������ ����, ����� ������� ���������� ������� ������
    if (*head == NULL) {
        *head = new_node;
        return;
    }

    // �����, ������� ��������� ������� � ��������� ����� ������� � �����
    Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new_node;
}


void delete_at_index(Node** head, int index) {
    if (*head == NULL) {
        printf("������ ����.\n");
        return;
    }

    Node* temp = *head;

    // ���� ����� ������� ������ �������
    if (index == 0) {
        *head = temp->next;
        free(temp);
        return;
    }

    // ���� �������, ������� ����� �������
    for (int i = 0; temp != NULL && i < index - 1; i++) {
        temp = temp->next;
    }

    // ���� ������ ������� �� ������� ������
    if (temp == NULL || temp->next == NULL) {
        printf("���������� ������� �������, ������ ��� ���������.\n");
        return;
    }

    // ������� �������
    Node* next = temp->next->next;
    free(temp->next);
    temp->next = next;
}

void print_list(Node* head) {
    if (head == NULL) {
        printf("������ ����.\n");
        return;
    }

    Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// ������� ��� ������������ ������, ������� �������
void free_list(Node* head) {
    Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {

    setlocale(LC_ALL,"Russian");

    Node* head = NULL;  // ���������� ������ ����
    int choice, value, index;

    while (1) {
        printf("\n1. �������� ������� � ������\n");
        printf("2. ������� ������� �� �������� ������\n");
        printf("3. �������� ������\n");
        printf("4. �����\n");
        printf("�������� �����: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("������� �������� ��������: ");
                scanf("%d", &value);
                append(&head, value);
                break;

            case 2:
                printf("������� ������ �������� ��� ��������: ");
                scanf("%d", &index);
                delete_at_index(&head, index);
                break;

            case 3:
                printf("������� ������: ");
                print_list(head);
                break;

            case 4:
                free_list(head);
                printf("����� �� ���������.\n");
                return 0;

            default:
                printf("�������� �����, ���������� �����.\n");
        }
    }

    return 0;
}
