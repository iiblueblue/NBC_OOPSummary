#ifndef ANIMAL_H_
#define ANIMAL_H_

// Animal �⺻ Ŭ����
class Animal
{
public:
	virtual void makeSound() = 0;
};


// Dog ���� Ŭ����
class Dog :public Animal
{
public:
	void makeSound();
};


// Cat ���� Ŭ����
class Cat :public Animal
{
	void makeSound();
};


// Cow ���� Ŭ����
class Cow :public Animal
{
	void makeSound();
};
#endif
