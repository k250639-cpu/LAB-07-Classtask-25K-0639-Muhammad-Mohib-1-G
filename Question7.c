#include <stdio.h>
int main() {
    int arr[10];
    int dupli[1000] = {0};
    int i, num;
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++) {
        num = arr[i];
        if (num != -1) {
            if (dupli[num] == 1) {
                arr[i] = -1;
            } else {
                dupli[num] = 1;
            }
        }
    }
    printf("Updated array (duplicates marked as -1):\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
