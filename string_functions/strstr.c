// to find a string inside a given string.
#include<stdio.h>
#include<string.h>

int main(){
    char* name = "lucknow junction EAST";
    char* sb = "ncti";
    char* result = strstr(name, sb);
    if(result!=NULL){
        printf("%s\n", result);
    }else{
        printf("string not found!");
    }
    return 0;
}