#include <stdio.h>

int main() {
    char name[50];
    int age;
    printf("Enter patient name: ");
    scanf("%s", name);
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Patient: %s, Age: %d\n", name, age);
    return 0;
}
