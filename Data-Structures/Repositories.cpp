#include <iostream>
#include <map>

using namespace std;

int main(){
    int C, N;
    int Pc, Vc;
    int Pn, Vn;

    map<int, int> mp;
    map<int, int> rp;

    cin >> C >> N;

    for(int i = 0; i < C; i++){
        cin >> Pc >> Vc;
        mp.insert({Pc, Vc});
    }

    for(int i = 0; i < N; i++){
        cin >> Pn >> Vn;

        if(mp.find(Pn) == mp.end()){
            rp[Pn] = Vn;
            mp[Pn] = Vn;
        }
        else if(mp[Pn] < Vn){
            rp[Pn] = Vn;
            mp[Pn] = Vn;
        }
    }

    auto ptr = rp.begin();

    for(int i = 0; i < rp.size(); i++){
        cout << ptr->first << " " << ptr->second << endl;
        ptr++;
    }

    return 0;
}