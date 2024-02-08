#include <iostream>

int main() {
    using namespace std; // використовуємо для зручності
    int number;
    while (true) {
        cout << "Enter a 4 digit number: ";
        cin >> number;
        // перевірка на 4-х значне число
        if (number < 1000 || number > 9999) {
            cout << "Invalid input" << endl;
        }
        else{
            break;
        }
        }
    int sum = 0;
    while (number > 0) {
        sum += number % 10; // додаємо останню цифру
        number =  number / 10; // відкидаємо останню цифру
    }
    cout << "The sum of the digits is: " << sum << endl;
    return 0;
}
//stupid way
/*
#include "iostream"
#include "string"
int main(){
    using namespace std;
    string str = "1234";
    int sum = 0;
    for (int i = 0, n = str.length(); i < n; i++){
        int number = str[i] - '0';
        sum += number;

    }
    cout << "The sum of the digits is: " << sum << endl;
    return 0;
}*/
