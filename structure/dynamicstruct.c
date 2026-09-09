// dynamically allocate a struct in heap using malloc.
#include <stdio.h>
#include <malloc.h>
struct student{
    char* name;
    int age;
    char gender;
};
int main(){
    struct student* ist = (struct student* )malloc(sizeof(struct student));  // allocating memory
    ist->name = "Mohammad Yusuf";
    ist->age = 21;
    ist->gender = 'M';
    printf("Name = %s\n", ist->name);
    printf("Age = %d\n", ist->age);
    printf("Gender = %c\n", ist->gender);
    return 0;
}