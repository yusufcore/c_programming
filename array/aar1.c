#include<stdio.h>
int main(){
    int arr[5]={5,2,3,4,7};
    int i;
    // printing using subscript notation.
    for(i=0;i<5;i++){
        printf("Value of arr[%d]=%d\t",i,arr[i]);
        printf("Address of arr[%d]=%p\n",i,&arr[i]);
    }
    if(arr==&arr[0]){
        printf("true\n");
    }else{
        return 0;
    }
    printf("\n");
    // printing using pointer notation.
    for(i=0;i<5;i++){
        printf("Value of arr[%d]=%d\t",i, *arr+i);
        printf("Address of arr[%d]=%p\n",i,arr+1);
    }
    return 0;

}