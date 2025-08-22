#include"header.h"
#include <stdlib.h>
int diagonalDifference(int arr_rows, int arr_columns, int arr[arr_rows][arr_columns]) {
int row=0,row2=0;
int n=arr_rows;
for(int i=0;i<n;i++){
    row =row+arr[i][i];
    row2=row2+arr[i][n-i-1];

}
return abs(row-row2);
}
