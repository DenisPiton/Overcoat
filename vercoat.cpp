// vercoat.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
class Overcoat
{
    
public:

    string type;
    int price;

    Overcoat(string type, int price) :type{ type }, price{ price }{}

    friend bool operator==(Overcoat a, Overcoat b)
    {
        return a.type == b.type;
    }
    friend bool operator<(Overcoat a, Overcoat b)
    {
        return a.price < b.price;
    }
    friend bool operator>(Overcoat a, Overcoat b)
    {
        return a.price > b.price;
    }
    void operator=(Overcoat a)
    {
        type = a.type;
        price = a.price;
    }
};

int main()
{
    Overcoat a("coat", 100);
    Overcoat b("coat", 200);
    cout << (a == b)<<endl;
    cout << (a > b)<<endl;
    a = b;
    cout << a.price<<endl;;


}
