#include <iostream>
using namespace std;

int main() {
	int count;
	printf("Enter the Number of Values : ");
	fflush(stdout);
	scanf("%d",&count);
	int arr[count];
	float sum = 0;
	for (int i = 0 ; i < count; i++){
		printf("Enter Element %d : ",i+1);
		fflush(stdout);
		scanf("%d",&arr[i]);
		sum += arr[i];
	}
	printf("Average = %.2f ", sum/count);
}
