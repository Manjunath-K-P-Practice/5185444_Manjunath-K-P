#include <stdio.h>

void cycleSort(int a[],int n){
    for(int cs=0;cs<=n-2;cs++){
        int itm=a[cs];
        int p=cs;

        for(int i=cs+1;i<n;i++)
            if(a[i]<itm)
                p++;

        if(p==cs)
            continue;

        while(itm==a[p])
            p++;

        if(p!=cs){
            int t=itm;
            itm=a[p];
            a[p]=t;
        }

        while(p!=cs){
            p=cs;
            for(int i=cs+1;i<n;i++)
                if(a[i]<itm)
                    p++;

            while(itm==a[p])
                p++;

            if(itm!=a[p]){
                int t=itm;
                itm=a[p];
                a[p]=t;
            }
        }
    }
}

int main(){
    int a[]={20,40,50,10,30};
    int n=sizeof(a)/sizeof(a[0]);
    cycleSort(a,n);
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
