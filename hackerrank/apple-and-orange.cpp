#include<iostream>
#include<map>
#include<vector>

using namespace std;


void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int x = 0;
    int y = 0;

    for(int d : apples){
        // cout<<d;
        if(a+d >= s && a+d<=t) x++;
    }
    for(int d : oranges){
        if(b+d <= t && b+d>=s) y++;
    }

    cout << x <<endl;
    cout << y <<endl;
}


int main(){

    freopen("input.txt", "r", stdin);

    vector<int> apples;
    vector<int> oranges;

    int s,t,a,b,x,y;
    int temp;
    cin>>s>>t>>a>>b>>x>>y;

    for (int i=0;i<x;i++){
        cin>>temp;
        apples.push_back(temp);
    }


    for (int i=0;i<y;i++){
        cin>>temp;
        oranges.push_back(temp);
    }

    countApplesAndOranges(s, t, a, b, apples, oranges);

    


    return 0;
}