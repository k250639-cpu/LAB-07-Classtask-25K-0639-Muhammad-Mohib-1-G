#include <stdio.h>
int main() {
    int arr[5] = {0};
    int i= 0, j = 0, k=0, last= 0;
    printf("Enter 5 integers: ");
    for(i = 0; i < 5; i++ ){
        scanf("%d\n", & arr[i]);
    }
    last = arr[4];
    for(j=4; j > 0; j--){
        arr[j] = arr[j-1];
    }
    arr[0]= last;
    for( k= 0; k < 5; k++){
        printf("%d\n", arr[k]);
    }
    return 0;
}
