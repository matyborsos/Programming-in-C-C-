/* CH-230-A
   a2_p1.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>

int main() {

    double a, b;

    scanf("%lf", &a);
    scanf("%lf", &b);

    printf("sum of doubles=%lf\n", a+b); //  prints the sum of the two doubles
    printf("difference of doubles=%lf\n", a-b); //  prints the difference of the two doubles
    printf("square=%lf\n", a*a); // prints the square of the first double, a

    int x, y;

    scanf("%d", &x);
    scanf("%d", &y);

    printf("sum of integers=%d\n", x+y); //  prints the sum of the integers
    printf("product of integers=%d\n", x*y); //  prints the product of the integers

    char c, d;

    getchar();
    scanf("%c", &c);
    getchar();
    scanf("%c", &d);

    printf("sum of chars=%d\n", c+d); //  prints the sum of the chars as decimal values
    printf("product of chars=%d\n", c*d); //  prints the product of the chars as decimal values

    printf("sum of chars=%c\n", c+d); // prints the sum of the chars as chars
    printf("product of chars=%c\n", c*d); // prints the product of the chars as chars

    return 0;

}
