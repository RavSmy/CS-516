/*SOURCE CODE*/
#include<stdio.h>
#include<stdlib.h>
 
void tenbin(int bin[], int start);

int main() { 
	int binary[8];
	printf("Input an binary separated by spaces: ");
	for (int i  = 0 ; i < 8 ; i++) scanf("%d", &binary[i]); 
	for (int i = 0; i < 10; i++) {
		tenbin(binary, 7);
		for (int i = 0; i < 8; i++) printf( "%d", binary[i]);
		printf("\n"); 
	}
}
 

void tenbin(int binary[], int start) {
	if (binary[start] == 0) { binary[start]++; return; }
	binary[start] = 0;
	tenbin(binary, start - 1);
	return; 
}



/*OUTPUT
Input an binary separated by spaces: 0 1 0 1 1 0 1 0
01011011
01011100
01011101
01011110
01011111
01100000
01100001
01100010
01100011
01100100
Input an binary separated by spaces: 0 0 0 0 0 0 0 0
00000001
00000010
00000011
00000100
00000101
00000110
00000111
00001000
00001001
00001010
Press any key to continue . . .

*/
