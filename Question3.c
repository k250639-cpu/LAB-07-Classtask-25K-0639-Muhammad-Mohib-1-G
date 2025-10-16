#include <stdio.h>
int main(){
    int pass[10] = {0};
    int fail[10] = {0};
    int pcount=0, fcount=0, ptotal = 0, ftotal = 0, num;
    for(int i = 0; i < 10; i++){
        printf("\nEnter number of student no.%d (Enter -1 to exit): ", i + 1);
        scanf("%d", &num);
        if(num == -1)
            break;
        if(num >= 5){
            pass[pcount] = num;
            pcount += 1;
            ptotal += num;
        } else if(num >= 0 && num < 5){
            fail[fcount] = num;
            fcount += 1;
            ftotal += num;
        }
    }
    printf("Passing scores: ");
    for(int i = 0; i < pcount; i++){
        printf("%d, ", pass[i]);
    }
    if(pcount > 0)
        printf("\nThe average of the passing scores is: %d\n", ptotal / pcount);
    else
        printf("\nNo passing scores entered.\n");
    printf("Failing scores: ");
    for(int i = 0; i < fcount; i++){
        printf("%d, ", fail[i]);
    }
    if(fcount > 0)
        printf("\nThe average of the failing scores is: %d\n", ftotal / fcount);
    else
        printf("\nNo failing scores entered.\n");

    return 0;
}
