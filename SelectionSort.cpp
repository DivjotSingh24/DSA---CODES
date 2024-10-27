#include<iostream>
using namespace std;
int main(){
    int arr[] = {6,3,1,8,20,46,3,26,30,24};
    // int n= sizeof(arr);
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp,i,j,k;
    for(i=0; i<n-1; i++){
        int min=i;
        for(j=i+1; j<n; j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=i){
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
    cout<<"the sorted array is";
    for(k=0;k<n;k++){
        cout<<arr[k]<<"\t";
    }
    return 0;
}