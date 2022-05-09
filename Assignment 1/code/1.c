#include <stdio.h>

int main() 
{
	int a[6] = {6,8,10,12,13,0};
	// There are six numbers in ascending order
	int median = (a[2]+a[3])/2;
	int mean = median; // Given
	int sum=0; // Finding sum of remaining 5 numbers
	for(int i=0;i<5;i++)
	{
		sum+=a[i];	
	}
	int x = mean*6-sum;
	printf("%d",x);
}
