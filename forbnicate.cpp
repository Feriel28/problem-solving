// Type your code here, or load an example.

#include <stdio.h> 
#include <math.h>
#include <bitset>


int forbnicate(unsigned int x) {
    // step 1
    int m = (-1 << 5);
    x = x & m;

    // step 2 
    x = x<<1; 

    // step 3 
    int bitLength = std::bitset<8>(x).size();
    //unsigned int l =  std::log2(x)+1;
        for (int i = bitLength -8 ; i < bitLength; i++) //bon na3ref eli ça peut générer des erruer ken plus petit que 6 Juste test
{
       x = (x^ (1 << i));
}
return x;
}



int main() {

    printf("%d", forbnicate(69)); 
    
   // printf ("%d",(int)log2(70)+1);
    return 0;

}