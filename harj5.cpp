#include <iostream>
using namespace std;
int main()
{
	int luku1;
	int luku2;

	cout <<"Anna kaksi kokonaislukua: ";
	cin >> luku1;
	cin >> luku2;
	
	if (luku1==luku2)
		cout<<"BINGO";
	else
		cout<<"BONGO";
}