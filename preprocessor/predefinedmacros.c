// predefined object like macro;
#include<stdio.h>

int main(){
    printf("File: %s\n", __FILE__);
    printf("Line no.: %d\n", __LINE__);
    printf("Date: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    printf("File: %d\n", __STDC__);
    return 0;
}