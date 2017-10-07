/*SOURCE CODE*/
#include<stdio.h>
#include<stdlib.h>

void binaryAnd(int bAnd[], const int bin1[], const int bin2[]);

int main() 
{
    int bAnd[8];
    const int bin1[8] = {0,0,1,0,0,0,0,0}, bin2[8] = {1,1,1,1,1,1,1,1};      
    binaryAnd(bAnd, bin1, bin2);
}

void binaryAnd(int bAnd[], const int bin1[], const int bin2[])
{
        
      for ( int i =0; i < 8; i++) 
        {                     
           if(bin1[i] == 0 && bin2[i] == 0) bAnd[i] =0;
           else bAnd[i] = 1;           
        } 

    // Print list
    for(int k = 0 ; k < 8; k++) 
        {
            printf("%d  ", bAnd[k]);
        }                                                                                
}

/*OUTPUT
With: bin1[8] = {0,0,0,0,1,0,0,0}, bin2[8] = {0,0,0,0,0,1,1,1};
0  0  0  0  1  1  1  1 
With: bin1[8] = {0,0,1,0,0,0,0,0}, bin2[8] = {1,1,1,1,1,1,1,1}; 
1  1  1  1  1  1  1  1 
*/
