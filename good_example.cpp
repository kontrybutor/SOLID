#include <iostream>

struct IBird
{
    virtual void eat() = 0;
    virtual void sleep() = 0;
};

struct IFlyable
{
    virtual void fly() = 0;
};

struct ISwimmable
{
    virtual void swim() = 0;
};

struct ISoundable
{
    virtual void makeSound() = 0;
};

struct Penguin : public IBird, ISwimmable, ISoundable
{
    // Override from IBird
    void eat() override {}
    void sleep() override {}

    // Override from ISwimmable
    void swim() override {}

    //Override from ISoundable
    void makeSound() override {}
};

struct HummingBird : public IBird, IFlyable
{
    // Override from IFlyable
    void fly() override { std::cout << "Flying...\n"; }

    // Override from IBird
    void sleep() override { std::cout << "ZZZZzzzzzzzzZZZ\n"; }
    void eat() override { std::cout << "Slurp slurp!\n"; }
};

int main()
{
    Penguin penguin;
    penguin.makeSound();

    return 0;
}