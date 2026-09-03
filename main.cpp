#include <iostream>
#include <string>

using namespace std;
int main()
{
	int hisAge = 19;

	string hisName;

	cout << " What is your name? " << endl;
	getline(cin, hisName);

	cout << " Hello " << hisName << "!" << endl;

	cout << " How old are you? " << hisName << endl;

	cin >> hisAge;

	cout << " Wow! " << hisName << " you are " << hisAge << " years old!" << endl;
	return 0;
}

