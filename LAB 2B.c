/*SOURCE CODE*/
#include <stdlib.h>
#include <stdio.h>

int rectArea (int len, int wid) {
	return len * wid;
}

void rect(int *ar, int *per, int len, int wid) {
	*ar = len * wid;
	*per = (2*len) + (2*wid);
}

int main() {
	int j, k, a, p;

	for (int i = 0; i < 3 ; i++) {
		
		printf("Input two numbers by spaces: ");
		scanf("%d %d", &j, &k);
		printf("Excercise 11: Area - %d\n", rectArea(j, k));
		rect(&a, &p, j, k);
		printf("Excercise 12: Area - %d	Perimeter - %d\n\n", a, p); 	
	}

}

/*OUTPUT


Input two numbers by spaces: 8 3
Excercise 11: Area - 24
Excercise 12: Area - 24	Perimeter - 22

Input two numbers by spaces: 12 12
Excercise 11: Area - 144
Excercise 12: Area - 144	Perimeter - 48

Input two numbers by spaces: 28 23
Excercise 11: Area - 644
Excercise 12: Area - 644	Perimeter - 102

*/
