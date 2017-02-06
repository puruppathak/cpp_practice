//This problem can also be solved with a hashmap
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
using std::cout;

int main()
{

int a[200]={}; // Array initialized here
int n,i,j;
cout<<"Enter number of elements: \n";
cin>>n;
cout<<"Enter array elements: \n";
for(i=0;i<n;i++)
{

cin>>a[i];

}

cout<<"Array entered is: \n";

for(i=0;i<n;i++)
{

cout<<a[i]<<"\n";

}
cout<<"Unique elements in this array are: \n";
for(i=0;i<n;i++)
{
  for(j=0;j<i;j++)
{

   if(a[i]==a[j])
   {

    break;

   }
}
if(i==j)
{

  cout<<a[i]<<"\n";
}
}
return 0;
}
