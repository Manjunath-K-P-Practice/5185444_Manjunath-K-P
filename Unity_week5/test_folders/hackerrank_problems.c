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

