/*SOURCE CODE*/
#include<stdio.h>
#include<stdlib.h>

void binaryAdd(int sum[], int *cBit, const int bin1[], const int bin2[]);

int main() 
{
    int *cBit, sum[10];
    const int bin1[8] = {0,0,1,0,0,0,0,0}, bin2[8] = {1,1,1,1,1,1,1,1};      
    binaryAdd(sum, cBit, bin1, bin2);
}

void binaryAdd(int sum[], int *cBit, const int bin1[], const int bin2[])
{
      cBit = 0; 
      int i = 0;      
      for ( ; i < 9 || cBit != 0; i++) 
        {                     
            sum[9-i] = cBit ; 
            if (i < 8) sum[9-i] += bin1[7-i] + bin2[7-i]; 
            if (sum[9-i] == 2) {sum[9-i] = 0; cBit = 1;}
            else if (sum[9-i] == 3) {sum[9-i] = 1; cBit = 1;}    
            else if (sum[9-i] == 1 || sum[9-i] == 0) {cBit = 0;}           
        } 

    // Print list
    for(int k = 0 ; k <= i; k++) 
        {
            printf("%d  ", sum[k]);
        }                                                                                
}

/*OUTPUT
With: bin1[8] = {0,0,0,0,1,0,0,0}, bin2[8] = {0,0,0,0,0,1,1,1};
0  0  0  0  0  0  1  1  1  1 
With: bin1[8] = {0,0,1,0,0,0,0,0}, bin2[8] = {1,1,1,1,1,1,1,1}; 
0  1  0  0  0  1  1  1  1  1  
*/
