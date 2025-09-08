#include <iostream>
using namespace std;

class Animal
{
public:
    void WakeUp() // !wiawir
    {
        cout << "Animal has waked up.." << endl;
    }

    void Eat(string food) // !wirwa
    {
        cout << "Animal is eating " << food << endl;
    }

    bool play() // ! wrwia
    {
        return true;
    }
    int Sleep(int num, int sum) // !wawr
    {
        cout << "Animal has slept and returned ";
        return num * sum;
    }
};

int main()
{
    Animal animal; // !using objects of the class 

     // !method is accessible with the help of object created....
    animal.WakeUp(); 
    animal.Eat("Grass");
    cout << "Animal is Playing : " << animal.play() << endl;
    cout << animal.Sleep(12, 25);
    return 0;
}