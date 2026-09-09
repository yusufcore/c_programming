#include <stdio.h>
union myunion {
    int age;
    char gender;
};
int main(){
    union myunion intu;
    printf("%d\n",(int)sizeof(intu));
    intu.age = 30;
    printf("%d\n", intu.age);
    printf("%d\n", intu.gender);
    intu.gender = 'M';
    printf("%c\n", intu.gender);
    printf("%c\n", intu.age);
    return 0;
}