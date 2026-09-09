#include <stdio.h>
struct student{char* name; int age; char gender;}istudent;
int main(){   // stores in the stackframe of main() during execution.
    struct student istudent = {"Yusuf", 21, 'M'};
    printf("Name: %s\n", istudent.name);
    printf("Age: %d\n", istudent.age);
    printf("Gender: %c\n", istudent.gender);
    return 0;
}
