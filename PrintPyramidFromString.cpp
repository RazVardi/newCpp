#include<iostream>
#include<string>
using namespace std;
int main()
{
	string letters ;
	int i, j;
	cout << "Insert a string to realize a pyramid" << endl;
	getline(cin, letters);
	for ( i = 0; i <letters.length() ; i++) // loop rows
	{
		for ( j = 1; j < letters.length()-i; j++) // loop spaces
		{
			cout << " ";
		}

		for ( j = 0; j < i+1; j++) //A loop that performs a pyramid in a string part 1
		{
			cout << letters.at(j);
		}
		for (j = i; j > 0 ; j--)   //A loop that performs a pyramid in a string part 2
		{
			cout << letters.at(j-1);
		}
		cout << endl; // create a new line
	}
	
	return 0;
}