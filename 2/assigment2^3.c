/* CH-230-A
   a2_pt3.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>

int main() {

    int h, d, w, nh;
    scanf("%d", &h);
    scanf("%d", &d);
    scanf("%d", &w);

    nh = h + 24*d + 7*24*w;

    printf("total number of hours=%d\n", nh);
    /* prints the total number of hours
       that was computed in the variable "nh"
    */

    return 0;

}
