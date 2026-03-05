 //Billing System.

#include<iostream>
#include<iomanip>
using namespace std;

void print(){
    for(int i=1;i<=60;i++){
        cout << "=";
    }
    cout << endl;
}

void print1(){
    for(int i=1;i<=60;i++){
        cout << "-";
    }
    cout << endl;
}

int main(){
     int totalItem;
     double grandTotal = 0,totalTax=0;
     string name;

     cout << "Enter Name of Customer: ";
     getline(cin,name);
     cout << endl ;
     cout << "Enter an Number for Total Item: ";
     cin >> totalItem;
     cout << fixed << setprecision(2);

     string names[100];
     int qty[100];
     float Price[100];
     float tax[100];
     float amount[100];
     float gamount[100];

     for(int i=0;i<totalItem;i++){
         cin.ignore(1000,'\n');
         cout << "Name of Item-" << i+1 << ": ";
         getline(cin,names[i]);
         cout << "Quantity of " << names[i] << ": ";
         cin >> qty[i];
         cout << "Price of "<< names[i] << " is: ₹";
         cin >> Price[i];
         cout << endl;

         amount[i] = Price[i] * qty[i];
         tax[i] = amount[i] * 0.18;
         gamount[i] = amount[i] + tax[i];
         totalTax += tax[i];
         grandTotal += gamount[i];
     }
    print();
    cout << "                        BILL SUMMARY                        " << endl;
    print();
    cout << "SIMARAN ENTERPRISE                 INVOICE DATE: "<< __DATE__ << endl;
    cout << "SINDHI-COLONY,RAJKOT               INVOICE TIME: "<< __TIME__ << endl;
    cout << "Phone:+91 8866096042               GSTIN: 08AALCRCR2857A1ZDH" << endl;
    print1();
    cout << setw(12) << "ITEMS   ";
    cout << setw(8) << "QTY  ";
    cout << setw(15) << "PRICE/UNIT";
    cout << setw(13) << "TAX/UNIT";
    cout << setw(12) << "AMOUNT" << endl;
    print1();

    for(int i=0;i<totalItem;i++){
        cout << fixed << left << setw(12) << names[i] << "   ";
        cout << fixed << left << setw(8) << qty[i] << "     ";
        cout << fixed << left << setw(13) << Price[i] << " ";
        cout << fixed << left << setw(14) << tax[i];
        cout << fixed << left << setw(12) << gamount[i] << endl;
    }

    print1();
    cout << "Grand Total: ";
    cout << right << setw(47) << grandTotal << endl;
    print();
    cout << "              THANK YOU " << name << " FOR VISITING US." << endl;
    print();

    cout << "\n\n\n\n\n\n\n";
    return 0;
}
