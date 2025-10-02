#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"
#include "../inc/Brain.hpp"

int main()
{
    std::cout << "----- Constructors -----" << std::endl;
    const Animal *meta = new Animal();
    std::cout << std::endl;
    const Animal *j = new Dog();
    std::cout << std::endl;
    const Animal *i = new Cat();
    std::cout << std::endl;
    const WrongAnimal *wa = new WrongAnimal();
    std::cout << std::endl;
    const WrongAnimal *wc = new WrongCat();
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "----- Types and Sounds -----" << std::endl;
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
    
    std::cout << "----- Brain Deep Copy Test -----" << std::endl;
    std::cout << "----- Test 1 -----" << std::endl;
    Cat *c = new Cat();
    Dog *d = new Dog();
    for (int i = 0; i < 100; i++)
        d->setIdea(i, "Dog Idea");
    for (int i = 0; i < 100; i++)
        c->setIdea(i, "Cat Idea");
    d->setIdea(0, "I want to bark");
    c->setIdea(0, "I want to meow");
    std::cout << d->getIdea(99) << std::endl;
    std::cout << d->getIdea(0) << std::endl;
    std::cout << c->getIdea(99) << std::endl;
    std::cout << c->getIdea(0) << std::endl;
    std::cout << std::endl;

    std::cout << "----- Test 2 -----" << std::endl; 
    Cat *cat2 = new Cat(*c);
    Dog *dog2 = new Dog(*d);
    std::cout << dog2->getIdea(99) << std::endl;
    std::cout << dog2->getIdea(0) << std::endl;
    std::cout << cat2->getIdea(99) << std::endl;
    std::cout << cat2->getIdea(0) << std::endl;
    std::cout << std::endl;

    std::cout << "----- Test 3 -----" << std::endl;
    Cat *cat3 = cat2;
    Dog *dog3 = dog2;
    std::cout << dog3->getIdea(99) << std::endl;
    std::cout << dog3->getIdea(0) << std::endl;
    std::cout << cat3->getIdea(99) << std::endl;
    std::cout << cat3->getIdea(0) << std::endl;
    dog3->setIdea(1, "I want to play");
    cat3->setIdea(1, "I want to sleep");
    std::cout << std::endl;
    std::cout << d->getIdea(1) << std::endl;
    std::cout << c->getIdea(1) << std::endl;
    std::cout << dog2->getIdea(1) << std::endl;
    std::cout << cat2->getIdea(1) << std::endl;
    std::cout << dog3->getIdea(1) << std::endl;
    std::cout << cat3->getIdea(1) << std::endl;
    std::cout << std::endl;
    
    std::cout << "----- Destructors -----" << std::endl;
    delete meta;
    std::cout << std::endl;
    delete j;
    std::cout << std::endl;
    delete i;
    std::cout << std::endl;
    delete wa;
    std::cout << std::endl;
    delete wc;
    std::cout << std::endl;
    delete c;
    std::cout << std::endl;
    delete d;
    std::cout << std::endl;
    delete cat2;
    std::cout << std::endl;
    delete dog2;
    return 0;
}