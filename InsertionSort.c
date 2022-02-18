#include <stdio.h>
#include <stdlib.h>

int main(){
	// array initilization
	int a[]={100,51,61,54,21,13,11};
	int n = 7; // array size
	
	// excluding i=0 becoz we have taken it as a sorted sub array
	for(int i=1;i<n;i++){
		int temp = a[i];
		int j=i-1;
		while(j>=0 && a[j] > temp){
			// swap until temp reaches proper position.
			a[j+1] = a[j];
			j--;
		}
		a[j+1]= temp;
	}
	
	// print data
	for(int i=0;i<n;i++){
		printf("%d  ",a[i]);
	}
}
