#include <stdio.h>
#include <iostream>
//#include <conio>
//#include <stdio>
using namespace std;
using std::cout;
#include <string.h>
int main()
{

int a[]={0,1};
int i,j,n,temp,max,number;

cout<<"Enter a number of fib elements: \n";
cin>>number;
cout<<"\n";
i=0;
int first=0;
int second=1;
int third;
cout<<"Fibonacci series is: \n";
cout<<first<<"\n"<<second<<"\n";
for(i=0;i<number-2;i++)
{

third=first+second;
cout<<third<<"\n";
first=second;
second=third;

}



return 0;
}

