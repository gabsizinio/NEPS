#include <iostream>
#include <map>

using namespace std;

int main(){
    int N, num;
    cin >> N;
    map <int, int> mp;
    for(int i = 0; i < N; i++){
        cin >> num;
        mp.insert({num, 0});
    }
    cout << mp.size() << endl;
}