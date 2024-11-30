#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



void print_results(int* votes, int num_candidates) {
    printf("\n������� ���������� �����������:\n");
    for (int i = 0; i < num_candidates; i++) {
        printf("�������� %d: %d �������\n", i + 1, votes[i]);
    }
}

int main() {

    setlocale(LC_ALL,"Russian");

    int num_candidates;

    printf("������� ���������� ����������: ");
    scanf("%d", &num_candidates);

    // �������� �� ������������ ����
    if (num_candidates <= 0) {
        printf("�������� ���������� ����������!\n");
        return 1;
    }


    // ��������� ������ ��� ������� �������
    int* votes = (int*)calloc(num_candidates, sizeof(int)); // ������������� 0
    if (votes == NULL) {
        printf("������ ��������� ������!\n");
        return 1;
    }

    int vote;
    while (1) {
        printf("\n������� ����� ��������� ��� ����������� (�� 1 �� %d) ��� ������������� ����� ��� ����������: ", num_candidates);
        scanf("%d", &vote);

        // ���������� ��������� ��� ����� �������������� �����
        if (vote < 0) {
            break;
        }

        // ��������, ��� ����� ��������� �������
        if (vote < 1 || vote > num_candidates) {
            printf("������������ ����� ���������! ���������� �����.\n");
        } else {
            // ����������� ������� ������� ��� ���������� ���������
            votes[vote - 1]++;
            // ������ ������� �����������
            print_results(votes, num_candidates);
        }
    }

    free(votes);

    printf("����������� ���������.\n");
    return 0;
}
