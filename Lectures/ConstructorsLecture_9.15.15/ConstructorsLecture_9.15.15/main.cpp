//
//  main.cpp
//  ConstructorsLecture_9.15.15
//
//  Created by d.d on 9/15/15.
//  Copyright (c) 2015 Nikhil Jain. All rights reserved.
//
//  Constructors
//

#include <iostream>
using namespace std;


// Class Definition
class CRectangle {
    
private:
    float length, width;
    
public:
    // Constructor
    CRectangle();       // default constructor
    CRectangle(float, float);       // does not return anything, not even void
    
    // CONSTRUCTOR WITH DEFAULT ARGUMENTS
    // IF THE USER DOESN'T ENTER ANYTHING, THEN IT IS AUTOMATICALLY SET TO 10 AND 20
    // IT CLASHES WITH THE DEFAULT CONSTRUCTER THOUGH
    // therefore you can have 1 or the other
    
//    CRectangle(float = 10, float = 20);
    // declared same as default constructor (objects)
    
    float area() { return length * width; } // inline definition AND implementation
    void setLength(float length) { this->length = length; }
    void setWidth(float width) { this->width = width; }
    
    
};


// Class Implementation

    // constructor with our values
CRectangle::CRectangle(float length, float width) {
    this->length = length;
    this->width = width;
}

    // default constructor (no parameters) this CONSTRUCTOR is OVERLOADED
CRectangle::CRectangle() {
    // If no values are passed, these are the default values
    length = 1.0;
    width = 1.0;
}




// Driver Program
int main() {
    
    
    cout << "Enter a length: " << endl;
    float length;
    cin >> length;
    
    cout << "Enter a width: " << endl;
    float width;
    cin >> width;
    
    CRectangle rect(length, width);
    float area = rect.area();
    cout << "Area: " << area << endl;
    
    // Default-ly made rectangle
    CRectangle rect2; // NO PARENTHESIS FOR DEFAULT CONSTRUCTOR
    cout << "\nRectangle 2 Area: " << rect2.area() << endl;
        

    return 1;
}
