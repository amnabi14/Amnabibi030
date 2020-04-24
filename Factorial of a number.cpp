#include <iostream>
using namespace std;
int main()

{
int number,factorial=1;
cout << "Enter Number whose factorial is to be found: ";
cin>>number;
for(int i=1;i<=number;i++)
{
factorial=factorial*i;
cout<<"Factorial of the number will be: " << factorial << endl;
}
return 0;
}
