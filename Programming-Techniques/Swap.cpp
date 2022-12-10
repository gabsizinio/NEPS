#include <iostream>

using namespace std;

int main(){
	int N, T;
	cin >> N >> T;
	int seq[N][2];
	
	for(int i = 0; i < N; i++){
		cin >> seq[i][0];
	}
	for(int i = 0; i < N; i++){
		cin >> seq[i][1];
	}

	int op1, op2, aux;

	for(int i = 0; i < T; i++){
		cin >> op1 >> op2;
		for(int k = op1 - 1; k < op2; k++){
			int aux = seq[k][0];
			seq[k][0] = seq[k][1];
			seq[k][1] = aux;
		}
	}
	for(int i = 0; i < N; i++){
		cout << seq[i][0] << " ";
	}
	return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

vector<int> frente, verso;
vector<bool> troca;
int N, T;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  cin >> N >> T;
  frente = vector<int>(N+2);
  verso = vector<int>(N+2);
  troca = vector<bool>(N+2);
  
  for( int i = 1; i <= N; i++ )
    cin >> frente[i];
  for( int i = 1; i <= N; i++ )
    cin >> verso[i];

  int I, J;  
  for( int k = 0; k < T; k++ ){
    cin >> I >> J;
    troca[I] = not troca[I];
    troca[J+1] = not troca[J+1];
  }

  bool f = true;
  for( int i = 1; i <= N; i++ ){
    if ( i > 1 ) cout << " ";
    if ( troca[i] ) f = not f;
    if ( f ) cout << frente[i];
    else cout << verso[i];
  }
  cout << endl;
  
  return 0;
}
*/