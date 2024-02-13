#include <iostream>
#include <string.h>
using namespace std;
int main() {
	void introinstructions();
	string caesarcipher();
	int option;
	cout << "Welcome to my password encrypter!" << endl;
	introinstructions();
	cin >> option;
	if (option == 1)
	{
		caesarcipher();
	}
	else
		return 0;
}

string caesarcipher() {
	int i;
	string password;
	string encryption;
	//this key will be used to base our encryption off of by choosing how far along the alphabet we will move each character
	int key; 
	cout << "Enter a key that will be used for the encryption" << endl;
	cin >> key;
	cout << "Enter the password for encrypting" << endl;
	cin >> password;
	for (i = 0; i < password.size(); i++)
	{
		encryption += (password[i] - 'A' + key)% 26 + 'A';
	}
	cout << "Your encrypted password is: " << encryption;
	return encryption;
}
void introinstructions() 
{
	cout << "To begin encryption process, press 1" << endl;
	cout << "Choose a methond for encription" << endl;
	cout << "Option 1: Caesar Cipher " << endl << "Option 2: RSA " << endl << "Option 3: DHK " << endl;
}