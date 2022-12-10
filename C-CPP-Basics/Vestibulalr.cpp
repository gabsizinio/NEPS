#include <iostream>

using namespace std;

int main(){
    string x, y;
    int val, res = 0;
    cin >> val;
    cin >> x;
    cin >> y;
    for(int i = 0; i < val; i++){
        if(x[i] == y[i]){
            res++;
        }
    }
    cout << res;
}