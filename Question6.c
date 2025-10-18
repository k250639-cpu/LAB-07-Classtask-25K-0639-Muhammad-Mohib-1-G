#include <stdio.h>
int main() {
    char str[100];
    int vowels = 0, consonants = 0, i = 0;
    char ch;
    printf("Enter a word: ");
    scanf("%s", str); 
    while (str[i] != '\0') { 
        ch = str[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels+= 1;
            } else {
                consonants+= 1;
            }
        }
        i+= 1; 
    }
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
    return 0;
}
