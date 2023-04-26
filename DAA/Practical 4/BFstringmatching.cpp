// BF string Matching Algorithm for find the string is present in given string or not

#include <bits/stdc++.h>
using namespace std;

int check(string str,string pattern)
{
    int l1 = str.size();
    int l2 = pattern.size();
    int j = 0;

     for (int i=0;i<=l1-l2;i++) {
        int j;
        for (j = 0; j < l2; j++)
            if (str[i + j] != pattern[j])
                break;
  
        if (j==l2) return 1;
    }
    return 0;
}

int main(){
    cout<<"Enter string : ";
    string str;cin>>str;

    cout<<"Enter pattern to search :";
    string pattern;
    cin>>pattern;

    bool flag=check(str,pattern);

    if(flag==1){
        cout<<"Pattern is present in string ";
    }
    else{
        cout<<"Pattern is not present in string ";
    }
}


// OUTPUT :

// Enter string : ABSFAST
// Enter pattern to search :FAST
// Pattern is present in string 