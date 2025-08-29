#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

struct node {
    int freq;
    char data;
    struct node *left;
    struct node *right;
};

void decode_huff(struct node* r, char* s){
    struct node* c=r;
    int n=strlen(s);
    for(int i=0;i<n;i++){
        c=s[i]=='0'?c->left:c->right;
        if(!c->left&&!c->right){
            printf("%c",c->data);
            c=r;
        }
    }
}

int main(){
    int ch;
    while((ch=getchar())!=EOF){
        putchar(ch);
    }
    return 0;
}

