#include "header.h"

#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int issin(int x){
    if(x%10==x){
        return 0;
    }
    return 1;
}
int issum(long nu){
    long sum=0;
     while (nu > 0) {
        sum += nu % 10; 
        nu /= 10;       
    }
    return sum;
    
}
int superDigit(char* n, int k) {
int sum = 0;
long long nu=0;
for(int i=0;i<strlen(n);i++){
    if(isdigit(n[i])){
    nu=(nu+((int)n[i]-'0'))%9;}
}

    sum=(nu * (k % 9)) % 9;
    if (sum == 0) sum = 9;
     while(issin(sum)){
       sum= issum(sum);
    }
    
    return sum;
}
