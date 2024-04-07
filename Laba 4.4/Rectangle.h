#include "figure.h"

class Rectangle : public Figure {
protected:
    float width;
    float height;
public:
    Rectangle();
    float area() const override;
    float perimeter() const override;
    void input() override;
    void output() const override;
};

