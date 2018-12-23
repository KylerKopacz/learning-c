#include<stdio.h>

void print_binary(unsigned x) {
    if(x == 0) {
        printf("%x\n", 0);
    } else {
        for(int i = sizeof(x) * 8 - 1; i >= 0; i--) {
            printf("%i", x & (0x1 << i) ? 1 : 0);
        }
        printf("\n");
    }
}

unsigned set_bits(unsigned int x, int p, int n, unsigned int y) {
    /* Write a function setbits(x,p,n,y) that returns x with the n bits 
    that begin at position p set to the rightmost n bits of y, 
    leaving the other bits unchanged
    */

    //we need to make a copy of the lower bits that we are not going to change
    unsigned int lower_copy = 0;
    return 1;
}

int main() {
    unsigned int x = 0xff;
    print_binary(x);
}

