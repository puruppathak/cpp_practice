#include <iostream>
//#include <conio>
//#include <stdio>
using namespace std;
using std::cout;
#include <string.h>

int main()
{
    char str1[10];
    int temp;
    int i;
    unsigned long j;
    //char str1[4] = "abc";
    cout<<"Enter a string\n";
    cin>>str1;
    cout<<"Reversed string is:\n";
    i=0;
    j=strlen(str1) - 1;
    
    while(i<j)
    {
        
        temp=str1[i];
        str1[i]=str1[j];
        str1[j]=temp;
        i++;
        j--;
        
        
    }
    
    
    
    
    
    cout<<str1<<"\n";
    return 0;
}
