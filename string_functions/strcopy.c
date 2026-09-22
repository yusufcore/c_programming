#include<stdio.h>
#include<string.h>

int main(){
    char name[20] = "Manoj Kumar";
    char* user = "Sunil Sehgal";
    strcpy(user,name);
    printf("%s\n", name);
    printf("%s\n", user);
    return 0;
}