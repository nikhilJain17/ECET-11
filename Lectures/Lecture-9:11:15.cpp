#include <iostream>
#include <iomanip>

using namespace std;


// class definition
class Circle {

      // declare all private functions AND data members here
      private:
            float radius;
            float area();
            float circumference();

      public:
            void setRadium(float);
            void displayArea();
            void displayCircumference();

};

// class implementation
void Circle::setRadium(float r)
{
      // the "this" operator exists
      this->radius = r;
}

float Circle::area()
{
      return 3.14 * radius * radius;
}

float Circle::circumference()
{
      return 2 * 3.14 * radius;
}

void Circle::displayArea()
{
      cout << "Area: " << area() << endl;
}

int main()
{
      float radius1, radius2;
      Circle c1, c2;

      cout << "Enter circle 1 radius";
      cin >> radius1;
      c1.setRadium(radius1);

      cout << "Enter circle 2 radius";
      cin >> radius2;
      c2.setRadium(radius2);

      c1.displayArea();

      return 0;
}
