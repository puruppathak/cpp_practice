#include <iostream>
using namespace std;
using std::cout;
#include <math.h>

int main()
{
int x1=3;
int x2=5;
int diff;

cout<<"Swapping nos without using temp variable: \n";
cout<<"Numbers before swapping: \n";
cout<<"First no is: "<<x1<<"\n";
cout<<"Second no is: "<<x2<<"\n";

if(x1>x2)
{


	diff=x1-x2;
	x1=x1-diff;
	x2=x2+diff;
}
else
{

diff=x2-x1;

	x2=x2-diff;
	x1=x1+diff;

}

cout<<"Swapping nos: \n";
cout<<"Now, First no is: "<<x1<<"\n";
cout<<"Now, Second no is: "<<x2<<"\n";
return 0;
}
