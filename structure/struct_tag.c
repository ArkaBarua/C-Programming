#include <stdio.h>

struct employee {

  char *name;
  int age;
  int salary;
};

int manager(){
    struct employee manager;

    manager.age = 27;


    if(manager.age > 30)
        manager.salary = 65000;
    else
        manager.salary = 55000;

    return manager.salary;
}

int main() {

  struct employee emp1, emp2;
    printf("Enter the salary of the employee1: ");
    scanf("%d",&emp1.salary);
    printf("Enter the salary of the employee2: ");
    scanf("%d",&emp2.salary);

    printf("the salayr of emp1: %d\t emp2: %d\tmanager salary: %d",emp1.salary,emp2.salary,manager());

    return 0; }
