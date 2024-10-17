#include <iostream>
#include <iomanip>

using namespace std;

// Function to calculate commission rate based on sales
double calculateCommissionRate(double sales) {
    if (sales < 10000) {
        return 0.05; // 5%
    }
    else if (sales < 15000) {
        return 0.10; // 10%
    }
    else if (sales < 18000) {
        return 0.12; // 12%
    }
    else if (sales < 22000) {
        return 0.14; // 14%
    }
    else {
        return 0.16; // 16%
    }
}

// Main function
int main() {
    double sales, advancedPay;

    // User input
    cout << "Enter the salesperson's monthly sales: ";
    cin >> sales;
    cout << "Enter the amount of advanced pay for this salesperson: ";
    cin >> advancedPay;

    // Calculate commission rate and commission amount
    double commissionRate = calculateCommissionRate(sales);
    double commission = sales * commissionRate;

    // Output results
    cout << fixed << setprecision(2); // Format output to 2 decimal places
    cout << "\nPay Results\n";
    cout << "-----------\n";
    cout << "Sales: $" << sales << endl;
    cout << "Commission Rate: " << commissionRate << endl;
    cout << "Commission: $" << commission << endl;
    cout << "Advanced Pay: $" << advancedPay << endl;

    // Calculate remaining pay or reimbursement
    double remainingPay = commission - advancedPay;
    if (remainingPay >= 0) {
        cout << "Remaining Pay: $" << remainingPay << endl;
    }
    else {
        cout << "Amount to reimburse: $" << -remainingPay << endl; // Negate for positive value
    }

    return 0;
}
