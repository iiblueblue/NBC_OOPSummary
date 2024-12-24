#include <iostream>
#include "Zoo.h"
using namespace std;

void Zoo::addAnimal(Animal* animal)
{
	// 동물들이 꽉 차지 않았을 때
	if (animalCount < 10)
	{
		animals[animalCount] = animal;
		animalCount++;
		cout << "동물이 추가되었습니다." << endl;
	}
	else // 꽉 찼을 때
	{
		cout << "동물원이 꽉 차서 동물을 추가할 수 없습니다." << endl;
	}
}

void Zoo::performActions()
{
	for (int i = 0; i < animalCount; i++)
	{
		animals[i]->makeSound();
	}
}

Zoo::~Zoo()
{
	for (int i = 0; i < animalCount; i++)
	{
		delete animals[i];
		cout << "메모리 해제" << endl;
	}
}