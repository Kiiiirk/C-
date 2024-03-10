#include <iostream>

float pesos_to_dollars(float peso_amount, float exchange_rate) {
    float dollars_amount = peso_amount / exchange_rate;
    return dollars_amount;
}

float dollars_to_pesos(float dollar_amount, float exchange_rate) {
    float pesos_amount = dollar_amount * exchange_rate;
    return pesos_amount;
}

int main() {
    char conversion_type;
    float amount, exchange_rate, converted_amount;

    std::cout << "Select the type of conversion you desire:" << std::endl;
    std::cout << "(a) Peso to Dollars" << std::endl;
    std::cout << "(b) Dollars to Pesos" << std::endl;
    std::cout << "Enter the corresponding letter: ";
    std::cin >> conversion_type;

    std::cout << "Input Amount: ";
    std::cin >> amount;

    if (conversion_type == 'a' || conversion_type == 'A') {
        std::cout << "Enter the peso-dollar exchange rate: ";
        std::cin >> exchange_rate;
        converted_amount = pesos_to_dollars(amount, exchange_rate);
        std::cout << "Equivalent Amount in Dollars: $" << std::fixed << std::setprecision(2) << converted_amount << std::endl;
    } else if (conversion_type == 'b' || conversion_type == 'B') {
        std::cout << "Enter the dollar-peso exchange rate: ";
        std::cin >> exchange_rate;
        converted_amount = dollars_to_pesos(amount, exchange_rate);
        std::cout << "Equivalent Amount in Pesos: PHP " << std::fixed << std::setprecision(2) << converted_amount << std::endl;
    } else {
        std::cout << "Invalid input. Please select a or b for the conversion type." << std::endl;
    }

    return 0;
}