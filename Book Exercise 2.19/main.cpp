//
//  main.cpp
//  Book Exercise 2.15
//
//  Created by ax on 8/29/16.
//  Copyright © 2016 COMP130. All rights reserved.
//
//  Geometry: area of a triangle
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    // insert code here...
    cout << "Calculate Distance Between Two Points \n";
    
    // D
    double x1 = 0.0;
    double y1 = 0.0;
    double x2 = 0.0;
    double y2 = 0.0;
    double x3 = 0.0;
    double y3 = 0.0;
    double s = 0.0;
    double add_squares = 0.0;
    double square_prep = 0.0;
    double side_one_length = 0.0;
    double side_two_length = 0.0;
    double side_three_length = 0.0;
    double area_calc = 0.0;
    
    // I
    cout << "Enter three points for a triangle: ";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    
    // P
    
    // side_one_length
    add_squares = pow((x2 - x1), 2.0) + pow((y2 - y1), 2.0);
    side_one_length = pow(add_squares, 0.5);
    
    // side_two_length
    add_squares = pow((x3 - x2), 2.0) + pow((y3 - y2), 2.0);
    side_two_length = pow(add_squares, 0.5);
    
    // side_three_length
    add_squares = pow((x1 - x3), 2.0) + pow((y1 - y3), 2.0);
    side_three_length = pow(add_squares, 0.5);
    
    s = (side_one_length + side_two_length + side_three_length) / 2;
    
    square_prep = s * (s - side_one_length) * (s - side_two_length) * (s - side_three_length);
    
    area_calc = pow(square_prep, 0.5);
    
    // O
    cout << "The area of the triangle is " << area_calc << endl;
    
    return 0;
    
}