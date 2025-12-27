#include "../inc/Bureaucrat.hpp"

int main()
{
    std::cout << std::endl << "---TEST 1 Increment Grade---" << std::endl;
    try {
        Bureaucrat a("Alice", 2);
        std::cout << a << std::endl;
        a.incrementGrade();
        std::cout << a << std::endl;
        a.incrementGrade();
        std::cout << a << std::endl;
        a.incrementGrade();
        std::cout << a << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "exception: " << e.what() << std::endl;
    }

    std::cout << std::endl << "---TEST 2 Decrement Grade---" << std::endl;
    try {
        Bureaucrat b("Bob", 149);
        std::cout << b << std::endl;
        b.decrementGrade();
        std::cout << b << std::endl;
        b.decrementGrade();
        std::cout << b << std::endl;
        b.decrementGrade();
        std::cout << b << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "exception: " << e.what() << std::endl;
    }

    std::cout << std::endl << "---TEST 3 Invalid Grade on Creation---" << std::endl;
    try {
        Bureaucrat c("Charlie", 0);
        std::cout << c << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "exception: " << e.what() << std::endl;
    }

    try {
        Bureaucrat d("David", 151);
        std::cout << d << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "exception: " << e.what() << std::endl;
    }

    return 0;
}