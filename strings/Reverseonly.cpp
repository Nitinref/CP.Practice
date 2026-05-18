#include <bits/stdc++.h>
using namespace std;

bool isAlpha(char ch)
{
    if ((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
    {
        return true;
    }
    return false;
}



int main(){
    
    string s;
    cin>>s;
    int l = 0;
    int h = s.size() - 1;
    while (l <= h)
    {
        if (!isAlpha(s[l]))
        {
            l++;
        }
        if (!isAlpha(s[h]))
        {
            h--;
        }
        else
        {
            swap(s[l], s[h]);
            l++ ,h--;
        }
    }

    for(auto i:s){
        cout<<i;
    }
}
