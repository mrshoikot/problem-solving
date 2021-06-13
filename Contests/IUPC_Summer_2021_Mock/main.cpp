#include<iostream>
#include<cmath>
#include <iomanip>
#include <array>
# define PI           acos(-1)

using namespace std;


void print(int* arr, int l){
    for(int i=0;i<l;i++){
        cout<<arr[i]<<" ";
    }
}


int themin(int k, int* arr, int l){

    int minValue = arr[k];
    int minIndex = k;

    for(int i=k+1;i<l;i++){
        if(minValue>arr[i]){
            minValue = arr[i];
            minIndex = i;
        }
    }

    return minIndex;

}

void swap(int* arr, int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}


void sort(int* arr, int l){

    for(int i=0;i<l;i++){
        swap(arr, i, themin(i, arr, l));
    }

}






int main(){

    int arr[] = {10,2,3,0};
    int l = sizeof(arr)/sizeof(arr[0]);
    sort(arr, l);
    return 0;
}
