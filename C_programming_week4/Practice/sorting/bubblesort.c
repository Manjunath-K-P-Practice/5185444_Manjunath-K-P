#include <stdio.h>


void bubblesort(int a[],int n){

for(int i=0;i<n-1;i++)

{

int s=0;
    for(int j=0;j<n-i-1;j++)
           {
            if(a[j]>a[j+1]){
             int temp=a[i];
             a[j]=a[j+1];
             a[j+1]=temp;
             s=1;
           }
}
if(s==0){
  break;
        }
}

}

int main(){

int a={5,8,6,4,2};
bubblesort(a,5);

return 0;
}
