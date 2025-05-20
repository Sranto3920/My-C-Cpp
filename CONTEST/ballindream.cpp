#include<iostream>
#include<cmath>
#include <iomanip>

using namespace std;
int main(){
    double v,a,k;

    cin >> v >> a >> k;
    double x =(2.0*a*3.1415926535)/180;

    double result = (pow(v,2)*sin(x)*k)/(10*(k-1));
    cout << fixed << setprecision(2) << result<<endl;
    return 0;
}