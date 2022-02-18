#include <stdio.h>
#include <stdlib.h>

int main(){
	// array initilization
	int a[]={100,51,61,54,21,13,11};
	int n = 7; // array size
	
	for(int i=0;i<n-1;i++){   // for arr size of 7 it has to go 6 passes to complete the sorting
		int min = i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min=j;
			}
		}
		if(min!=i){
		// swapping 
			int temp = a[i];
			a[i]= a[min];
			a[min] = temp;	
		}
	}
	// printing sorted array
	for(int i=0;i<n;i++){
		printf("%d  ",a[i]);
	} 
}
