#include <stdio.h>
struct student{
    char gender;
    char* name;
    int age;
};

int main(){
    struct student istudent = {'M',"Mohammad Yusuf", 21};
    struct student bstudent = {'M',"Mohammad", 21};
    printf("Size of istudent: %d\n", (int)sizeof(istudent));
    printf("Size of struct student: %d\n", (int)sizeof(struct student));
    return 0;
}