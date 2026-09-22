#include<stdio.h>
#include<string.h>

int main(){
    char name[20] = "Manoj Kumar";
    char* user = "Sunil Sehgal";
    strcat(name, " ");
    strncat(name,user,2); // concatenates till (n) from user to name.
    printf("%s\n", name);
    printf("%s\n", user);
    return 0;
}