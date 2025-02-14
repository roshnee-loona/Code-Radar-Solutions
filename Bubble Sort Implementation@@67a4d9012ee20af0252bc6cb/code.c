#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int x = 0; x < n; x++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr, n);
    return 0;
}
bubbleSort(arr,n){
    int c;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++)
        if(arr[j]>arr[j+1]){
            c = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = c;
        }
    }
    for(int k = 0; k<n;k++){
        printf("%d",arr[k]);
    }
}