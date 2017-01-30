#include <iostream>


using namespace std;
using std::cout;

int main()
{

cout<<"Hello: This is Bubble sort\n";
int a[4]={2,1,3,4};
int i;
cout<<"Array is: \n";
int temp;
for(int i=0;i<4;i++)
{

cout<<a[i]<<"\n";

}

for(i=0;i<4;i++)
{
if(a[i]>a[i+1])
{

temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
i++;
}
}
cout<<"Sorted array is: "<<"\n";

for(int i=0;i<4;i++)
{

cout<<a[i]<<"\n";

}


return 0;

}
