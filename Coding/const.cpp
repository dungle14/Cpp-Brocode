#include <iostream>
using namespace std;
int main(){
    // "const" make the variable unchangable
    const double pi = 3.14;
    
    double radius = 10;
    double circumference = 2 * pi * radius;
    cout << circumference << "cm";
    return 0;
}