//
//  main.cpp
//  TestProject1
//  Prep for monday quiz
//
//  Created by nikhil on 9/14/15.
//  Copyright (c) 2015 Nikhil Jain. All rights reserved.
//

#include <iostream>
using namespace std;

// Class Definition
class Rectangle{
    
private:
    double length;
    double width;
    double area;
    double perimeter;
    
public:
    void setLength(double);
    void setWidth(double);
    void displayArea();
    void displayPerimeter();
    
    
};



// Class Implementations
void Rectangle::setLength(double length) {
    this->length = length;
}

void Rectangle::setWidth(double width) {
    this->width = width;
}

void Rectangle::displayArea() {
    area = length * width;
    cout << "Area " << area << endl;
}

void Rectangle::displayPerimeter() {
    perimeter = 2 * length + 2 * width;
    cout << "Perimeter " << perimeter << endl;
}



// Driver Program
int main(int argc, const char * argv[]) {
    
    cout << "How many rectangles? ";
    int num;
    cin >> num;
    
    for (int i = 0; i < num; i++) {
        
        cout << endl << "Rectangle #" << i+1 << endl;
        
        Rectangle rectangle1;
        cout << "Enter the length: ";
        double length;
        cin >> length;
    
        cout << "Enter the width: ";
        double width;
        cin >> width;
    
        rectangle1.setLength(length);
        rectangle1.setWidth(width);
    
        rectangle1.displayArea();
        rectangle1.displayPerimeter();
        
    }
    
} // end of main
