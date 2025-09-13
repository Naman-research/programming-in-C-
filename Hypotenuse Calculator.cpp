# include <iostream>
# include <cmath>
using namespace std;
int main(){

    double x;
    double y;
    cin >> x;
    cin >> y;
    double z =sqrt(pow(x,2)+pow(y,2));
    cout << "Hypotenuse : " << z;
    return 0;
}