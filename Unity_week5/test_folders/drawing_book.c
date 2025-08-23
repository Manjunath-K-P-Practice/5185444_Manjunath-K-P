#include"header.h"
int pageCount(int n, int p) {
    int f=p/2;
    int b=(n/2)-f;

return f<b?f:b;
}
