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




typedef enum { MANAGER, ENGINEER, SALES } Role;

typedef union {
    struct {
        int subordinates_count; // Количество подчиненных
        int access_level;       // Уровень доступа
    } manager;

    struct {
        char specialization[100]; // Область специализации
        int completed_projects;    // Количество завершенных проектов
    } engineer;

    struct {
        float total_sales;  // Общий объем продаж
        float plan_percentage; // Процент выполнения плана
    } sales;
} RoleData;

typedef struct {
    char name[100];
    int id;
    int age;
    Role role; // Роль сотрудника
    RoleData roleData; // Данные для роли
} Employee;

void addEmployee(Employee* employees, int* count) {
    printf("Введите имя сотрудника: ");
    scanf("%s", employees[*count].name);
    printf("Введите идентификатор сотрудника: ");
    scanf("%d", &employees[*count].id);
    printf("Введите возраст сотрудника: ");
    scanf("%d", &employees[*count].age);
    printf("Выберите роль сотрудника (0 - Менеджер, 1 - Инженер, 2 - Специалист по продажам): ");
    scanf("%d", &employees[*count].role);

    switch (employees[*count].role) {
        case MANAGER:
            printf("Введите количество подчиненных: ");
            scanf("%d", &employees[*count].roleData.manager.subordinates_count);
            printf("Введите уровень доступа: ");
            scanf("%d", &employees[*count].roleData.manager.access_level);
            break;
        case ENGINEER:
            printf("Введите область специализации: ");
            getchar(); // Очищаем буфер
            fgets(employees[*count].roleData.engineer.specialization, 100, stdin);
            employees[*count].roleData.engineer.specialization[strcspn(employees[*count].roleData.engineer.specialization, "\n")] = 0; // Убираем символ новой строки
            printf("Введите количество завершенных проектов: ");
            scanf("%d", &employees[*count].roleData.engineer.completed_projects);
            break;
        case SALES:
            printf("Введите общий объем продаж: ");
            scanf("%f", &employees[*count].roleData.sales.total_sales);
            printf("Введите процент выполнения плана: ");
            scanf("%f", &employees[*count].roleData.sales.plan_percentage);
            break;
        default:
            printf("Неверная роль.\n");
            return;
    }

    (*count)++;
}

void printEmployee(const Employee* employee) {
    printf("\nИнформация о сотруднике:\n");
    printf("Имя: %s\n", employee->name);
    printf("Идентификатор: %d\n", employee->id);
    printf("Возраст: %d\n", employee->age);

    switch (employee->role) {
        case MANAGER:
            printf("Роль: Менеджер\n");
            printf("Количество подчиненных: %d\n", employee->roleData.manager.subordinates_count);
            printf("Уровень доступа: %d\n", employee->roleData.manager.access_level);
            break;
        case ENGINEER:
            printf("Роль: Инженер\n");
            printf("Область специализации: %s\n", employee->roleData.engineer.specialization);
            printf("Количество завершенных проектов: %d\n", employee->roleData.engineer.completed_projects);
            break;
        case SALES:
            printf("Роль: Специалист по продажам\n");
            printf("Общий объем продаж: %.2f\n", employee->roleData.sales.total_sales);
            printf("Процент выполнения плана: %.2f\n", employee->roleData.sales.plan_percentage);
            break;
        default:
            printf("Неизвестная роль.\n");
    }
}

void searchEmployeeById(const Employee* employees, int count, int id) {
    for (int i = 0; i < count; i++) {
        if (employees[i].id == id) {
            printEmployee(&employees[i]);
            return;
        }
    }
    printf("Сотрудник с ID %d не найден.\n", id);
}

void changeEmployeeRole(Employee* employee) {
    printf("Введите новую роль сотрудника (0 - Менеджер, 1 - Инженер, 2 - Специалист по продажам): ");
    scanf("%d", &employee->role);

    switch (employee->role) {
        case MANAGER:
            printf("Введите количество подчиненных: ");
            scanf("%d", &employee->roleData.manager.subordinates_count);
            printf("Введите уровень доступа: ");
            scanf("%d", &employee->roleData.manager.access_level);
            break;
        case ENGINEER:
            printf("Введите область специализации: ");
            getchar(); // Очищаем буфер
            fgets(employee->roleData.engineer.specialization, 100, stdin);
            employee->roleData.engineer.specialization[strcspn(employee->roleData.engineer.specialization, "\n")] = 0; // Убираем символ новой строки
            printf("Введите количество завершенных проектов: ");
            scanf("%d", &employee->roleData.engineer.completed_projects);
            break;
        case SALES:
            printf("Введите общий объем продаж: ");
            scanf("%f", &employee->roleData.sales.total_sales);
            printf("Введите процент выполнения плана: ");
            scanf("%f", &employee->roleData.sales.plan_percentage);
            break;
        default:
            printf("Неверная роль.\n");
            return;
    }
}

int main() {

    setlocale(LC_ALL,"Russian");

    int count = 0;
    int maxEmployees = 100;
    Employee* employees = (Employee*)malloc(maxEmployees * sizeof(Employee));

    int choice;
    do {
        printf("\nМеню:\n");
        printf("1. Добавить нового сотрудника\n");
        printf("2. Вывести всех сотрудников\n");
        printf("3. Найти сотрудника по ID\n");
        printf("4. Изменить роль сотрудника\n");
        printf("5. Выход\n");
        printf("Введите ваш выбор: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee(employees, &count);
                break;
            case 2:
                for (int i = 0; i < count; i++) {
                    printEmployee(&employees[i]);
                }
                break;
            case 3:
            {
                int id;
                printf("Введите ID сотрудника для поиска: ");
                scanf("%d", &id);
                searchEmployeeById(employees, count, id);
            }
                break;
            case 4:
            {
                int id;
                printf("Введите ID сотрудника для изменения роли: ");
                scanf("%d", &id);
                int found = 0;
                for (int i = 0; i < count; i++) {
                    if (employees[i].id == id) {
                        changeEmployeeRole(&employees[i]);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Сотрудник с ID %d не найден.\n", id);
                }
            }
                break;
            case 5:
                printf("Выход из программы.\n");
                break;
            default:
                printf("Неверный выбор. Попробуйте снова.\n");
        }
    } while (choice != 5);


    free(employees);
    return 0;
}
