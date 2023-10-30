// Input a string of even length and reverse the second half of the string.
// Input : str = "abcdefgh"
// Output : abcdhgfe

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    cout<<"enter the string:";
    string str;
    cin>>str;
    int n=str.length();
    reverse(str.begin()+n/2,str.end());
    cout<<str;
}