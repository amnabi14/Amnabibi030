#include <iostream>
using namespace std;
int main()
{
int n, i;
bool isPrime = true;

cout << "Enter positive integer: ";
cin >> n;

for(i = 2; i <= n / 2; ++i)
{
if(n % i == 0)
{
isPrime = false;
}
}
if (isPrime)
cout << "This is a prime number";
else
cout << "This is not a prime number";

return 0;
}
