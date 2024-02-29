#include <stdio.h>
/*
** stucture in global scope
** stucture in local scope
*/

struct{
    char *name;
    int age;
    int salary;
}emp1, emp2;

int manager(){
    struct{
        char *name;
        int age;
        int salary;
    }manager;

    manager.age = 27;

    if(manager.age > 30)
        manager.salary = 65000;
    else
        manager.salary = 55000;

    return manager.salary;
}

int main(){

    printf("Enter the salary of the employee1: ");
    scanf("%d",&emp1.salary);
    printf("Enter the salary of the employee2: ");
    scanf("%d",&emp2.salary);

    printf("the salayr of emp1: %d\t emp2: %d\tmanager salary: %d",emp1.salary,emp2.salary,manager());

        return 0;

}
