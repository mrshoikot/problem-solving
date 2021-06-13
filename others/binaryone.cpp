#include<iostream>
#include<string>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

// Function for counting total quantity of 1 in binary
int OneCount(int n){
    int count=0;
    while(n!=0){
        if(n%2==1){
            count++;
        }
        n /= 2;
    }
    return count;
}

int main(){

    int n, sum=0;
    cin>>n;

    // converting "111111" formatted binary to decimal
    for(int i=0; i<OneCount(n); i++){
        sum += pow(2, i);
    }

    cout<<sum;

    return 0;
}
