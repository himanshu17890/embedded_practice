//Swap Two Numbers Without a Temporary Variable.

#include <stdio.h>
void swap(int *a, int *b){
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
int main(){
    int x = 10 ;
    int y = 20;

    printf("before swapping : x = %d , y=%d\n",x,y);

    swap(&x,&y);
    printf("after swapping : x = %d , y=%d\n",x,y);


 
}