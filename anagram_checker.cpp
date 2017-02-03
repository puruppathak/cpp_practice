#include <iostream>
#include <algorithm> 
#include <stdio.h>
using namespace std;
using std::cout;
#include <string.h>


int main()
{

    string str1;
    string str2;
    
    cout<<"Enter first string: \n";
    cin>>str1;
    cout<<"Enter second string: \n";
    cin>>str2;
    if(str1.length()!=str2.length())
    {
        cout<<"Not anagrams \n";
        return 0;
    }
   // cout<<len1;
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    int ret = strcmp(str1.c_str(), str2.c_str());      // converting to C style strings using c_str() function
    if(ret==0)
    {
    	cout<<"Strings are anagrams \n";
    }
    else
    {

    	cout<<"String are not anagrams \n";
    }
    
    
    return 0;
}
