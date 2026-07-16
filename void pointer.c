
#include <stdio.h>
int main (){
    int a =5 ;
    double b = 3.233;
    void*vp; // void pointer 
    vp = &a;
    printf("\n a = %d" , *((int*)vp));
    vp = &b;
    printf("\n b = %f", *((double*)vp));
    return 0 ;

} 

