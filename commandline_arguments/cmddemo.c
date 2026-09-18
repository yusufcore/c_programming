// #include <stdio.h>
// int main(int argc, char** argv){
//     int i;
//     if(argc == 1){
//         printf("Correct usage: argc argv...........\n");
//         return 0;
//     }
//     for(i=1; i<argc; i++){
//         printf("%s\n", argv[i]);
//     }
//     return 0;
// }                                                        


// can also write -->


#include <stdio.h>
int main(int argc, char** argv){
    int i;
    if(argv[1]==NULL){
        printf("Correct usage: argc argv...........\n");
        return 0;
    }
    while(argv[i]==NULL){
        printf("%s\n", argv[i]);
    }
    return 0;
}      