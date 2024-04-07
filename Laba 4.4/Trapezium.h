#include "Figure.h"

class Trapezium : public Figure {
protected:
    float a;
    float b;
    float h;
public:
    Trapezium();
    float area() const override;
    float perimeter() const override;
    void input() override;
    void output() const override;
};

