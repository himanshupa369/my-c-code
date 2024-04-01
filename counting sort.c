// counting sort//
#include <stdio.h>
void countingSort(int arr[],int n){
    int output[10];
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max)
        max=arr[i];
    }
    int count[10];
    for(int i=0;i<=max;i++){
        count[i]=0;
    }
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    for(int i=1;i<=max;i++)
    count[i]+=count[i-1];
    for(int i=n-1;i>=0;i--){
        output[count[arr[i]]-1]=arr[i];
        count[arr[i]]--;
    }
    for (int i = 0; i <n; i++) {
    arr[i] = output[i];
  }
}
void printArray(int arr[],int n){
    printf("sorted array after counting sort==\n");
    for(int i=0;i<n;i++)
    printf("%d\t",arr[i]);
}
int main() {
    // Write C code here
    int arr[]={3,6,3,2,3,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    countingSort(arr,n);
    printArray(arr,n);
    return 0;
}