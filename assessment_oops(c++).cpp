

#include <iostream>
#include <string>
using namespace std;

const double CostPerHour = 18.50;
const double CostPerMinute = 0.40;
const double CostOfDinner = 20.70;

int main() {
    string eventName;
    string firstName, lastName;
    int numberOfGuests;
    int numberOfMinutes;
    int numberOfServers;
    double costForOneServer;
    double totalFoodCost;
    double averageCost;
    double totalCost;
    double depositAmount;
     
    cout<<"****************Event Management System****************\n";
    cout << "Enter the name of the event: ";
    cin >> eventName;

    cout << "Enter your first name: ";
    cin >> firstName;

    cout << "Enter your last name: ";
    cin >> lastName;

    cout << "Enter the number of guests: ";
    cin >> numberOfGuests;

    cout << "Enter the number of minutes: ";
    cin >> numberOfMinutes;

    numberOfServers = (numberOfGuests / 20.0);

    double cost1 = (numberOfMinutes / 60.0) * CostPerHour;
    double cost2 = (numberOfMinutes % 60) * CostPerMinute;
    costForOneServer = cost1 + cost2;

    totalFoodCost = numberOfGuests * CostOfDinner;

    averageCost = totalFoodCost / numberOfGuests;

    totalCost = totalFoodCost + (costForOneServer * numberOfServers);

    depositAmount = totalCost * 0.25;

    cout << "\n\n============Event estimate for:";
   
    cout << firstName << " " << lastName<<"============"<< endl;
    cout << "Number of Guests: " << numberOfGuests << endl;
    cout << "Number of Servers: " << numberOfServers << endl;
    cout << "Cost for One Server: " << costForOneServer << endl;
    cout << "Total Food Cost: " << totalFoodCost << endl;
    cout << "Average Cost per Person: " << averageCost << endl;
    cout << "Total Cost: " << totalCost << endl;
    cout << "please deposite a 25% deposit to reserve the event\n";
    cout << "the deposit needed is: " << depositAmount << endl;

    return 0;
}
