#include <iostream>
using namespace std;

class Car
{
    // ?  access specifier :  private
    string make;
    string model;
    string color;
    int year;
    float avg;

    // ? Access Specifier : Public 
public:
    void SetCarDetails(string make, string model, string color, int year, float avg)
    {
        this->make = make;
        this->model = model;
        this->color = color;
        this->year = year;
        this->avg = avg;

        cout << "\nNEW CAR PROPERTIES SET SUCCESSFULLY\n\n";
    }
    void GetCarDetails()
    {
        cout << make << "\t" << model << "\t" << year << "\t" << color << "\t" << avg << endl;
    }
};

int main()
{
    Car c;
    Car d;

    c.SetCarDetails("Ford", "Raptor", "Black", 2025, 12.25);
    d.SetCarDetails("Tesla", "ModelY", "BLUE", 2024, 568);
    cout << "Make\tModel\tYear\tColor\tAverage\n";
    c.GetCarDetails();
    d.GetCarDetails();
    return 0;
}