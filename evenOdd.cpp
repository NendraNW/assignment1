#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num % 2 == 0) {
        cout << num << " - even." << endl;
    } else {
        cout << num << " - odd." << endl;
    }
    return 0;
}
