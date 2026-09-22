#include<stdio.h>
#include<string.h>

int main(int argc, char** argv){
    char name[20] = "Manoj Kumar";
    char* user = "Sunil";
    strncpy(name,user,6);  // copies only till (n) is specified.
    printf("%s\n", name);
    printf("%s\n", user);
    return 0;
}
