// nesting of structure.
#include <stdio.h>
struct user{
    char* username;
    int age;
    struct address{  // nested structure
        char* city;
        char* country;
    }location;
};
int main(){
    struct user fbuser;
    fbuser.username = "integral@lucknow";
    fbuser.age = 21;
    fbuser.location.city = "Kanpur";
    fbuser.location.country = "India";
    printf("Username: %s\n", fbuser.username);
    printf("Age: %d\n", fbuser.age);
    printf("City: %s\n", fbuser.location.city);
    printf("Country: %s\n", fbuser.location.country);
    printf("Size of user: %d\n", (int)sizeof(fbuser));
    printf("Size of address: %d\n", (int)sizeof(fbuser.location));
    return 0;
}