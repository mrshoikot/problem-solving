#include<iostream>
#include<string>
#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;

int diff(int a,int b){
    return a>b ? a-b : b-a;
}

int main(){

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int n;
    while(cin>>n){

        int prev,now,temp,c=1,t=1;
        if(n>1){
            vector<int> order;

            for(int i=0;i<n;i++){
                cin>>temp;
                if(i==0){
                    now = temp;
                }else{
                    prev = now;
                    now = temp;

                    order.push_back(diff(now,prev));
                }
            }

            if(order.size()==1){
                if(order[0] == 1){
                    cout<<"Jolly"<<endl;
                }else{
                    cout<<"Not jolly"<<endl;
                }
                continue;
            }

            sort(order.begin(), order.end());

            for(int i=0; i<order.size();i++){
                if(order[i]==c){
                    c++;
                }else{
                    t=0;
                }
            }

            if(t==1){
                cout<<"Jolly"<<endl;
            }else{
                cout<<"Not jolly"<<endl;
            }

        }else{
            for(int i=0;i<n;i++){
                cin>>temp;
            }
            cout<<"Jolly"<<endl;
        }
    }

    return 0;
}
