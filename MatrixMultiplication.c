#include <stdio.h>
int main(){
	
    int multi[20],poly1[20],poly2[20],deg1,deg2,i;
    // Polynomial 1
    printf("Enter degree of Poly1: ");
    scanf("%d",&deg1);
    printf("Polynomial 1 \n");
    for(i=deg1; i>=0; i--){
        printf("Coefficent of x^%d: ",i);
        scanf("%d",&poly1[i]);
    }
    printf("--------------------------------------\n");
    //Polynomial 2 
    printf("Enter degree of Poly2: ");
    scanf("%d",&deg2);
    printf("Polynomial 2 \n");
    for(i=deg2; i>=0; i--){
        printf("Coefficent of x^%d: ",i);
        scanf("%d",&poly2[i]);
    }
	
	// Initialised every element to 0
    for(i=0;i<=deg1+deg2+1;i++){
        multi[i]=0;
    }
	
	// Multiply
    for(i=0; i<=deg1;i++){
        for(int j=0;j<=deg2;j++){
            int product = poly1[i]*poly2[j];
            multi[i+j] += product;
        }
    }

    for(i=deg1+deg2;i>=0;i--){
        printf(" %dx^%d + ",multi[i],i);
    }
}
