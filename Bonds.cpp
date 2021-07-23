// Bonds.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "Header.h"
using namespace std;
string filename;

ofstream bond;

void checkLenOfFilename() {

    cin >> filename;

    while (filename.size() > 20)
    {
        cout << "The name of your file is to longTry again(name of file must be under 20chars)";
        cin >> filename;
    }
}

void bondIssuer() {
    cout << "\nEnter the name of Bond Issuer   ---   ";
    string nameOfBondIssuer;
    cin >> nameOfBondIssuer;
    bond << "The Issuer of this bond: ";
    bond << nameOfBondIssuer << "\n \n";
}

void bondOwner() {
    cout << "\n Enter the name of the owner of this bond   ---   ";
    string nameOfBondOwner;
    cin >> nameOfBondOwner;
    bond << "The owner of this bond: ";
    bond << nameOfBondOwner << endl << endl;
}

void bondTime() {
    vector<int> time;
    int fill;
    cout << "Enter the amount of time agreed for this bond to act upon\n";
    cout << "amount of months: ";
    cin >> fill;
    time.push_back(fill);
    bond << "Amount of time bond is in act:\n" <<time[0];

}

int main()
{
    cout << "Hello and Welcome to bond creator!\n" << "Enter The Name of your bond    ---  ";

    checkLenOfFilename();

    bond.open(filename + ".txt");
    
    bondIssuer();

    bondOwner();

    bondTime();

    bond.close();
    return 0;
}

