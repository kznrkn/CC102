#include <iostream>
using namespace std;

int main()
{
	double sugarPriceUSD = 0.0, ricePricePound = 0.0, sardinesPricePound = 0.0, coffeePriceUSD = 0.0, milkPriceUSD = 0.0;
	double sugarQty = 0.0, riceQty = 0.0, sardinesQty = 0.0, coffeeQty = 0.0, milkQty = 0.0;
	double usdToPhp = 0.0, poundToPhp = 0.0;
	
	
	cout << "Enter the price of the sugar";
	cin >> sugarPriceUSD;
	cout << "Enter the price of the rice";
	cin >> ricePricePound;
	cout << "Enter the price of the sardines";
	cin >> sardinesPricePound;
	cout << "Enter the price of the coffee";
	cin >> coffeePriceUSD;
	cout << "Enter the price of the milk";
	cin >> milkPriceUSD;
	
	cout << "Enter the quantity of the sugar";
	cin >> sugarQty;
	cout << "Enter the quantity of the rice";
	cin >> riceQty;
	cout << "Enter the quantity of the sardines";
	cin >> sardinesQty;
	cout << "Enter the quantity of the coffee";
	cin >> coffeeQty;
	cout << "Enter the quantity of the milk";
	cin >> milkQty;
	
	
	double totalCostPHP = 0.0;
	totalCostPHP = sugarCostPHP + riceCostPHP + sardinesCostPHP + coffeeCostPHP + milkCostPHP;
	
	
	return 0;
}
