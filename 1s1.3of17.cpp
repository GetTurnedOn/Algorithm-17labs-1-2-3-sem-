#include <cstdlib>
#include <iostream>
#include <math.h>
 
using namespace std;
 
int main(int argc, char *argv[])
{
    float x0,y0,z0,x,y,z,r,f;
       
    cout << "Enter x0:\n";
    cin >> x0;
    cout << "Enter y0:\n";
    cin >> y0;
    cout << "Enter z0:\n";
    cin >> z0;
    cout << "Enter radius of the sphere:\n";
    cin >> r;
    cout <<"\n\n\n";
 
    cout << "Enter x:\n";
    cin >> x;
    cout << "Enter y:\n";
    cin >> y;
    cout << "Enter z:\n";
    cin >> z;
    
    f = pow(x0-x,2)+pow(y0-y,2)+pow(z0-z,2);
    if ( f<= pow(r,2))  cout << "The point lies inside the sphere\n";
    else  cout << "The point doesn't lie inside the sphere\n";
    
    system("PAUSE");
    return EXIT_SUCCESS;
}