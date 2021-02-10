#include <iostream>
#include <string>
#include <iomanip> 
using namespace std;

int main()

{
	/*  Gets user to enter 3 random items and also the value of the 3 items. This program will calculate gst/pst values on each item and provide the total + tax. */
	string item1, item2, item3;
    double priceOfItem1, priceOfItem2, priceOfItem3, subTotal, gst, pst, total;

	cout << " Please enter the name of the 1st item: ";
	getline(cin, item1);
	cout << " Please enter the name of the 2nd item: ";
	getline(cin, item2);
	cout << " Please enter the name of the 3rd item: ";
	getline(cin, item3);
	cout << " Next, please enter the price of each item one: ";
	cin >> priceOfItem1;
	cout << " Next, please enter the price of each item one: ";
	cin >> priceOfItem2;
	cout << " Next, please enter the price of each item one: ";
	cin >> priceOfItem3;
	subTotal = priceOfItem1 + priceOfItem2 + priceOfItem3;
	gst = subTotal * 0.05;
	pst = subTotal * 0.07;
	total = subTotal + gst + pst;
	cout << "--------------Receipt-----------------" << endl; 
	cout << fixed << setprecision(2); 
	cout << setw(20) << left << item1 << right << setw(20) << priceOfItem1 << endl;  
	cout << setw(20) << left << item2 << right << setw(20) << priceOfItem2 << endl;
	cout << setw(20) << left << item3 << right << setw(20) << priceOfItem3 << endl;
	cout << setw(20) << left << "Subtotal is:" << right << setw(20) << subTotal << endl; 
	cout << setw(20) << left << "GST is: " << right << setw(20) << gst << endl;
	cout << setw(20) << left << "PST is: " << right << setw(20) << pst << endl;
	cout << setw(50) << left << "The total of all after tax is" << left << setw(20) << total;
	
	return 0;
}
