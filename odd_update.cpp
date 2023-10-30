// Input a string of size n and update all the odd positions in the string to character ‘#’. Consider
// 0-based indexing.
// Input : str = "Pbwcshkuiglhlds"
// Output : "P#w#s#k#i#l#l#s"

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string str;
    cout<<"enter the string:";
    cin>>str;
    for(int i=0;i<str.length();i++){
        if(i%2!=0){
            str[i]='#';

        }
    }
    cout<<str;
}