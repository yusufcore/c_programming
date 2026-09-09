#include <stdio.h>

int main(){
    char* name = "lucknow";
    char city[] = "kanpur";
    int len = -1;
    while(name[++len] != '\0');
    printf("Length = %d\n", len);
    return 0;
}
/*we can import a header file name --> #include<string.h> and use the strlen(_) function.*/