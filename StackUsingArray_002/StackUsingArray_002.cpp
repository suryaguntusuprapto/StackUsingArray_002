#include <iostream>
#include<string>

using namespace std;

class program {
private:
	string stack_array[5];
	int top;

public:
	program() {
		top = -1;
	}

	string push(string element) {
		if (top == 4) {
			cout << "Stack Full" << endl;
			return "";
		}
	}
};