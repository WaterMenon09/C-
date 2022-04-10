#include <iostream>
#include <string>
using namespace std;

int main()
{
    int Array[10];
    int x;
    cout << "Enter 10 integers for an array: ";
    for (int i=0;i<10;i++)
        cin >> Array[i];
    cout << "Enter another integer: ";
    cin >> x;
    bool flag=false;
    int i=0;
    while (flag==false && i<10)
    {
        if (Array[i]==x)
            flag=true;
        i+=1;
    }
    if (flag)
        cout << "Found";
    else cout << "Not Found";
    return 0;
}
