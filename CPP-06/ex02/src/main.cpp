#include "../inc/Base.hpp"
#include "../inc/A.hpp"
#include "../inc/B.hpp"
#include "../inc/C.hpp"


Base *generate(void)
{

	Base *p;
	srand(time(NULL));
	int r = rand() % 3;

	if (r == 0)
	{
		p = new A;
		std::cout << "A created" << std::endl;
	}
	else if (r == 1)
	{
		p = new B;
		std::cout << "B created" << std::endl;
	}
	else
	{
		p = new C;
		std::cout << "C created" << std::endl;
	}
	return p;
}

void identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A pointer identified" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B pointer identified" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C pointer identified" << std::endl;
	else
		std::cout << "Unknown pointer" << std::endl;
}

void identify(Base &p)
{
	if (A *a = dynamic_cast<A *>(&p))
	{
		(void) a;
		std::cout << "A address identified" << std::endl;
	}
	else if (B *b = dynamic_cast<B *>(&p))
	{
		(void) b;
		std::cout << "B address identified" << std::endl;
	}
	else if (C *c = dynamic_cast<C *>(&p))
	{
		(void) c;
		std::cout << "C address identified" << std::endl;
	}
	else
		std::cout << "Unknown address" << std::endl;
}

int main()
{
	Base *p = generate();
	identify(p);
	identify(*p);
	delete p;
}
