#include <iostream> 
#include <set>

using namespace std;

int main(){
    int x, y, v1, aux;
    
    cin >> x >> y;
    
    set <int> st1;
    set <int> st2;
    
    for(int i = 0; i < x; i++){
        cin >> v1;
        st1.insert(v1);
    }
    for(int i = 0; i < y; i++){
        cin >> v1;
        st2.insert(v1);
    }

    auto ptr = st1.begin();
    auto ptr2 = st2.begin();

    int r1 = st1.size();
    int r2 = st2.size();

    for(int i = 0; i < st1.size(); i++){
        aux = *ptr;
        if(st2.find(aux) != st2.end()){
            r1--;
        }
        ptr++;
    }

    for(int i = 0; i < st2.size(); i++){
        aux = *ptr2;
        if(st1.find(aux) != st1.end()){
            r2--;
        }
        ptr2++;
    }

    if(r1 >= r2){
        cout << r2 << endl;
    }else{
        cout << r1 << endl;
    }

}
