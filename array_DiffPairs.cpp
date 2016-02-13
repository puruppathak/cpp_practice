#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
using std::cout;
#include <cstdlib>

int main()
{

	int a[]={3,2,1};
    int i,j,diff,counter;

    cout<<"Enter a difference value to find the pairs in an array: \n";
    cin>>diff;

    for(i=0;i<3;i++)
    {

       for(j=0;j<3;j++)
       {

        if(abs(a[i]-a[j])==diff)
          {

            counter++;
        	cout<<"Pair is: \t"<<"("<<a[i]<<","<<a[j]<<")";
            cout<<"\n";

        }

       }

    }
    cout<<"No of pairs are: "<<counter<<"\n";



}
