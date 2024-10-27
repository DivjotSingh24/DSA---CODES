#include<iostream>
using namespace std;
int main(){
    int arr[] = {6,3,1,8,20,46,3,26,30,24};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp,i,j,k;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"The sorted array is";
    for(k=0;k<n;k++){
        cout<<arr[k]<<"\t";
    }
    return 0;
}