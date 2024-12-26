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
	Animal* create_animal = nullptr;
	int randomNum = rand() % 3;
	switch (randomNum)
	{
	case 0:
		create_animal = new Dog(); break;
	case 1:
		create_animal = new Cat(); break;
	case 2:
		create_animal = new Cow(); break;
	default:
		break;
	}

	return create_animal;
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