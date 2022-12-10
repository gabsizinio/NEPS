#include <iostream>
#include <cmath>

using namespace std;

int search(int a[], int N, int value) {
	int L = 0;				// Limite esquerdo do intervalo
	int R = N - 1;			// Limite direito do intervalo
	int ind = -1;			// íNdice com a resposta
	
	while(L <= R) {
		int mid = (L + R) / 2; 	// Meio do intervalo
		
		if(a[mid] == sqrt(N)) {
			ind = mid;			// Valor encontrado
			break;
		} else if(a[mid] < sqrt(N))
			L = mid + 1;		// Descarto o intervalo à esquerda
		else
			R = mid - 1;		// Descarto o intervalo à direita
	}
	return ind;
}