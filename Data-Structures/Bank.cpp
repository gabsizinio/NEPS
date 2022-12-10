#include <iostream>
#include <queue>

using namespace std;

int main(){
    int c, n;
    cin >> c >> n;

    priority_queue<int, vector<int>, greater<int>> caixa;
    
    int tmp = 0, res = 0, t, d;
    for(int i = 0; i < c; i++){
        cin >> t >> d;
        caixa.push(t + d);
    }

    for(int i = c; i < n; i++){
        cin >> t >> d;
        tmp = caixa.top();
        caixa.pop();
        if(tmp - t > 20){
            res++;
        }
        caixa.push(max(tmp, t) + d);
    }
    cout << res << endl;
    return 0;

}