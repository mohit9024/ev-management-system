#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// ---------------------------
// Vehicle Class
// ---------------------------
class Vehicle
{
private:
    string ownerName;
    string vehicleNumber;
    float batteryCapacity;
    float currentBattery;

public:
    // Constructor
    Vehicle()
    {
        ownerName = "";
        vehicleNumber = "";
        batteryCapacity = 0;
        currentBattery = 0;
    }

    // Take input from user
    void input()
    {
        cout << "\nEnter Owner Name: ";
        cin.ignore();
        getline(cin, ownerName);

        cout << "Enter Vehicle Number: ";
        getline(cin, vehicleNumber);

        cout << "Enter Battery Capacity (kWh): ";
        cin >> batteryCapacity;

        cout << "Current Battery Percentage: ";
        cin >> currentBattery;
    }

    // Calculate charging cost
    void chargeVehicle()
    {
        float target = 100;

        float energyNeeded =
            ((target - currentBattery) / 100) * batteryCapacity;

        float price = 18; // ₹18 per kWh

        float bill = energyNeeded * price;

        cout << "\n--------- BILL ---------\n";
        cout << "Owner Name      : " << ownerName << endl;
        cout << "Vehicle Number  : " << vehicleNumber << endl;
        cout << "Battery Needed  : " << energyNeeded << " kWh\n";
        cout << "Rate            : Rs. " << price << "/kWh\n";
        cout << "Total Bill      : Rs. " << bill << endl;
        cout << "------------------------\n";

        // Save bill in file
        ofstream file("Bill.txt", ios::app);

        file << ownerName << " "
             << vehicleNumber << " "
             << energyNeeded << " "
             << bill << endl;

        file.close();
    }

    // Show previous bills
    void viewBills()
    {
        ifstream file("Bill.txt");

        string name, number;
        float energy, amount;

        cout << "\n------ Previous Bills ------\n";

        while (file >> name >> number >> energy >> amount)
        {
            cout << "Name : " << name << endl;
            cout << "Vehicle : " << number << endl;
            cout << "Energy : " << energy << " kWh\n";
            cout << "Bill : Rs. " << amount << endl;
            cout << "-------------------------\n";
        }

        file.close();
    }
};

// ---------------------------
// Main Function
// ---------------------------
int main()
{
    Vehicle v;

    int choice;

    do
    {
        cout << "\n=================================\n";
        cout << " SMART EV CHARGING SYSTEM\n";
        cout << "=================================\n";

        cout << "1. Register Vehicle\n";
        cout << "2. Charge Vehicle\n";
        cout << "3. View Bills\n";
        cout << "4. Exit\n";

        cout << "Enter Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            v.input();
            break;

        case 2:
            v.chargeVehicle();
            break;

        case 3:
            v.viewBills();
            break;

        case 4:
            cout << "\nThank You!\n";
            break;

        default:
            cout << "\nInvalid Choice\n";
        }

    } while (choice != 4);

    return 0;
}