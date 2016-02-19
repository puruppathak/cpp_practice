#include <iostream>
using namespace std;
using std::cout;


bool checkdup(int a[],int n)   // Function for checking duplicate elements in an array. 
{
 int i,j;


	for( i = 0; i < n; i++ )
 { //cout<<"In first for loop";
  for( j = i+1; j < n; j++ )
  {
   if( a[i] == a[j] )
    return true;
//cout<<"true";
  }
 }
 return false;

}


int main()
{


int a[]={2,1,3,5};
int i,n,j;
cout<<"Array is: \n";
int temp;
for(int i=0;i<4;i++)
{

cout<<a[i]<<"\n";

}

bool result=checkdup(a,4);
cout<<"Result for duplicates is(1=Yes,0=No): "<<result<<"\n";

return 0;

}

