#include<iostream>

using namespace std;


void bubbble(int arr[], int l){
    
    for(int i=0;i<l;i++){
        for(int j=i;j<l;j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

}


int main(){
    int arr[] = {8,7,6,5,4,3,2};
    int len = sizeof(arr)/sizeof(arr[0]);
    bubbble(arr, len);
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
}