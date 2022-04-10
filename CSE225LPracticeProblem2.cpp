#include <iostream>
#include <string>
using namespace std;

int main()
{
    int A[5], B[5];
    cout << "Enter 5 inputs for Array A: ";
    for (int i=0;i<5;i++)
    {
        cin >> A[i];
    }
    cout << "Enter 5 inputs for Array B: ";
    for (int i=0;i<5;i++)
    {
        cin >> B[i];
    }
    bool flag = true;
    int j=0;
    while (flag && j<5)
    {
        if (A[j]!=B[j])
        {
            flag=false;
        }
        j+=1;
    }
    if (flag)
    {
        cout<<"Identical.";
    }
    else cout<<"Not identical";
    return 0;
}
