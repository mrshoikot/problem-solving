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

    int c;
    cin>>c;

    for(int t=0;t<c;t++){
        double n,sum=0,temp,aboveAvg=0;
        double avg;
        vector<double> data;

        cin>>n;

        for(int i=0;i<n;i++){
            cin>>temp;
            sum += temp;
            data.push_back(temp);
        }

        avg = sum/n;

        for(double x:data){
            if(x>avg){
                aboveAvg++;
            }
        }
        cout<<fixed<<setprecision(3)<<(aboveAvg/n)*100<<"%"<<endl;

    }

    return 0;
}
