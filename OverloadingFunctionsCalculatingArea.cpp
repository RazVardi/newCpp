#include <iostream>
#include <cmath>
using namespace std;


//---- FUNCTION PROTOTYPES BELOW THIS LINE----
int find_area(int);  //square
double find_area(double,double); //rectangle


//---- FUNCTION PROTOTYPES ABOVE THIS LINE----


void area_calc() {

    
    //---- FUNCTION CALLS BELOW THIS LINE----
    int square_area = find_area(2);//square
    double rectangle_area = find_area(4.5, 2.3);//rectangle


    //---- FUNCTION CALLS ABOVE THIS LINE----
    

    cout << "The area of the square is " << square_area << "\n" << "The area of the rectangle is " << rectangle_area;
}


//---- FUNCTION DEFINITIONS BELOW THIS LINE----
int find_area(int side_length) //square
{
    return pow(side_length, 2);
}
double find_area(double length, double width)//rectangle
{
    return length * width;
}

int main()
{
    area_calc();

    return 0;
}