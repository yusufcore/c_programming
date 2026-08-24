#include <stdio.h>

int main(){
    double celsius;
    double fahrenheit;

    printf("Enter the Temperature in Celsius: ");
    scanf("%lf", &celsius);
    fahrenheit = 9 * (celsius / 5) + 32;
    printf("Temp in Fahrenheit = %.2lf F\n", fahrenheit);
    return 0;
}
