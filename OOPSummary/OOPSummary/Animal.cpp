#include <iostream>
#include "Animal.h"
using namespace std;

// makeSound �Լ� ������
void Dog::makeSound()
{
	cout << "Dog : �۸�" << endl;
}

void Cat::makeSound()
{
	cout << "Cat : �߿�" << endl;
}

void Cow::makeSound()
{
	cout << "Cow : ����" << endl;
}
