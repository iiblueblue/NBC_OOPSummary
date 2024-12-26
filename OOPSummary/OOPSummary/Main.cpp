#include <cstdlib>
#include <ctime>
#include "Zoo.h"
#include "Dog.h"
#include "Cat.h"
#include "Cow.h"
using namespace std;


// ���� ������ �����ϴ� �Լ�
// - 0, 1, 2 �� �ϳ��� ������ �����Ͽ� ���� Dog, Cat, Cow ��ü �� �ϳ��� �������� �����մϴ�.
// - ������ ��ü�� Animal Ÿ���� �����ͷ� ��ȯ�˴ϴ�.
// - �Է� �Ű�����: ����
// - ��ȯ��: Animal* (������ ���� ��ü�� ������)
Animal* createRandomAnimal()
{
	int randomNum = rand() % 3;
	switch (randomNum)
	{
	case 0:
		return new Dog();
	case 1:
		return new Cat();
	case 2:
		return new Cow();
	default:
		return nullptr; break;
	}
}


int main()
{
	// Animal Ÿ���� ������ �迭 ����
	Animal* animals[3];
	animals[0] = new Dog();
	animals[1] = new Cat();
	animals[2] = new Cow();

	// �� ������ �����Ҹ�(�ݺ���)
	for (int i = 0; i < 3; i++)
	{
		animals[i]->makeSound();
	}

	// �޸� ����
	for (int i = 0; i < 3; i++)
	{
		delete animals[i];
	}

	// �������� �������� ���� �߰��ϱ�
	Zoo my_zoo;
	srand(time(0)); // ���� ����
	for (int i = 0; i < 10; i++)
	{
		my_zoo.addAnimal(createRandomAnimal());
	}

	// ��� ������ �ൿ�ϱ�
	my_zoo.performActions();
}