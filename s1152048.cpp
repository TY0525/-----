#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a=0, b=0, c=0;
    cout << "Please enter the coefficients a, b and c for ax^2 + bx + c = 0: ";
    cin >> a >> b >> c;
    double d = b * b - 4 * a * c;

    if(a==0){
        if(b!=0){
            cout << "The solution is " << -c/b << endl;
        }else if(c!=0){
            cout << "No solution." << endl;
        }else{
            cout << "Infinite solutions." << endl;
        }
    }else{  
        if(d>0){
            cout << "The solutions are " << (-b + sqrt(d)) / (2 * a) << " and " << (-b - sqrt(d)) / (2 * a) << endl;
        }else if(d==0){
            cout << "The solution is " << -b / (2 * a) << endl;
        }else{
            cout << "There are no real solutions." << endl;
        }
    }
    return 0;
}
