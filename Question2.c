#include <stdio.h>
int main(){
	int arr[10] = {0};
	int num=0, count = 0;
	printf("Enter 10 numbers to be stored in an array");
	for(int i =0; i < 10; i++){
		scanf("%d", & arr[i]);
	}
	printf("Enter number to be searched in the array: ");
	scanf("%d", & num);
	for(int i = 0; i < 10; i++){
		if( arr[i] == num){
			count += 1;
		}
	}
	if(count >=1){
		printf("The number %d was seen %d times in the array", num, count);
	}else{
		printf("number not found");
	}
	return 0;
}
