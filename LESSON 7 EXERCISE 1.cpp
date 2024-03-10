#include <iostream>

int main() {
    int a = 5, b = 6;
    int* p_ptr, * q_ptr;
    
    p_ptr = &a;
    std::cout << *p_ptr << std::endl;
    
    q_ptr = p_ptr;
    std::cout << *q_ptr << std::endl;
    
    *p_ptr = 10;
    std::cout << a << std::endl;
    
    q_ptr = &b;
    std::cout << *p_ptr << ", " << *q_ptr << std::endl;
    
    return 0;
    
   }