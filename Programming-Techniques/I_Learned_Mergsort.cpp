#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void merge(int l, int r,vector<int> &x){
 
    int mid = (l+r)/2;
    vector<int> S;
 
    int p1 = l; 
    int p2 = mid+1;
 
    while(p1 <= mid && p2 <= r){
        if(x[p1] >= x[p2]){
            S.push_back(x[p1]); 
            p1++;
        }
        else{
            S.push_back(x[p2]); 
            p2++;
        }
    }
   
    while(p1 <= mid){
        S.push_back(x[p1]);
        p1++;
    }

    while(p2 <= r){
        S.push_back(x[p2]);
        p2++;
    }
 
   
    for(int i=0;i<S.size();i++){
        x[l + i] = S[i];
    }
}

void mergeSort(int l,int r,vector<int> &x){
 
    int mid;

    if(l < r){
        mid = (l+r)/2;
        mergeSort(l,mid,x);
        mergeSort(mid+1,r,x); 
        merge(l,r,x); 
    }
}

int main(){
	int n, aux;
	cin >> n;
	vector<int> x;
	for(int i = 0; i < n; i++){
		cin >> aux;
		x.push_back(aux);
	}
	mergeSort(0, n - 1, x);

	for(int i = 0; i < n; i++){
		cout << x[i] << " ";
	}
}	
