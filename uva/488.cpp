#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
#include<vector>
#include <iomanip>

using namespace std;


int main(){

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int T;
    cin>>T;

    for(int t=0;t<T;t++){
        int a,w;
        cin>>a>>w;

        for(int i=0;i<w;i++){

            int count=1, shouldReduce=0;

            while(count != 0){
                for(int k=0;k<count;k++){
                    cout<<count;
                }
                cout<<endl;
                if(count==a){
                    shouldReduce = 1;
                }
                if(shouldReduce){
                    count--;
                }else{
                    count++;
                }
            }
            
            if(t+1 != T || i+1 != w)
                cout<<endl;
        }
    }
    

    return 0;
}
