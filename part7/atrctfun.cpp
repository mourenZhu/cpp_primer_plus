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

polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

int main() {
    using namespace std;
    rect replace;
    polar pplace;

    cout << "Enter the x and y values: ";
    while (cin >> replace.x >> replace.y) {
        pplace = rect_to_polar(replace);
        show_polar(pplace);
        cout << "Next two numbers (q to quit): ";
    }
    cout << "Done.\n";
    return 0;
}

polar rect_to_polar(rect xypos) {
    polar answer;
    answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
    answer.angle = atan2(xypos.y, xypos.x);;
    return answer;
}

void show_polar(polar dapos) {
    const double Rad_to_deg = 57.29577951;

    std::cout << "distance = " << dapos.distance;
    std::cout << ", angle = " << dapos.angle * Rad_to_deg;
    std::cout << " degrees\n";
}
