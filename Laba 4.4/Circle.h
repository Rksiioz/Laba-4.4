#include "figure.h"

class Circle : public Figure {
protected:
    float radius;
public:
    Circle();
    float area() const override;
    float perimeter() const override;
    void input() override;
    void output() const override;
};