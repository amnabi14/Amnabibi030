#include <iostream>
using namespace std;
int main()
{
char repeat;
int initialPopulation, numberOfDays;
do
{
cout<<" Enter the initial size of population=";
cin>> initialPopulation;
cout<<"Enter the number of the days= ";
cin>>numberOfDays;
int f0 = 0;
int f1 = initialPopulation;
int f2 = f1 + f0;
for (int day = 1; day <= numberOfDays; day++)
{
if (day % 5 == 0)
{
f2 = f1 + f0;
f0 = f1;
f1 = f2;
}
}
cout<<" The number of pounds of crud after " << numberOfDays<<"days:" << f2<<endl;
cout<<" Enter 'y' or 'Y' to repeat ";
cin>>repeat;

} while (repeat == 'Y' || repeat == 'y');

return 0;
}
