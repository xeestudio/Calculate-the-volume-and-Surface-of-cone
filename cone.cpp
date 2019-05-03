#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const float pi = 3.14; // Approx value of Pi
int main()
{
    float surfaceArea;
    float slantHeight;
    float volume;
    float radius;
    float height;
    cout << "Cone Calculations" << endl;
    cout << endl;
    cout << "Enter cone radius (in meters): ";
    cin >> radius;
    cout << "Enter cone height (in meters): ";
    cin >> height;
    cout << endl;
    if (radius==0 || height==0){
        cout<<"Invalid Input: Radius and Height must be greater than 0."<<endl;
        return 0;
    }
    if(radius!=0 && height!=0){
        cout << "RESULTS:" << endl;
        cout << "For a cone with a radius of " << radius << " meters and a height of " << height << " meters" << endl;
        cout << endl;
        volume =(pi*(pow(radius,2))*height)/3;
        cout << "Cone Volume: " << volume << endl;
        slantHeight = sqrt((pow(radius,2))+(pow(height,2)));
        cout << "Cone Slant Height: " << slantHeight << endl;
        surfaceArea =(pi*radius*radius)+(pi*radius*slantHeight);
        cout << "Cone Surface Area: " << surfaceArea << endl;
    }
    cin.get();
    return 0;
}
