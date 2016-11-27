#include <iostream> 
#include "calculator.hpp"
using namespace std;

int main() {
	int a, b;
	cout << "Enter a,b:";
	cin >>a;
	cin >>b;
	cout << "Sum:" << sum(a, b) << endl;
	cout << "Dev:" << dev(a, b) << endl;
	cout << "Mult:" << mult(a, b) << endl;
	try {
		cout <<"Sub:"<<sub(a,b)<<endl;
	}
	catch (char *Err)
	{
		cout << Err << endl;
	}
   try {
		cout << "Pow a to b: " << pow(a, b) << endl;
	}
	catch (int i)
	{
		cout << "Pow a to b:" << i << endl;
	}
	cout << "Sqrt a: " << sqrta(a) << endl;
	cout << "Sqrt b: " << sqrtb(b) << endl;

	return 0;

}
