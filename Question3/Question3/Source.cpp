#include <iostream>
using namespace std;

int main()
{
	int currentPrice;
	int lastMonthsPrice;

	cout << "Current Price : ";  cin >> currentPrice;
	cout << "last month's price : "; cin >> lastMonthsPrice;
	cout << "Price : " << currentPrice << endl;
	cout << "Change since last month : " << (currentPrice - lastMonthsPrice) << endl;
	cout << "estimated monthly payment : " << (currentPrice * 0.4) / 12 << endl;
	return 0;
}