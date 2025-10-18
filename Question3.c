#include <stdio.h>
int main() {
    int pass[10] = {0};
    int fail[10] = {0};
    int pcount = 0, fcount = 0;
    float ptotal = 0, ftotal = 0;
    int num;
    for (int i = 0; i < 10; i++) {
        printf("Enter marks of student no.%d (Enter -1 to exit): ", i + 1);
        scanf("%d", &num);
        if (num == -1)
            break;
        if (num >= 5 && num <= 10) {
            pass[pcount] = num;
            ptotal += num;
            pcount+=1;
        } 
        else if (num >= 0 && num < 5) {
            fail[fcount] = num;
            ftotal += num;
            fcount+=1;
        } 
        else {
            printf("Invalid marks! Please enter between 0 and 10.\n");
            i--;
        }
    }
    printf("\nPassing scores: ");
    if (pcount > 0) {
        for (int i = 0; i < pcount; i++)
            printf("%d ", pass[i]);
        printf("\nAverage of passing scores: %.2f\n", ptotal / pcount);
    } else {
        printf("None\n");
    }
    printf("Failing scores: ");
    if (fcount > 0) {
        for (int i = 0; i < fcount; i++)
            printf("%d ", fail[i]);
        printf("\nAverage of failing scores: %.2f\n", ftotal / fcount);
    } else {
        printf("None\n");
    }
    return 0;
}
