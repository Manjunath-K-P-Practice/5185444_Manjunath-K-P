#include "header.h"

int isp2(long n){
    return (n && !(n&(n-1)));
 }
 long red( long n) {
    n |= (n >> 1);
    n |= (n >> 2);
    n |= (n >> 4);
    n |= (n >> 8);
    n |= (n >> 16);
    n |= (n >> 32);
    return n - (n >> 1);
}

char* counterGame(long n) {
int turn=0;
while(n>1){
    if(isp2(n)){
        n=n/2;
       
    }
    else{
         n=n-red(n);
        
        
        }
        turn^=1;
    }
    return (turn==1)?"Louise":"Richard";
}

