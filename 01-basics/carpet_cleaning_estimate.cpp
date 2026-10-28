#include <iostream>
using namespace std;

int main(){
	cout << "Hi! Welcome to Ron's carpet cleaning service.";
	int number_of_carpets {0};
	cout << "\nHow many carpets are to be cleaned: "; cin >> number_of_carpets;
	cout << "Out of " << number_of_carpets << ", how many are small and how many are large?";
	int number_of_large_carpets {0};
	int number_of_small_carpets {0};
	cout << "\nNumber of large carpets: "; cin >> number_of_large_carpets;
	cout << "Number of small carpets: "; cin >> number_of_small_carpets;
	const double cost_per_large_carpet {30};
	const double cost_per_small_carpet {20};
	const double sales_tax {0.06};
	const int days_till_validation_of_estimate {30};
	cout << "\nEstimating for carpet cleaning service: ";
	cout << "\nNumber of small carpets: " << number_of_small_carpets;
	cout << "\nNumber of large carpets: " << number_of_large_carpets;
	cout << "\nPrice per small carpet: $" << cost_per_small_carpet;
	cout << "\nPrice per large carpet: $" << cost_per_large_carpet;
	cout << "\nCost: $" << (number_of_large_carpets*cost_per_large_carpet)+(number_of_small_carpets*cost_per_small_carpet);
	cout << "\nTax: $" << (number_of_large_carpets*cost_per_large_carpet*sales_tax)+(number_of_small_carpets*cost_per_small_carpet*sales_tax);
	cout << "\n======================================================";
	cout << "\nTotal estimate: $" << (number_of_large_carpets*cost_per_large_carpet)+(number_of_small_carpets*cost_per_small_carpet)+(number_of_large_carpets*cost_per_large_carpet*sales_tax)+(number_of_small_carpets*cost_per_small_carpet*sales_tax);
	cout << "\nThis estimate is valid for " << days_till_validation_of_estimate << " days";
	
	return 0;
	
	
	
	
}
