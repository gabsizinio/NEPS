#include <iostream>
using namespace std;

const int MAXN = 1000010;

int parent[MAXN], sizee[MAXN];

int find(int value)
{
	if (parent[value] == value) 
		return value;
	return parent[value] = find(parent[value]);
}

void merge(int i, int j)
{
	i = find(i); j = find(j);

	if (i == j)
		return;

	if (sizee[i] >= sizee[j]) 
	{
		parent[j] = i;
		sizee[i] += sizee[j];
	}
	else
	{
		parent[i] = j;
		sizee[j] += sizee[i];
	}
}

int main()
{
	int n, q;
	cin >> n >> q;

	for (int i = 0; i < n; i++)
	{
		sizee[i] = 1;
		parent[i] = i;
	}

	for (int i = 0; i < q; i++)
	{
		int a, b;
		string type; 
		cin >> type >> a >> b;

		if (type == "F")
			merge(a, b);
		else
		{
			if (find(a) == find(b))
				cout << "S" << endl;
			else
				cout << "N" << endl;
		}
	}
}