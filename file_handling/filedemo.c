#include<stdio.h>
int main(int argc, char** argv){
    FILE* fp = fopen("info.txt", "r");
    if(fp==NULL){
        printf("File does not exist!\n");
        return 0;
    }
    int data;
    while((data=fgetc(fp))!=-1){
        putchar(data);
    }
    fclose(fp);
    return 0;
}
