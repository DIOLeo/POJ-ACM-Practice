#include <iostream>
#include <cmath>
using namespace std;

#define MAX_INPUT_NUM 6

int main(int argc, char const *argv[])
{
    double doubleInputBase[MAX_INPUT_NUM] = {0};
    double doubleInputPow[MAX_INPUT_NUM] = {0};
    double doubleOutput[MAX_INPUT_NUM] = {0};

    string a;
    int b = 0;

    while (cin >> a >> b)
    {
        cout << a << "\r" << b << endl;
    }

    // for (int i = 0; i < MAX_INPUT_NUM; i++)
    // {
    //     cin >> doubleInputBase[i] >> doubleInputPow[i];
    //     doubleOutput[i] = pow(doubleInputBase[i], doubleInputPow[i]);
    // }

    for (int i = 0; i < MAX_INPUT_NUM; i++)
    {
        cout << doubleOutput[i] << endl;
    }

    return 0;
}
