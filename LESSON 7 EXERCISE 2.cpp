#include <iostream>

void compute_circumference(float radius, float* circumference) {
    *circumference = 2 * 3.14 * radius;
}

void compute_area(float radius, float* area) {
    *area = 3.14 * radius * radius;
}

int main() {
    float radius, circumference, area;
    std::cout << "Enter radius: ";
    std::cin >> radius;
    compute_circumference(radius, &circumference);
    std::cout << "Circumference = " << circumference << std::endl;
    compute_area(radius, &area);
    std::cout << "Area = " << area << std::endl;
    return 0;
}