/* Types of Functions.
4 types of functions are there -->

1) Function with no arguments and no return value.
2) Function with no arguments and a return value.
3) Function with arguments and no return value.
4) Function with arguments and a return value.*/

// // 1) Function with no arguments and no return value.
// #include <stdio.h>
// // void --> function does not return any value.
// // (void) --> fucntion does not accept any arguments.
// void dispmenu(void);

// int main(){
//     int choice;
//     dispmenu();   // function is called but no arguments are passed..
//     printf("Enter your choice: ");
//     scanf("%d", &choice);
// }
// // This Fucntion takes no arguments and returns no value.
// void dispmenu(void){    
//     printf("1. Create database\n");
//     printf("2. Insert new record\n");
//     printf("3. Modify a record\n");
//     printf("4. Delete a record\n");
//     printf("5. Display all records\n");
//     printf("6. Exit\n");
// }



// 2) Function with no arguments but a return value.

// #include <stdio.h>
// int func(void);

// int main(){
//     printf("%d\n", func());  // function calling where no arguments are passed.
// }

// int func(void){
//     int num, sum = 0;
//     for(num=1;num<=25;num++){
//         if(num%2!=0){
//             sum += num*num;
//         }
//     }
//     return sum;  // but it returns an int.
// }



// 3) Functions with arguments but no return value.

// #include <stdio.h>
// #include <math.h>
// void type(float a, float b, float c);
// void area(float a, float b, float c);

// int main(){
//     float a,b,c;
//     printf("Enter the sides of triangle: ");
//     scanf("%f%f%f",&a, &b, &c);
//     if(a<b+c && b<c+a && c<a+b){
//         type(a,b,c);
//         area(a,b,c);
//     }
//     else{
//         printf("No triangles possible with these sides.\n");
//     }
// }
// void type(float a, float b, float c){
//     if((a*a)+(b*b)==(c*c) || (b*b)+(c*c)==(a*a) || (c*c)+(a*a)==(b*b)){
//         printf("The triangle is right angled triangle\n");
//     }
//     if(a==b && b==c){
//         printf("The triangle is equilateral\n");
//     }
//     else if(a==b || b==c || c==a){
//         printf("The triangle is isosceles\n");
//     }
//     else{
//         printf("The triangle is scalene\n");
//     }
// }
// void area(float a, float b, float c){
//     float s, area;
//     s = (a+b+c)/2;
//     area = sqrt(s*(s-a)*(s-b)*(s-c));
//     printf("The area of triangle = %f\n", area);
// }


// 4) Function with arguments and return value;

// #include <stdio.h>
// int sum(int n);

// int main(){
//     int num;
//     printf("Enter the number: ");
//     scanf("%d", &num);
//     printf("Sum is digits of %d is %d\n", num, sum(num));
// }
// int sum(int n){
//     int i, sum=0, rem;
//     while(n>0){
//         rem = n%10;
//         sum+=rem;
//         n/=10;
//     }
//     return (sum);
// }