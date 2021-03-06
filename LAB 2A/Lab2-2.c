/*SOURCECODE*/
#include<stdio.h>
#include<stdlib.h>

int fib(int n); 

int main() {
	for (int i = 0; i < 4; i++) {
		int n;
		scanf("%d", &n);
		printf("Answer: %d \n", fib(n));
	}
}

int fib(int n) {
	if (n == 0) return 0;
	else if (n == 1) return 1; 
	
	return fib(n - 1) + fib(n - 2);
}

/*OUTPUT
7
Answer: 13
2
Answer: 1
12
Answer: 144
21
Answer: 10946
Press any key to continue . . .

*/
