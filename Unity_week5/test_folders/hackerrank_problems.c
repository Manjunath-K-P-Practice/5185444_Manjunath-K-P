#include"header.h"


int towerBreakers(int n, int m) {
if(m==1) return 2;
if(n%2==0) return 2;
return 1;
}

char* caesarCipher(const char* s, int k) {
    int len = strlen(s);
    char* result = (char*)malloc(len + 1); 
    if (!result) return NULL;

    k = k % 26; 
    for (int i = 0; i < len; i++) {
        if (isalpha(s[i])) {
            if (isupper(s[i])) {
                result[i] = 'A' + ((s[i] - 'A' + k) % 26);
            } else {
                result[i] = 'a' + ((s[i] - 'a' + k) % 26);
            }
        } else {
            result[i] = s[i];
        }
    }
    result[len] = '\0';
    return result;
}

char* isBalanced(char* s){
    int len=strlen(s);
    char* st=malloc(len);
    int top=-1;

    for(int i=0;i<len;i++){
        char ch=s[i];
        if(ch=='('||ch=='{'||ch=='['){
            st[++top]=ch;
        }else{
            if(top==-1){
                free(st);
                return "NO";
            }
            char open=st[top--];
            if((ch==')'&&open!='(')||
               (ch=='}'&&open!='{')||
               (ch==']'&&open!='[')){
                free(st);
                return "NO";
            }
        }
    }

    if(top==-1){
        free(st);
        return "YES";
    }
    free(st);
    return "NO";
}