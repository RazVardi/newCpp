#include<iostream>
#include<string>
using namespace std;
int main()
{
	string secretMSG{}, ABC = { "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz" }, EncryptMSG{}, DecryptMSG{},
		key = { "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm" };
	char aSmall = 'a', aBig = 'A', zSmall = 'z', zBig = 'Z';
	cout << "Enter your secret message: " << endl;
	getline(cin, secretMSG);
	cout << "\nencrypting_message" << endl;
	for (int i = 0; i < secretMSG.length(); i++)
	{
		size_t place = ABC.find(secretMSG[i]);
		cout << place << endl;
		if (secretMSG[i] >= aSmall || secretMSG[i] <= zSmall || secretMSG[i] > aBig || secretMSG[i] <= zBig)
		{
			char check{ key.at(place) };
			EncryptMSG += check;
		}
		else
		{
			EncryptMSG += secretMSG.at(i);
		}

	}

	cout << "\nEncryped message is: " << EncryptMSG << endl;

	cout << "\ndencrypting_message" << endl;
	for (int i = 0; i < secretMSG.length(); i++)
	{
		size_t place = ABC.find(secretMSG[i]);
		cout << place << endl;
		if (secretMSG[i] >= aSmall || secretMSG[i] <= zSmall || secretMSG[i] > aBig || secretMSG[i] <= zBig)
		{
			char check{ key.at(place) };
			DecryptMSG += check;
		}
		else
		{
			DecryptMSG += secretMSG.at(i);
		}
	}
	cout << "\nDecryped message is: " << DecryptMSG << endl;
	return 0;
}