#include<stdio.h>
#include<string.h>

int main(int argc, char** argv){
    char* name = "Manoj kumor";
    char* ch = strrchr(name,'u');
    if(ch!=NULL){
        printf("%s\n", ch);
    }else{
        printf("character not found!");
    }
    return 0;
}