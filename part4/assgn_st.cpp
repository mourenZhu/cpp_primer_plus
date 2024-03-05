#include <iostream>
struct inflatable {
    char name[20];
    float volume;
    double price;
};

int main() {
    using namespace std;
    inflatable bouguet = {
            "sunflowers",
            0.20,
            12.49
    };
    inflatable choice;

    cout << "bouguet: " << bouguet.name << " for $";
    cout << bouguet.price << endl;

    choice = bouguet;
    cout << "choice: " << choice.name << " for $";
    cout << choice.price << endl;

    choice.price = 20.22;
    cout << "bouguet: " << bouguet.name << " for $";
    cout << bouguet.price << endl;
    cout << "choice: " << choice.name << " for $";
    cout << choice.price << endl;

    return 0;
}
