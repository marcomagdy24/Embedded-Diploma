#include <iostream>
using namespace std;

int main() {
	int element,n,j=0;
	printf("Enter the Number of elements : ");
	fflush(stdout);
	scanf("%d",&n);
	int arr[n];
	unsigned int loc[n];
	for (int i = 0 ; i < n; i++){
		printf("Enter Element %d : ",i+1);
		fflush(stdout);
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to be searched : ");
	fflush(stdout);
	scanf("%d",&element);
	for (int i = 0 ; i < n; i++){
		if (arr[i] == element){
			loc[j] = i+1;
			j++;
		}
	}
	printf("Number found at location : ");
	for (int i = 0 ; i < n; i++){
		if (loc[i] >= sizeof(arr))
			break;
		printf("%d  ",loc[i]);
	}
}
