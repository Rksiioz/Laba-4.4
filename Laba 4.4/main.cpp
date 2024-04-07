#include "rectangle.h"
#include "circle.h"
#include "trapezium.h"

void printInfo(const Figure &fig) {
    cout << "Figure Type: " << fig.getName() << endl;
    cout << "Area: " << fig.area() << endl;
    cout << "Perimeter: " << fig.perimeter() << endl;
}

int main() {
    Rectangle rectangle;
    Circle circle;
    Trapezium trapezium;

    Figure *ptr1 = &rectangle;
    Figure *ptr2 = &circle;
    Figure *ptr3 = &trapezium;

    ptr1->input();
    ptr1->output();
    printInfo(*ptr1);

    ptr2->input();
    ptr2->output();
    printInfo(*ptr2);

    ptr3->input();
    ptr3->output();
    printInfo(*ptr3);

    return 0;
}

