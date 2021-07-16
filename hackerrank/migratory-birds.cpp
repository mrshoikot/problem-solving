#include <bits/stdc++.h>

using namespace std;


int migratoryBirds(vector<int> arr) {
    vector<int> data(6, 0);

    for (int i:arr){
        data[i]++;
    }

    int result = 0;
    int index = 0;

    for(int i=0;i<6;i++){
        if(result<data[i]){
            result = data[i];
            index = i;
        }
    }

    return index;
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

    cout<<migratoryBirds(ar);

    


    return 0;
}