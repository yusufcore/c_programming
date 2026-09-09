#include <stdio.h>

int main(){
    char* name = "luckn\0ow";
    char city[] = "kanpur";
    printf("name=%s\n", name);
    printf("city=%s\n", city);
    city[0] = 'N';
    printf("city=%s\n", city);
    //*name = 'T';   /*error*/
    //name[0] = 'T';   /*error*/

    name = "jaunpur";  
    printf("name=%s\n", name);
    return 0;
}

// we cannot chamge the individual characters of name, but we can make it point to a new string.
