#include <iostream>
#include <cmath>

struct polar {
    double distance;
    double angle;
};

struct rect {
    double x;
    double y;
};

void rect_to_polar(const rect *pxy, polar *pda);
void show_polar(const polar *pda);

int main() {
    using namespace std;
    rect replace;
    polar pplace;

    cout << "Enter the x and y values: ";
    while (cin >> replace.x >> replace.y) {
        rect_to_polar(&replace, &pplace);
        show_polar(&pplace);
        cout << "Next two numbers (q to quit): ";
    }
    cout << "Done.\n";
    return 0;
}

void rect_to_polar(const rect *pxy, polar *pda) {

    pda->distance = sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
    pda->angle = atan2(pxy->y, pxy->x);

}

void show_polar(const polar *pda) {
    const double Rad_to_deg = 57.29577951;

    std::cout << "distance = " << pda->distance;
    std::cout << ", angle = " << pda->angle * Rad_to_deg;
    std::cout << " degrees\n";
}
