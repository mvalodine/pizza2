#include <iostream>

/*
2
Large: 0 Medium: 0 Small: 2
The total area is 226.194 square inches.
The area per person is 113.097 square inches.
What percent tip do you want to leave? (0-100) 15
The total cost will be 17 dollars.
Press any key to continue . . .
// Here I entered that 2 people were coming, and then I'd pay a 15% tip.
7
Large: 1 Medium: 0 Small: 0
The total area is 314.159 square inches.
The area per person is 44.8799 square inches.
What percent tip do you want to leave? (0-100) 10
The total cost will be 16 dollars.
Press any key to continue . . .
//Here I entered that 7 people were coming, and that I'd pay a 10% tip.
*/

using namespace  std;

int main() {
	int a;
	cout << "How many guests? " << endl;
	cin >>a;
	cout << "Large: " <<a/7 <<" ";
	int b = a % 7;
	cout << "Medium: " << b/3 <<" ";
	int c = b % 3;
	cout << "Small: " << c <<" \n";
const double areaofa = 100*3.14159; //inches
const double areaofb = 8*8*3.14159; 
const double areaofc = 6*6*3.14159;
double totalarea = a/7*areaofa+b/3*areaofb+c*areaofc;
cout << "The total area is " << totalarea <<" square inches.\n";
double areaperperson = totalarea/a;
cout << "The area per person is " << areaperperson <<" square inches.\n";
const double priceofa = 14.68;
const double priceofb = 11.48;
const double priceofc = 7.28;
double initialcost = a/7*priceofa+b/3*priceofb+c*priceofc;
int percenttip;
	cout << "What percent tip do you want to leave? (0-100) ";
	cin >> percenttip;
	double amounttip = initialcost+initialcost*(percenttip/100.0);
	int finalcost = amounttip + 0.5;
	cout << "The total cost will be " << finalcost << " dollars.\n";
system ("pause");
return 0;
}
