#include <stdio.h>
#include <iostream>
//#include <conio>
//#include <stdio>
using namespace std;
using std::cout;
#include <string.h>
int main()
{

//int a[]={0,1,2,3,4,5};
int i,j,n,max,number;

cout<<"Enter a number \n";
cin>>number;
if(number==1)
{

  cout<<"Number is a power of 2"<<"\t";
}

else
{


while((number%2==0) && (number/2!=1))
{

number=number/2;


}
if (number==2)
cout<<"Number is a power of 2"<<"\t";
else
cout<<"Not a power of 2.\t";

}
/*for(i=0;i<5;i++)
{

if(a[i]>a[i+1])
  max=a[i];

else
{
  max=a[i+1];
}


}
cout<<"Max is: "<<max<<"\n";
*/
return 0;
}

