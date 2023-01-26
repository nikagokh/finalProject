 #include <iostream>
#include <cmath>
using namespace std;

int main() {
    float x1, y1, x2, y2;
    cout << "Enter the coordinates of point A(x1,y1): ";
    cin >> x1 >> y1;
    cout << "Enter the coordinates of point B(x2,y2): ";
    cin >> x2 >> y2;

    float dAB = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    cout << "Distance between point A and point B: " << dAB << endl;

    float dOA = sqrt(x1 * x1 + y1 * y1);
    cout << "Distance from the origin of coordinates to point A: " << dOA << endl;

    float dOB = sqrt(x2 * x2 + y2 * y2);
    cout << "Distance from the origin of coordinates to point B: " << dOB << endl;


    if (x1 > 0 && y1 > 0) {
        cout << "Point A belongs to the first quarter." << endl;
    }
    else if (x1 < 0 && y1 > 0) {
        cout << "Point A belongs to the second quarter." << endl;
    }
    else if (x1 < 0 && y1 < 0) {
        cout << "Point A belongs to the third quarter." << endl;
    }
    else if (x1 > 0 && y1 < 0) {
        cout << "Point A belongs to the fourth quarter." << endl;
    }
    else if (x1 == 0 && y1 == 0) {
        cout << "Point A belongs to the origin of coordinates." << endl;
    }
    else if (x1 == 0 && y1 != 0) {
        cout << "Point A belongs to the ordinate axis." << endl;
    }
    else if (x1 != 0 && y1 == 0) {
        cout << "Point A belongs to the abscissa axis." << endl;
    }

    if (x2 > 0 && y2 > 0) {
        cout << "Point B belongs to the first quarter." << endl;
    }
    else if (x2 < 0 && y2 > 0) {
        cout << "Point B belongs to the second quarter." << endl;
    }
    else if (x2 < 0 && y2 < 0) {
        cout << "Point B belongs to the third quarter." << endl;
    }
    else if (x2 > 0 && y2 < 0) {
        cout << "Point B belongs to the fourth quarter." << endl;
    }
    else if (x2 == 0 && y2 == 0) {
        cout << "Point B belongs to the origin of coordinates." << endl;
    }
    else if (x2 == 0 && y2 != 0) {
        cout << "Point B belongs to the ordinate axis." << endl;
    }
    return 0;
}
