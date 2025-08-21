#include"header.h"
#include"header.h"
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
char* pangrams(char* s) {
int arr[26];
for(int i=0;i<26;i++){
    arr[i]=0;
}


printf("\n");
for(int i=0;i<strlen(s);i++){
    if(isalpha(s[i])){
    int ind=tolower(s[i])-97;
    arr[ind]=1;}
}

for(int i=0;i<26;i++){
    if(arr[i]==0){
        return "not pangram";
    }
}
return "pangram";
}
