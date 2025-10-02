#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

int main()
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    const WrongAnimal *wa = new WrongAnimal();
    const WrongAnimal *wc = new WrongCat();
    std::cout << std::endl;

    std::cout << meta->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << std::endl;

    std::cout << wa->getType() << " " << std::endl;
    std::cout << wc->getType() << " " << std::endl;
    std::cout << std::endl;

    meta->makeSound();
    j->makeSound();
    i->makeSound();
    std::cout << std::endl;

    wa->makeSound();
    wc->makeSound();
    std::cout << std::endl;

    delete meta;
    delete j;
    delete i;
    std::cout << std::endl;

    delete wa;
    delete wc;
    return 0;
}