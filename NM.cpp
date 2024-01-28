#include <iostream>

#include "Backward Difference.h"

#include "Bisection.h"

#include "Euler's Method.h"

#include "Forward Difference.h"

#include "Gauss Seidel.h"

#include "Jacobi.h"

#include "Lagrange.h"

#include "Newton Raphson.h"

#include "Regula Falsi.h"

#include "Runge Kutta.h"

#include "Secant Method.h"

#include "Simpsons 1 by 3.h"

#include "Simpsons 3 by 8.h"

#include "Trapezoidal.h"

#include "Weddle's Rule.h"

using namespace std;

int main() {
    cout << "\t**NUMERICAL METHODS IMPLEMENTATION**" << endl;
    cout << "\t\tby UMAIR SHABBIR" << endl;
    cout << "\t\t 2019-CS-138 (B)" << endl;

    cout << "\n1.\tBackward Difference Table" << endl;
    cout << "2.\tBisection Method" << endl;
    cout << "3.\tEuler's Method" << endl;
    cout << "4.\tForward Difference Table" << endl;
    cout << "5.\tGauss Seidel Method" << endl;
    cout << "6.\tJacobi Iteration Method" << endl;
    cout << "7.\tLagrange Interpolation Method" << endl;
    cout << "8.\tNewton Raphson Method" << endl;
    cout << "9.\tRegula Falsi Method" << endl;
    cout << "10.\tRunge Kutta Method" << endl;
    cout << "11.\tSecant Method" << endl;
    cout << "12.\tSimpsons 1 by 3 Rule" << endl;
    cout << "13.\tSimpsons 3 by 8 Rule" << endl;
    cout << "14.\tTrapezoidal Rule" << endl;
    cout << "15.\tWeddle's Rule" << endl;
    cout << "0.\tEXIT" << endl;
    cout << endl;

    int Opt;

    cout << "Enter your Selection: ";
    cin >> Opt;
    cout << endl;

    switch (Opt) {
    case 0:
        break;
    case 1:
        BackwardDifference();
        break;
    case 2:
        BisectionMethod();
        break;
    case 3:
        EulerMethod();
        break;
    case 4:
        ForwardDifference();
        break;
    case 5:
        GaussSeidel();
        break;
    case 6:
        Jacobi();
        break;
    case 7:
        Lagrange();
        break;
    case 8:
        NewtonRaphson();
        break;
    case 9:
        RegulaFalsi();
        break;
    case 10:
        RungeKutta();
        break;
    case 11:
        SecantMethod();
        break;
    case 12:
        Simpsons1by3();
        break;
    case 13:
        Simpsons3by8();
        break;
    case 14:
        TrapezoidalMethod();
        break;
    case 15:
        WeddleRule();
        break;
    default:
        break;
    }

    return 0;
}