#include <iostream>
using namespace std;

int main() {
	int element,loc,n;
	printf("Enter the Number of elements : ");
	fflush(stdout);
	scanf("%d",&n);
	int arr[100];
	for (int i = 0 ; i < n; i++){
		printf("Enter Element %d : ",i+1);
		fflush(stdout);
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to be inserted : ");
	fflush(stdout);
	scanf("%d",&element);
	printf("Enter the location : ");
	fflush(stdout);
	scanf("%d",&loc);
	for (int i = n ; i >= loc; i--){
		arr[i] = arr[i-1];
	}
	arr[loc-1] = element;
	for (int i = 0 ; i < n+1; i++){
		printf("%d ",arr[i]);
	}
}
