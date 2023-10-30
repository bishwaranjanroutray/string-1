// Input a string of length n and count all the consonants in the given string.
// Input : "pwians"
// Output : 4

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string st="bishwa";
    int count=0;
    int i=0;
    while(st[i]!='\0'){
        if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u'){
            count++;
        }
        i++;
    }
    int n=st.length();
    cout<<n-count;
}