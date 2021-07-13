#include<iostream>
#include<map>
#include<vector>

using namespace std;


vector<int> breakingRecords(vector<int> scores) {
    vector<int> result = {0,0};
    long long int min = scores[0];
    long long int max = scores[0];

    for(int i:scores){
        if (i<min){
            min = i;
            result[1]++;
        }
        if(i>max){
            max = i;
            result[0]++;
        }
    }

    return result;
}


int main(){

    freopen("input.txt", "r", stdin);

    vector<int> records;

    int n;
    int temp;
    cin>>n;

    for (int i=0;i<n;i++){
        cin>>temp;
        records.push_back(temp);
    }


    for(int i:breakingRecords(records)){
        cout<<i<<endl;
    }

    


    return 0;
}