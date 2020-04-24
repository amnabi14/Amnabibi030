#include <iostream>
using namespace std;
int main()

{
int i,n;
double r,guess;
cout<< "Enter the number whose square root is to be found: ";
cin>>n;
guess = n/2.00;
for (i=1;i<=5;i++) 
{
r = n / guess;
guess = (guess + r) / 2;
}
cout<< "The square root of " << n << " is said to be " << guess << endl << endl;
return 0;
}
