#include <stdio.h>
int main(){
	int arr[10] = {0};
	int max = 0, min = 100, num;
	for(int i = 0; i < 10; i++){
		printf("\nEnter Value %d: ", i + 1);
		scanf("%d", &num);
		arr[i]= num;
		if(num > max){
			max = num;
		}
		if(num < min){
			min = num;
		}
	}
	printf("The difference between maximum value and minimum value is: %d", max - min);
	return 0;
}
