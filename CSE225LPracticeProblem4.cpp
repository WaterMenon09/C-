#include <iostream>
#include <string>
using namespace std;

int main()
{
    int Array[10];
    int largest=-999;
    cout << "Enter 10 integers for an array: ";
    for (int i=0;i<10;i++)
        cin >> Array[i];
    for (int i=0;i<10;i++)
    {
        if (Array[i]>largest)
            largest = Array[i];
    }
    cout << "Largest: " << largest;
    return 0;
}
