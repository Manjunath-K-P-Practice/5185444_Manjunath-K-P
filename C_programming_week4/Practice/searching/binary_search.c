#include <stdio.h>

int binary_search(int a[],int n,int value){
	int low=0;
	int high =n-1;
	while(low <= high){
	 int mid=low+(high-low)/2;
	 if(a[mid]==value)
         {
          return mid;
	 }
	else if(a[mid<value)
 	   low=mid+1;
	els
	    high=mid-1;
	}
return -1;

}

int main(){

int a[]={1,3,5,6,7,2};
int n=sizeof(a)/sizeof(a[0]);
int value=5;
int index=binary_search(a,n,value);

printf("the value is in index no :%d",index);

return 0;
}
