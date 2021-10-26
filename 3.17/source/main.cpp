#include <iostream>
using namespace std;

int main() {
	float a, b, c, d, e;
	while(1){
		cout << "\nEnter account number(-1 to end)¡G";
		cin >> a;
		if (a == -1) break;
		else
		{
			cout << "Enter begining balance¡G";
			cin >> b;
			cout << "Enter total charges¡G";
			cin >> c;
			cout << "Enter total credits¡G";
			cin >> d;
			cout << "Enter credit limit¡G";
			cin >> e;
			cout << "Account¡G" << a<<"\nCredit limit¡G"<<e<<"\nBalance¡G"<<b+d;
			if ((b + d) > e) cout << "\nCredit Limit Exceeded.\n";
			else cout << "\n";
		}
	}
	return 0;
}