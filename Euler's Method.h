#include<iostream>

/* defining ordinary differential equation to be solved */
/* In this example we are solving dy/dx = x + y */
#define f(x, y) x + y

using namespace std;

int EulerMethod() {
    float x0, y0, xn, h, yn{}, slope;
    int i, n;

    cout << "Enter Initial Condition" << endl;
    cout << "X0 = ";
    cin >> x0;
    cout << "Y0 = ";
    cin >> y0;
    cout << "Enter calculation point Xn = ";
    cin >> xn;
    cout << "Enter number of steps: ";
    cin >> n;

    /* Calculating step size (h) */
    h = (xn - x0) / n;

    /* Euler's Method */
    cout << "\nX0\tY0\tSlope\tYn\n";
    cout << "------------------------------\n";

    for (i = 0; i < n; i++) {
        slope = f(x0, y0);
        yn = y0 + h * slope;
        cout << x0 << "\t" << y0 << "\t" << slope << "\t" << yn << endl;
        y0 = yn;
        x0 = x0 + h;
    }

    /* Displaying result */
    std::cout << "\nValue of Y at X = " << xn << " is " << yn;

    return 0;
}