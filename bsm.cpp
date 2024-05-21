#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;


void solve_tridiag(double &A, double &x, double &b, double &surface)
int main(int argc, char **argv) {
    // Create the option parameters
    double K = 0.5;  // Strike price
    double r = 0.05;   // Risk-free rate (5%)
    double sigma = 0.2;    // Volatility of the underlying (20%)
    double T = 1.00;    // One year until expiry

    // FDM discretisation parameters
    double x_dom = 1.0;       // Spot goes from [0.0, 1.0]
    unsigned long M = 20; 
    double t_dom = T;         // Time period as for the option
    unsigned long N = 20;     

    // Primary matrix
    double *A = new double[M * M];
    double *x = new double[M];
    double *b = new double[M];
    double *surface = new double[M*N];



    delete[] A;
    delete[] x;
    delete[] b;
    delete[] ssurface;

    return 0;
}
