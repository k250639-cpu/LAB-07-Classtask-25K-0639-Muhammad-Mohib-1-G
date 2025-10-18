#include <stdio.h>
int main() {
    char str[1000];
    printf("Enter characters (alphabets will not be accepted): ");
    scanf("%[^A-Za-z]", str);
    printf("You entered (non-alphabetic characters only): %s\n", str);
    return 0;
}
