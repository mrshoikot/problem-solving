#include<iostream>
#include<map>
#include<vector>

using namespace std;


int divisibleSumPairs(int n, int k, vector<int> ar) {
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if ((ar[i]+ar[j])%k == 0) count++;
        }
    }
    return count;
}


int main(){

    freopen("input.txt", "r", stdin);

    vector<int> ar;
    int temp;

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>temp;
        ar.push_back(temp);
    }

    cout<<divisibleSumPairs(n,k,ar);

    


    return 0;
}