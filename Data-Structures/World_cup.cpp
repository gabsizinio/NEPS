#include <iostream>
#include <list>

using namespace std;

int main(){
    list <string> alf;
    int x, y, i;

    alf.push_back("A");
    alf.push_back("B");
    alf.push_back("C");
    alf.push_back("D");
    alf.push_back("E");
    alf.push_back("F");
    alf.push_back("G");
    alf.push_back("H");
    alf.push_back("I");
    alf.push_back("J");
    alf.push_back("K");
    alf.push_back("L");
    alf.push_back("M");
    alf.push_back("N");
    alf.push_back("O");
    alf.push_back("P");

    auto pon = alf.begin();
    auto aux = alf.begin();
    
    //Oitavas
    for(i = 0; i < 8; i++){
        cin >> x >> y;
        if(x < y){
            aux = pon;
            pon++;
            pon++;
            alf.erase(aux);
        }else{
            pon++;
            aux = pon;
            pon++;
            alf.erase(aux);
        }
    }

    pon = alf.begin();

    //Quartas
    for(i = 0; i < 4; i++){
        cin >> x >> y;
        if(x < y){
            aux = pon;
            pon++;
            pon++;
            alf.erase(aux);
        }else{
            pon++;
            aux = pon;
            pon++;
            alf.erase(aux);
        }    
    }

    pon = alf.begin();

    //Semi
    for(i = 0; i < 2; i++){
        cin >> x >> y;
        if(x < y){
            aux = pon;
            pon++;
            pon++;
            alf.erase(aux);
        }else{
            pon++;
            aux = pon;
            pon++;
            alf.erase(aux);
        }
    }

    pon = alf.begin();

    //Final
    cin >> x >> y;
    if(x < y){
        aux = pon;
        pon++;
        pon++;
        alf.erase(aux);
    }else{
        pon++;
        aux = pon;
        pon++;
        alf.erase(aux);
    }

    pon = alf.begin();

    cout << *pon;

    return 0;
}