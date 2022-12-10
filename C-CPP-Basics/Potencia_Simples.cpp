#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
    double x, y;
    cin >> x >> y;
    cout << fixed << setprecision(4) << pow(x, y);
}