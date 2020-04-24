#include <iostream>

using namespace std;
int main()
{
float weight,cost;
int option;

{
cout<<"enter the weight of pack="<<endl;
cin>>weight;
{
cout<<"delivery within city press 1or 2 anywhere in the country=";
cin>>option;
}
while (option<1||option>2);
if (option==1)
cost=(weight*2)+20;
else
cost=(weight*2)+40;
cout<<"total cost of pack="<<cost<<endl;
}
return 0;
}
