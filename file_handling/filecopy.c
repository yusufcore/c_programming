#include <stdio.h>
int main(int argc, char** argv){
    FILE* fpr = fopen("info.txt", "r");
    FILE* fpw = fopen("copy.txt", "a");

    if((fpr==NULL)||(fpw==NULL)){
        printf("operation cannnot be performed!");
        return 0;
    }
    int data;
    while((data=fgetc(fpr))!=-1){
        putc(data, fpw);
    }
    fclose(fpr);
    fclose(fpw);
    return 0;
}