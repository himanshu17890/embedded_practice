//esign an LED controller with the following states:

//OFF ---> ON ---> BLINK ---> OFF ---> ...

#include <stdio.h>
#include <stdint.h>

typedef enum{
    led_off ,
    led_on,
    led_blink
}led_state;
led_state currentstate = led_off;

void delay(){

    for(volatile  int i = 0 ; i < 100000 ; i++);

}
int main (){
    while(1){
        switch(currentstate){
            case led_off:
            printf("\n=========================\n");
            printf("Current State : LED_OFF\n");
            printf("LED Status    : [ ] OFF\n");
            printf("=========================\n");

            printf("press enter to go to led on ..");
            getchar();

            currentstate = led_off;
            break;


            case led_on:

            printf("\nstate : led on\n");

            printf("LED Status    : [*] ON\n");

            printf("=========================\n");

            printf("press enter to blink ");
            getchar();

            currentstate =led_blink;
            break;


            case led_blink:
            printf("\nstate : led blink \n");
            
            for(int i = 0 ; i<5 ; i++){
                printf(" [*] led on\n");
                delay();

                printf(" [ ] led off\n");
                delay();
            }
             printf("\nBlinking Complete!\n");

            currentstate = led_off;
            break;

        }

    }
    return 0; 
}