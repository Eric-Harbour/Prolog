#include <iostream>
using namespace std;
void Q(int &i, int k);
void P(int &i, int j);

int j;

void Q(int &i, int k)
{
    i = i + k;
    k = j + 1;
    cout << i << " " << j << " " << " " << k << endl;
}

void P(int &i, int j_local)
{
    int k = 1;
    i = i + k;
    j_local = j_local - k;
    Q(i, j_local);
}

int main()
{
    int i, j, k;

    i = 1;
    j = 2;
    k = 3;
    P(k, j);
    cout << i << " " << j << " " << " " << k << endl;
    return 0;
}
