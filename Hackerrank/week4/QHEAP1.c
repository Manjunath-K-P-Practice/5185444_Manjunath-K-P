#include <stdio.h>
#include <stdlib.h>

int heap[100000];
int heap_size=0;

void swap(int i,int j){
    int tmp=heap[i];
    heap[i]=heap[j];
    heap[j]=tmp;
}

void heapify_up(int idx){
    while(idx>0){
        int parent=(idx-1)/2;
        if(heap[parent]>heap[idx]){
            swap(idx,parent);
            idx=parent;
        }else break;
    }
}

void heapify_down(int idx){
    while(1){
        int left=2*idx+1;
        int right=2*idx+2;
        int smallest=idx;

        if(left<heap_size&&heap[left]<heap[smallest]) smallest=left;
        if(right<heap_size&&heap[right]<heap[smallest]) smallest=right;

        if(smallest!=idx){
            swap(idx,smallest);
            idx=smallest;
        }else break;
    }
}

void insert(int val){
    heap[heap_size]=val;
    heap_size++;
    heapify_up(heap_size-1);
}

int extract_min(){
    int root=heap[0];
    heap[0]=heap[heap_size-1];
    heap_size--;
    heapify_down(0);
    return root;
}

void remove_val(int val){
    for(int i=0;i<heap_size;i++){
        if(heap[i]==val){
            heap[i]=heap[heap_size-1];
            heap_size--;
            heapify_up(i);
            heapify_down(i);
            break;
        }
    }
}

int main(){
    int q;
    scanf("%d",&q);
    for(int i=0;i<q;i++){
        int op;
        scanf("%d",&op);
        if(op==1){
            int n;
            scanf("%d",&n);
            insert(n);
        }else if(op==2){
            int n;
            scanf("%d",&n);
            remove_val(n);
        }else{
            printf("%d\n",heap[0]);
        }
    }
    return 0;
}
