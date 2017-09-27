/*SOURCECODE*/
#include<stdio.h>
#include<stdlib.h>
 
void tenoct(int oct[]);
int main() { 
	int oct[4];
	printf("Input, separated by spaces: ");
	for(int i =0 ; i < 4; i++) scanf("%d", &oct[i]); 
	for (int i = 0; i < 10; i++) tenoct(oct); 
}
 

void tenoct(int oct[]) {
	oct[3] += 1;
	if (oct[3] > 7) { 
		oct[3] = oct[3] - 8;
		oct[2]++;

		if (oct[2] > 7) {
			oct[2] = oct[2] - 8;
			oct[1]++;

			if (oct[1] > 7) {
			oct[1] = oct[1] - 8;
			oct[0]++;
			}
		}

	}

	for(int i =0 ; i < 4; i++) printf("%d", oct[i]); 
    printf("\n");

}


/*OUTPUT
Input, separated by spaces: 1 2 3 4
1235
1236
1237
1240
1241
1242
1243
1244
1245
1246 
Input, separated by spaces: 3 4 5 6
3457
3460
3461
3462
3463
3464
3465
3466
3467
3470
Press any key to continue . . .
*/
