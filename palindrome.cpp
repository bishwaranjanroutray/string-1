#include<iostream>
using namespace std;

bool check(string &str){
    int i=0;
    int j=str.size()-1;
    while(i<=j){
        if(str[i]!=str[j]) return false;
      
            i++;
            j--;
        
    }
}

int main(){
    cout<<"enter the string";
    string str;
    cin>>str;
    cout << (check(str) ? "YES" : "NO");
}