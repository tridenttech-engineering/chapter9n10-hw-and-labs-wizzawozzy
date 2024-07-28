//Lab 9-2.cpp - displays two monthly car payments
//Created/revised by <your name> on <current date>

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double getPayment(int, double, int);

int main()
{
     int carPrice = 0;
        int rebate = 0;
        double creditRate = 0.0;
        double dealerRate = 0.0;
        int term = 0;
        double creditPayment = 0.0;
        double dealerPayment = 0.0;

        cout << "Car price (after any trade-in): ";
        cin >> carPrice;
        cout << "Rebate: ";
        cin >> rebate;
        cout << "Credit union rate: ";
        cin >> creditRate;
        cout << "Dealer rate: ";
        cin >> dealerRate;
        cout << "Term in years: ";
        cin >> term;

        creditPayment = getPayment(carPrice - rebate, creditRate / 12, term *12);
        dealerPayment = getPayment(carPrice, dealerRate / 12, term * 12);

        cout << fixed << setprecision(2) << endl;
        cout << "Credit union payment: $" << creditPayment << endl;
        cout << "Dealer payment: $" << dealerPayment << endl;

        return 0;
    }

    double getPayment(int prin, double monthRate, int months)
    {
        double monthPay = 0.0;
        monthPay = prin * monthRate / (1-pow(monthRate + 1, -months)); 
        return monthPay;
   
}