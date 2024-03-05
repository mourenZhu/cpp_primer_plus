#include <iostream>

int main() {
    using namespace std;
    cout << "What year was your house built?\n";
    int year;
    cin >> year;
    cin.get(); // or (cin >> year).get(); 不如没有机会输入地址，cin.getline会读取换行
    cout << "WHat is its street address?\n";
    char address[80];
    cin.getline(address, 80);
    cout << "Year built: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!\n";
    return 0;
}
