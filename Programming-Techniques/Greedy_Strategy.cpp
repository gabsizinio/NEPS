#include <iostream>
using namespace std;

int main()
{
    int V, N;

    cin >> V;

    int S[6] = {1, 5, 10, 25, 50, 100};

    int coins = 0;
    for (int i = 6 - 1; i >= 0; i--)
    {
        while (V >= S[i])
        {
            coins += 1;
            V -= S[i];
        }
    }

    cout << coins << endl;
}