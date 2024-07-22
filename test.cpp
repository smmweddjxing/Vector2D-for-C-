#include"vector-shape.h"
using namespace std;
int main() {
    Vector2 v1(3, 4);
    Vector2 v2(1, 2);
    cout << "v1: " << v1 << endl;
    cout << "v2: " << v2 << endl;
    cout << "v1 display: ";
    v1.display();
    cout << "v2 display: ";
    v2.display();
    cout << "Length of v1: " << v1.dis() << endl;
    cout << "Length of v2: " << v2.dis() << endl;
    cout << "Dot product of v1 and v2: " << v1.dot(v2) << endl;
    cout << "Angle between v1 and v2 (radians): " << v1.angle(v2) << endl;
    cout << "Angle between v1 and v2 (degrees): " << v1.angle_deg(v2) << endl;
    Vector2 v3 = v1 + v2;
    Vector2 v4 = v1 - v2;
    Vector2 v5 = v1 * 2;
    Vector2 v6 = v1 / 2;
    Vector2 v7 = -v1;

    cout << "v1 + v2: " << v3 << endl;
    cout << "v1 - v2: " << v4 << endl;
    cout << "v1 * 2: " << v5 << endl;
    cout << "v1 / 2: " << v6 << endl;
    cout << "-v1: " << v7 << endl;

    return 0;
}
