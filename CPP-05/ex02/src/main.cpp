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

    std::cout << std::endl << "---TEST 4 Forms---" << std::endl;
    try {
        Bureaucrat e("Eve", 50);
        Bureaucrat f("Frank", 60);
        Bureaucrat g("Grace", 150);
        std::cout << e << std::endl;
        std::cout << f << std::endl;
        std::cout << g << std::endl;
        Form f1("Form1", 45, 100);
        Form f2("Form2", 55, 100);
        Form f3("Form3", 150, 100);
        std::cout << f1 << std::endl;
        std::cout << f2 << std::endl;
        std::cout << f3 << std::endl; 
        e.signForm(f1);
        e.signForm(f2);
        g.signForm(f3);
        f.signForm(f2);
        e.signForm(f2);
    } catch (const std::exception &e) {
        std::cerr << "exception: " << e.what() << std::endl;
    }

    return 0;
}