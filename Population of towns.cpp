#include<iostream>

using namespace std;

int pA, pB;
double g_RATEa, g_RATEb, finalA, finalB, gA, gB;

int main()

{
cout<< "Enter population of  A: ";
cin>> pA;
cout<< "Enter population of  B: ";
cin>> pB;
if (pA < pB)
{
cout<< "Enter growth rate of the town A. ";
cin>> g_RATEa;
cout<< "Growth rate of town B: ";
cin>> g_RATEb;
if (g_RATEa <= g_RATEb)
{
cout<< "input invalid. ";
return 1;
}
else if (g_RATEa > g_RATEb)
{

while (finalA > finalB)
finalA = ((g_RATEa / 100) * (pA)) + pA;
finalB = ((g_RATEb / 100) * (pB)) + pB;
cout<< "Town A: "<< finalA <<endl;
cout<< "Town B: "<< finalB <<endl;
}
}
else if (pA >= pB)
cout<< " input invalid. ";
return 0;
}
