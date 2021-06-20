#include<iostream>

using namespace std;


void merge(int arr[], int a, int m, int b){
    int n1 = m-a+1;
    int n2 = b-m;

    int t1[n1], t2[n2];

    for(int i=0;i<n1;i++){
        t1[i] = arr[a+i];
    }
    for(int i=0;i<n2;i++){
        t2[i] = arr[m+i+1];
    }

    int i=0;
    int j=0;
    int k=a;

    while(i<n1 && j<n2){
        if(t1[i]<t2[j]){
            arr[k] = t1[i];
            i++;
        }else{
            arr[k] = t2[j];
            j++;
        }
        k++;
    }


    while(i<n1){
        arr[k] = t1[i];
        k++;
        i++;
    }
    while(j<n2){
        arr[k] = t2[j];
        k++;
        j++;
    }



}


void devide(int arr[], int a, int b){

    if(b<=a){
        return;
    }

    int mid = a+(b-a)/2;
    
    devide(arr, a, mid);
    devide(arr, mid+1, b);
    merge(arr, a, mid, b);


    for(int i=a; i<=b;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    

}

int main(){
    int arr[] = {8,7,6,5,4,3,2};
    int len = sizeof(arr)/sizeof(arr[0]);
    devide(arr,0,len-1);
}