#include <iostream>
#include <string>
using namespace std;

class Notebook_Class
{
public:
    double
        id,
        price,
        cpu,
        ssd,
        diagonal,
        weight;

    void Void_Notebook()
    {
        cout << id << "\n";
        cout << price << "\n";
        cout << ssd << "\n";
        cout << diagonal << "\n";
        cout << weight << "\n";
    }
};

int main()
{
    setlocale(LC_ALL, "rus");
    string notebooks[3] =
    {
        "Ноутбук-I",
        "Ноутбук-II",
        "Ноутбук-III"
    };

    for (int i = 0; i < 3; i++)
    {
        cout << notebooks[i] << "\n";
    }
    cout << "\n";

    Notebook_Class notebook_class1{ 1, 16949, 16, 256, 15.6, 1080 };
    notebook_class1.Void_Notebook();
    cout << "\n";

    Notebook_Class notebook_class2{ 2, 15838, 13, 176, 25.7, 1080 };
    notebook_class2.Void_Notebook();
    cout << "\n";

    Notebook_Class notebook_class3{ 2, 18026, 6, 395, 13.6, 1080 };
    notebook_class3.Void_Notebook();
    cout << "\n";
}