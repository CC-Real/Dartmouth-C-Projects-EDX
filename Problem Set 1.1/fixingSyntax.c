/*Before Fixing Syntax

#include <stdio.h>

int main(void) {
    printf ("This is code with errors: ")
    printf "Fix them!";
    return 0;
}
*/

//After Fixing Syntax
#include <stdio.h>

int main(void) {
    printf ("This is code with errors: ");
    printf ("Fix them!");
    return 0;
}