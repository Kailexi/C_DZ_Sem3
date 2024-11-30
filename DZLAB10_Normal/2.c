#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3

//Normal
//WARNING:

//У меня АНГЛИЙСКАЯ ВИНДА у меня в кодировке UTF-8 нету русского поэтому всё на английском
//В лабах выше 3 уже есть русский я пофиксил



typedef struct {
    char title[100];
    char author[100];
    int year;
    int available; // 1 - доступна, 0 - не доступна
} Book;

int main() {

    setlocale(LC_ALL,"Russian");

    int n;

    // Запрос количества книг
    printf("Введите количество книг: ");
    scanf("%d", &n);

    // Динамическое выделение памяти для массива книг
    Book* books = (Book*)malloc(n * sizeof(Book));
    if (books == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }

    // Заполнение информации о книгах
    for (int i = 0; i < n; i++) {
        printf("\nКнига %d:\n", i + 1);
        printf("Введите название книги: ");
        getchar(); // Очищаем буфер
        fgets(books[i].title, 100, stdin);
        books[i].title[strcspn(books[i].title, "\n")] = 0; // Убираем символ новой строки
        printf("Введите автора книги: ");
        fgets(books[i].author, 100, stdin);
        books[i].author[strcspn(books[i].author, "\n")] = 0; // Убираем символ новой строки
        printf("Введите год издания книги: ");
        scanf("%d", &books[i].year);
        printf("Введите статус доступности (1 - доступна, 0 - не доступна): ");
        scanf("%d", &books[i].available);
    }

    // Поиск книги по названию
    char search_title[100];
    printf("\nВведите название книги для поиска: ");
    getchar(); // Очищаем буфер
    fgets(search_title, 100, stdin);
    search_title[strcspn(search_title, "\n")] = 0; // Убираем символ новой строки

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(books[i].title, search_title) == 0) {
            printf("\nИнформация о книге:\n");
            printf("Название: %s\n", books[i].title);
            printf("Автор: %s\n", books[i].author);
            printf("Год издания: %d\n", books[i].year);
            printf("Статус доступности: %s\n", books[i].available ? "Доступна" : "Не доступна");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Книга не найдена.\n");
    }


    free(books);

    return 0;
}
