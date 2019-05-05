#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
int main() {
 string package;
 float time;
 float price;
 cout << "Choose package:";cin >> package;
 if ((package == "A") || (package == "B") || (package == "C")) {
 cout << "Number of hours: ";
 cin >> time;
 if (time <= 744) {
if (package == "A") {
if (time > 10) {
price = 9.95 + (time - 10) * 2;
} else {price = 9.95;}
} else if (package == "B") {
if (time > 20) {
price = 14.95 + (time - 20) * 1;
} else {price = 14.95;}
} else {price = 19.95;}
 } else { cout << "Invalid!\n";}
 } else { cout << "Invalid!\n";} 
 cout << "Price: P" << price;
getch ();
return 0;
} 
