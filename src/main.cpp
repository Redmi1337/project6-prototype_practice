#include <iostream>
using namespace std;

int Foo(int a, int b);

int main()
{
    int a;
    int b;
    cout << "enter two int values" << endl;
    cin >> a >> b;
    cout << Foo(a, b) << endl;
    system("pause");
    return 0;
}

int Foo(int a, int b)
{
    return a + b;
}