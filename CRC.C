//cyclic redundancy check  

#include <stdio.h>
#include <stdint.h>

//function to calculate crc  
uint8_t crc8(uint8_t *data, int len){
    uint8_t crc = 0 ;

    while(len--){

        // xor current byte with crc 
        crc ^= *data++;

        for (int i =0 ; i < 8 ; i++){

            if(crc & 0x80){
                crc = (crc << 1)^0x07;
            }
            else{
                crc <<= 1 ;

            }

        }
    }

    return crc;
}

int main (){
    // sample data 

    uint8_t data [] = {0x10, 0x20, 0x30, 0x40};

    int len  = sizeof(data) / sizeof(data[0]);

    printf("data : ");

    for(int i = 0 ; i < len ; i++){
        printf("0x%02x" , data[i]);
    }

    printf("\n");

    uint8_t result = crc8(data , len );
    printf("crc-8 =0x%02X " , result);

    return 0;

}