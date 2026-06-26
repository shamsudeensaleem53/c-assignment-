// ============================================================
// BEE 208 - Control Statements in C++
// Question 15: Electrical Load Limit Checker
// Topic: while loop
// ============================================================

#include <iostream>
using namespace std;

int main() {

    // Declare variables
    double appliancePower;
    double totalLoad = 0;
    int applianceCount = 0;

    // The maximum load limit is 3000 W
    double loadLimit = 3000;

    // Display program header
    cout << "============================================" << endl;
    cout << "  BEE 208 - Electrical Load Limit Checker  " << endl;
    cout << "============================================" << endl;
    cout << "Load limit: " << loadLimit << " W" << endl;
    cout << "Add appliances one at a time." << endl;
    cout << "--------------------------------------------" << endl;

    // Use a while loop to keep adding appliances while load is within limit
    while (totalLoad <= loadLimit) {
        cout << "Enter appliance power rating (in Watts): ";
        cin >> appliancePower;

        // Add the appliance to the total load
        totalLoad = totalLoad + appliancePower;
        applianceCount = applianceCount + 1;

        cout << "  >> Appliance " << applianceCount << ": " << appliancePower << " W added." << endl;
        cout << "  >> Total Load so far: " << totalLoad << " W" << endl;

        // Check if limit is exceeded
        if (totalLoad > loadLimit) {
            cout << endl;
            cout << "  !! Load limit exceeded!" << endl;
            cout << "  !! Do not add more appliances." << endl;
            break;
        }

        cout << "  >> Load is within limit. You may add more." << endl;
        cout << "--------------------------------------------" << endl;
    }

    // Display final summary
    cout << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Total Appliances : " << applianceCount << endl;
    cout << "Final Total Load : " << totalLoad << " W" << endl;

    if (totalLoad > loadLimit) {
        cout << "Warning: Load limit of " << loadLimit << " W has been exceeded!" << endl;
    }
    else {
        cout << "Total load is within the safe limit." << endl;
    }

    cout << "============================================" << endl;

    return 0;
}
