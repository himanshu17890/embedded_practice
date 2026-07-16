#include <stdio.h>
#include <stdint.h> 

int main(){
    int led = 0;
    while(1){
        led =1 ;
        printf(" led is on\n");

        for( volatile long i = 0 ; i < 1000000 ; i++);
            led = 0; // 
            printf("led is of \n");
        for (volatile long i = 0; i < 100000000; i++);


        

    

    
    }
    return 0 ;
}
