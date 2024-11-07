#include <stdio.h>
#include <string.h>

struct employee {
    char name[25];
    int id;
    char department[20];
    float salary;
    char email[50];
};

int main() {

    struct employee john = {
        .name = "John Doe",
        .id = 12345,
        .department = "Human Resources",
        .salary = 55000.50,
        .email = "john.doe@company.com"
    };

    
    printf("Employee Information:\n");
    printf("Name: %s\n", john.name);
    printf("ID: %d\n", john.id);
    printf("Department: %s\n", john.department);
    printf("Salary: $%.2f\n", john.salary);
    printf("Email: %s\n", john.email);

    return 0;
}