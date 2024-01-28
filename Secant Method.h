#include<iostream>

#include<iomanip>

#include<math.h>

#include<stdlib.h>

/* Defining equation to be solved. */
#define f(x) x * x * x - 2 * x - 5

using namespace std;

int SecantMethod() {
    float x0, x1, x2, f0, f1, f2, e;
    int step = 1, N;

    /* Setting precision and writing floating point values in fixed-point notation. */
    std::cout << setprecision(6) << fixed;

    /* Inputs */
    std::cout << "Enter first guess: ";
    cin >> x0;
    std::cout << "Enter second guess: ";
    cin >> x1;
    std::cout << "Enter tolerable error: ";
    cin >> e;
    std::cout << "Enter maximum iteration: ";
    cin >> N;

    /* Implementing Secant Method */
    std::cout << endl << "**************" << endl;
    std::cout << "Secant Method" << endl;
    std::cout << "**************" << endl;
    do {
        f0 = f(x0);
        f1 = f(x1);
        if (f0 == f1) {
            std::cout << "Mathematical Error.";
            exit(0);
        }

        x2 = x1 - (x1 - x0) * f1 / (f1 - f0);
        f2 = f(x2);

        std::cout << "Iteration# " << step << ":\t X2 = " << setw(10) << x2 << " and f(x2) = " << setw(10) << f(x2) << endl;

        x0 = x1;
        f0 = f1;
        x1 = x2;
        f1 = f2;

        step = step + 1;

        if (step > N) {
            std::cout << "Not Convergent.";
            exit(0);
        }
    } while (fabs(f2) > e);

    std::cout << endl << "Root is: " << x2;

    return 0;
}