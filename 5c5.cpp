#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string convertToBase(int decimal, int q) {
    string result = "";
    string digits = "0123456789abcdefghijklmnopqrstuvwxyz";  

    while (decimal > 0) {
        result += digits[decimal % q];  
        decimal /= q;
    }
    reverse(result.begin(), result.end());  
    return result;
}

int main() {
    int p, q;
    string N;

    cin >> p >> q >> N; 

   
    int decimal_value = stoi(N, nullptr, p);

    cout << convertToBase(decimal_value, q) << endl;

    return 0;
}
