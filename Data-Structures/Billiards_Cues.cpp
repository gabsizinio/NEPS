#include <iostream> 
#include <set>

using namespace std;

int main(){
    int x, v1, res = 0;
    
    cin >> x;

    set <int> st;

    for(int i = 0; i < x; i++){
        cin >> v1;
        if(st.find(v1) == st.end()){
            st.insert(v1);
            res += 2;
        }else{
            st.erase(v1);
        }
    }
    cout << res << endl;
}
