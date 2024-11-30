#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>


//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//У меня АНГЛИЙСКАЯ ВИНДА у меня в кодировке UTF-8 нету русского поэтому всё на английском
//В лабах выше 3 уже есть русский я пофиксил




// Структура для элемента списка
typedef struct Node {
    int data;           // Данные, хранимые в элементе списка
    struct Node* next;  // Указатель на следующий элемент списка
} Node;



void append(Node** head, int value) {
    Node* new_node = (Node*)malloc(sizeof(Node));  // Создаем новый элемент
    new_node->data = value;                         // Устанавливаем значение
    new_node->next = NULL;                           // Следующий элемент будет NULL, так как он в конце

    // Если список пуст, новый элемент становится головой списка
    if (*head == NULL) {
        *head = new_node;
        return;
    }

    // Иначе, находим последний элемент и добавляем новый элемент в конец
    Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new_node;
}


void delete_at_index(Node** head, int index) {
    if (*head == NULL) {
        printf("Список пуст.\n");
        return;
    }

    Node* temp = *head;

    // Если нужно удалить первый элемент
    if (index == 0) {
        *head = temp->next;
        free(temp);
        return;
    }

    // Ищем элемент, который нужно удалить
    for (int i = 0; temp != NULL && i < index - 1; i++) {
        temp = temp->next;
    }

    // Если индекс выходит за границы списка
    if (temp == NULL || temp->next == NULL) {
        printf("Невозможно удалить элемент, индекс вне диапазона.\n");
        return;
    }

    // Удаляем элемент
    Node* next = temp->next->next;
    free(temp->next);
    temp->next = next;
}

void print_list(Node* head) {
    if (head == NULL) {
        printf("Список пуст.\n");
        return;
    }

    Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Функция для освобождения памяти, занятой списком
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

    Node* head = NULL;  // Изначально список пуст
    int choice, value, index;

    while (1) {
        printf("\n1. Добавить элемент в список\n");
        printf("2. Удалить элемент из середины списка\n");
        printf("3. Показать список\n");
        printf("4. Выход\n");
        printf("Выберите опцию: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Введите значение элемента: ");
                scanf("%d", &value);
                append(&head, value);
                break;

            case 2:
                printf("Введите индекс элемента для удаления: ");
                scanf("%d", &index);
                delete_at_index(&head, index);
                break;

            case 3:
                printf("Текущий список: ");
                print_list(head);
                break;

            case 4:
                free_list(head);
                printf("Выход из программы.\n");
                return 0;

            default:
                printf("Неверный выбор, попробуйте снова.\n");
        }
    }

    return 0;
}
