#include"header.h"

int lonelyinteger(int a_count, int* a) {
int r=a[0];
for(int i=1;i<a_count;i++){
    r=r^a[i];
}
return r;
}
