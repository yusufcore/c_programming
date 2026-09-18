#include<stdio.h>

int main(int argc, char** argv, char** envp){
    int i = 0;
    while(envp[i]!=NULL){
        printf("%s\n", envp[i]);
        i++;
    }
    return 0;
} // process jis env mai run hoga uska info hai.