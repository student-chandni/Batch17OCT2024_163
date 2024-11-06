#include <stdio.h>

int main() {
    float test1, test2, test3, project;
    printf("Enter Test1 score: ");
    scanf("%f", &test1);
    printf("Enter Test2 score: ");
    scanf("%f", &test2);
    printf("Enter Test3 score: ");
    scanf("%f", &test3);
    printf("Enter Project score: ");
    scanf("%f", &project);

    int eligible = 1;

    if (test1 < 75) {
        eligible = 0;
    }
    if (test2 < 75) {
        eligible = 0;
    }
    if (test3 < 70) {
        eligible = 0;
    }
    if (project < 75) {
        eligible = 0;
    }

    switch (eligible) {
        case 1:
            printf("Eligible for deployment\n");
            break;
        default:
            printf("Not eligible for deployment\n");
    }

    return 0;
}

