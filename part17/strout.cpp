#include <iostream>
#include <sstream>
#include <string>

int main() {
    using namespace std;
    ostringstream outsrt;

    string hdisk;
    cout << "What's the name of your hard disk? ";
    getline(cin, hdisk);
    int cap;
    cout << "What's its capacity in GB? ";
    cin >> cap;
    outsrt << "The hard disk " << hdisk << " has a capacity of "
           << cap << " gigabytes.\n";
    string result = outsrt.str();
    cout << result;

    return 0;
}