#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

	int num1 = 0;
	int num2 = 0;

	cout << "Insira num1: ";
	cin >> num1;

	cout << "Insira num2: ";
	cin >> num2;

	if(num1>num2){
		cout << "num1>num2;\n";
	} else {
		cout << "num2>num1;\n";
	}


	return 0;
}