#include <stdio.h>

int rectArea (int len, int wid); 
int main(void) {
    
    for(int p = 0 ; p < 5; p++ ) {
        /*Problem8 DIVIDE & MODULUS*/
        int one, two; 
        printf("Input two numbers: ");
        scanf("%d %d", &one, &two);
        printf("%d/%d = %d\n", one, two, one/two);
        printf("%d%%%d = %d\n", one, two, one%two);
        
        /*Problem9 IS EVEN?*/
        int iseven;
        printf("\nInput a number to check even: ");
        scanf("%d", &iseven);
        printf( iseven%2 == 0 ? "Your number is even! :)\n" : "Your number is NOT even! :(\n");
        
        /*Problem10 SUM OF INBETWEEN INCLUSIVE*/
        int start, end, total = 0; 
        printf("\nInput another two numbers: ");
        scanf("%d %d", &start, &end); 
        if(start > end){total=start; start = end; end = total; total = 0;}
        for (int i = start; i <= end; i++) total += i; 
        printf("Your sum is %d\n", total); 
    }
    
	/*Problem11 AREA*/
	printf("\nThe area of a 10 x 5 rectangle is: %d\n", rectArea(10,5));
	return 0;
}

int rectArea (int len, int wid) { 
    return len * wid;
}
