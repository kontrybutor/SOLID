#include <iostream>

struct IBird
{
    virtual void fly() = 0;
    virtual void sleep() = 0;
    virtual void eat() = 0;
    virtual void swim() = 0;
    virtual void makeSound() = 0;
};















struct Penguin : public IBird
{
    void fly() override { throw std::logic_error("Pinguins cannot fly!\n"); }
    void sleep() override { std::cout << "ZZZZzzzzzzzzZZZ\n"; }
    void eat() override { std::cout << "Munch!\n"; }
    void swim() override { std::cout << "Plum plum\n"; }
    void makeSound() override { std::cout << "Some strange noise..?\n"; } //https://www.youtube.com/watch?v=coM-pze7WRU
};

struct HummingBird : public IBird
{
    void fly() override { std::cout << "Flying...\n"; }
    void sleep() override { std::cout << "ZZZZzzzzzzzzZZZ\n"; }
    void eat() override { std::cout << "Slurp slurp!\n"; }
    void swim() override { throw std::logic_error("HummingBird cannot swim!\n"); }
    void makeSound() override { throw std::logic_error("HummingBird cannot swim!\n"); }
};

int main()
{
    Penguin penguin;
    penguin.makeSound();
    penguin.fly();
    // (...)

    HummingBird hummingBird;
    hummingBird.fly();
    // (...)

    return 0;
}