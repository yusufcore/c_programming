#include<stdio.h>
#include<string.h>

int main(){
    char name[20] = "Manoj Kumar";
    char* user = "Manoj singh";
    int comp = strcmp(user,name);
    printf("%d\n", comp);
    return 0;
}