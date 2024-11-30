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




typedef enum { MANAGER, ENGINEER, SALES } Role;

typedef union {
    struct {
        int subordinates_count; // ���������� �����������
        int access_level;       // ������� �������
    } manager;

    struct {
        char specialization[100]; // ������� �������������
        int completed_projects;    // ���������� ����������� ��������
    } engineer;

    struct {
        float total_sales;  // ����� ����� ������
        float plan_percentage; // ������� ���������� �����
    } sales;
} RoleData;

typedef struct {
    char name[100];
    int id;
    int age;
    Role role; // ���� ����������
    RoleData roleData; // ������ ��� ����
} Employee;

void addEmployee(Employee* employees, int* count) {
    printf("������� ��� ����������: ");
    scanf("%s", employees[*count].name);
    printf("������� ������������� ����������: ");
    scanf("%d", &employees[*count].id);
    printf("������� ������� ����������: ");
    scanf("%d", &employees[*count].age);
    printf("�������� ���� ���������� (0 - ��������, 1 - �������, 2 - ���������� �� ��������): ");
    scanf("%d", &employees[*count].role);

    switch (employees[*count].role) {
        case MANAGER:
            printf("������� ���������� �����������: ");
            scanf("%d", &employees[*count].roleData.manager.subordinates_count);
            printf("������� ������� �������: ");
            scanf("%d", &employees[*count].roleData.manager.access_level);
            break;
        case ENGINEER:
            printf("������� ������� �������������: ");
            getchar(); // ������� �����
            fgets(employees[*count].roleData.engineer.specialization, 100, stdin);
            employees[*count].roleData.engineer.specialization[strcspn(employees[*count].roleData.engineer.specialization, "\n")] = 0; // ������� ������ ����� ������
            printf("������� ���������� ����������� ��������: ");
            scanf("%d", &employees[*count].roleData.engineer.completed_projects);
            break;
        case SALES:
            printf("������� ����� ����� ������: ");
            scanf("%f", &employees[*count].roleData.sales.total_sales);
            printf("������� ������� ���������� �����: ");
            scanf("%f", &employees[*count].roleData.sales.plan_percentage);
            break;
        default:
            printf("�������� ����.\n");
            return;
    }

    (*count)++;
}

void printEmployee(const Employee* employee) {
    printf("\n���������� � ����������:\n");
    printf("���: %s\n", employee->name);
    printf("�������������: %d\n", employee->id);
    printf("�������: %d\n", employee->age);

    switch (employee->role) {
        case MANAGER:
            printf("����: ��������\n");
            printf("���������� �����������: %d\n", employee->roleData.manager.subordinates_count);
            printf("������� �������: %d\n", employee->roleData.manager.access_level);
            break;
        case ENGINEER:
            printf("����: �������\n");
            printf("������� �������������: %s\n", employee->roleData.engineer.specialization);
            printf("���������� ����������� ��������: %d\n", employee->roleData.engineer.completed_projects);
            break;
        case SALES:
            printf("����: ���������� �� ��������\n");
            printf("����� ����� ������: %.2f\n", employee->roleData.sales.total_sales);
            printf("������� ���������� �����: %.2f\n", employee->roleData.sales.plan_percentage);
            break;
        default:
            printf("����������� ����.\n");
    }
}

void searchEmployeeById(const Employee* employees, int count, int id) {
    for (int i = 0; i < count; i++) {
        if (employees[i].id == id) {
            printEmployee(&employees[i]);
            return;
        }
    }
    printf("��������� � ID %d �� ������.\n", id);
}

void changeEmployeeRole(Employee* employee) {
    printf("������� ����� ���� ���������� (0 - ��������, 1 - �������, 2 - ���������� �� ��������): ");
    scanf("%d", &employee->role);

    switch (employee->role) {
        case MANAGER:
            printf("������� ���������� �����������: ");
            scanf("%d", &employee->roleData.manager.subordinates_count);
            printf("������� ������� �������: ");
            scanf("%d", &employee->roleData.manager.access_level);
            break;
        case ENGINEER:
            printf("������� ������� �������������: ");
            getchar(); // ������� �����
            fgets(employee->roleData.engineer.specialization, 100, stdin);
            employee->roleData.engineer.specialization[strcspn(employee->roleData.engineer.specialization, "\n")] = 0; // ������� ������ ����� ������
            printf("������� ���������� ����������� ��������: ");
            scanf("%d", &employee->roleData.engineer.completed_projects);
            break;
        case SALES:
            printf("������� ����� ����� ������: ");
            scanf("%f", &employee->roleData.sales.total_sales);
            printf("������� ������� ���������� �����: ");
            scanf("%f", &employee->roleData.sales.plan_percentage);
            break;
        default:
            printf("�������� ����.\n");
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
        printf("\n����:\n");
        printf("1. �������� ������ ����������\n");
        printf("2. ������� ���� �����������\n");
        printf("3. ����� ���������� �� ID\n");
        printf("4. �������� ���� ����������\n");
        printf("5. �����\n");
        printf("������� ��� �����: ");
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
                printf("������� ID ���������� ��� ������: ");
                scanf("%d", &id);
                searchEmployeeById(employees, count, id);
            }
                break;
            case 4:
            {
                int id;
                printf("������� ID ���������� ��� ��������� ����: ");
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
                    printf("��������� � ID %d �� ������.\n", id);
                }
            }
                break;
            case 5:
                printf("����� �� ���������.\n");
                break;
            default:
                printf("�������� �����. ���������� �����.\n");
        }
    } while (choice != 5);


    free(employees);
    return 0;
}
