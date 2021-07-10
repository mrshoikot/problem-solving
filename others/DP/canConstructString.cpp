#include<iostream>
#include<vector>
#include<map>
#include <ctime>


using namespace std;

int isix(string base, string sub){
    if(base.length() < sub.length()) return 0;

    string prepart = base.substr(0, sub.length());
    string postpart = base.substr(base.length()-sub.length(), sub.length());
    
    if(prepart.compare(sub) == 0){
        return 1;
    }else if(postpart.compare(sub) == 0){
        return -1;
    }else{
        return 0;
    }

}

map<string, bool> data;

bool canConstruct(string base, vector<string> words){
    if (base.length() == 0) return true;

    for(string word:words){
        int test = isix(base, word);
        string cut;
        bool value;

        if(test == 1){
            cut = base.substr(word.length(), base.length()-word.length());
            if(data.find(cut) == data.end()){
                value = canConstruct(cut, words);
                data[cut] = value;
                if(value) return true;
            }else{
                return data[cut];
            }
        }else if(test == -1){
            cut = base.substr(0, base.length()-word.length());
            if(data.find(cut) == data.end()){
                value = canConstruct(cut, words);
                data[cut] = value;
                if(value) return true;
            }else{
                return data[cut];
            }
        }
    }

    return false;

}


int main(){

    clock_t tStart = clock();
    
    string base = "eeeeeeeeeeeeeeeeeeeeeeeeeeeeee";
    vector<string> words = {"e", "ee", "eee", "eeee", "eeeeee"};

    cout<<canConstruct(base, words);

    cout<<endl;
    printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);

}