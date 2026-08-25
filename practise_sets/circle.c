// input radius from the user and print the area and perimeter of a circle.
#include <stdio.h>
#define PI 3.141592653589793
double area(double r);
double perimeter(double r);
double radius;
int main(){
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    double area1 = area(radius);
    printf("Area of the circle is: %.3lf\n", area1);
    double peri1 = perimeter(radius);
    printf("Perimeter of the circle is: %.3lf\n", peri1);
    return 0;
}
double area(double r){
    return PI*(r*r);
}
double perimeter(double r){
    return (2*PI)*r;
}