#include <iostream>
using namespace std;

int inputNumber()
{
	int iNumber;
	cin >> iNumber;
	return iNumber;
}

int main()
{
	int Card;
	cout << "Do the resident have security card? Press 1 if yes and 0 if no ""\n";
	Card = inputNumber();
	bool(haveCard) = (Card == 1);

	if (haveCard) {
		
		int pin();
		{
			int Pin;
			cout << "What is the pin number?";
			Pin = inputNumber();
			bool(PinTrue) = (Pin == 1234);

			if (PinTrue) {
				cout << "You can enter the apartment";
			}
			else {
				cout << "You can't enter the apartment";
			}
		}

	}
	else{
		cout << "You can't enter the apartment";
	}

return 0;
}
