#include<iostream>
using namespace std;

void DesignerPDF(int list[],string word){
    int i,max=1;
    for(i=0;i<word.length();i++){
        if(list[word[i]-'a']>max){
            max = list[word[i]-'a'];
        }
    }
    cout << max*word.length() << endl;
}

int main(){
    int i,list[26];
    for(i=0;i<26;i++){
        cin >> list[i];
    }
    string word;
    cin >> word;
    DesignerPDF(list,word);
    return 0;
}

