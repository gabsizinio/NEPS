#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    vector<pair<int, string>> p;
    for(int i = 0; i < x; i++){
        int hab;
        string nom;
        cin >> nom >> hab;
        p.push_back(make_pair(-hab, nom));
    }
    sort(p.begin(), p.end());
    for(int i = 1; i <= y; i++){
        cout << "Time " << i << endl;
        vector<string> time;
        for(int k = i - 1; k < x; k += y){
            time.push_back(p[k].second);
        } 
        sort(time.begin(), time.end());
        for(int k = 0; k < time.size(); k++){
            cout << time[k] << endl;
        }
        cout << endl;
    }

    return 0;
}