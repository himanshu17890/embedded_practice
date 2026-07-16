#include <stdio.h>
#include <stdint.h>

int main (){

    uint8_t REG = 0X00; // 8 bits 

printf("intial register :  0x%02X\n" , REG);

// set bit  3

REG |= (1  << 3);

printf("after set bit 3 : 0x%02x\n" , REG);

// check bit 3 

if(REG &(1<<3))
    printf("bit 3 is set\n");
else
   printf("bit 3 is clear\n");

// toggle bit 3 
REG ^= (1  << 3);
printf("bit 3 after toggle 0x%02x\n" , REG);

// Check Again
if (REG & (1 << 3))
    printf("Bit 3 is SET\n");
else
    printf("Bit 3 is CLEAR\n");


// set bit 5 
REG |= (1  << 5);
printf("after set bit 5 : 0x%02x\n" , REG);

//clear bit 5
REG &= ~(1  << 5);

printf("bit 5 after clear :0x%02x\n " , REG);

return 0; 
}
