#include <stdio.h>

class Horario{
public:
    int horas, minutos, segundos;

    Horario(){}

    Horario(int horas, int minutos, int segundos ){
        this->horas = horas;
        this->minutos = minutos;
        this->segundos = segundos;
    }

    //TODO: Implementar o operador de adição.
    Horario operator + (Horario b){
        int hor, min, seg;
        hor = horas + b.horas;
        min = minutos + b.minutos;
        seg = segundos + b.segundos;
        if(seg >= 60){
            min += 1;
            seg -= 60;
        }
        if(min >= 60){
            hor += 1;
            min -= 60;
        }
        if(hor >= 24){
            hor -= 24;
        }
        if(hor < 0){
            hor += 24;
        }
        return Horario(hor, min, seg);
    }

    //TODO: Implementar o operador de subtração.
    Horario operator - (Horario b){
        int hor, min, seg;
        if(b.segundos > segundos){
            minutos--;
            segundos += 60;
        }
        seg = segundos - b.segundos;
        if(b.minutos > minutos){
            horas--;
            minutos += 60;
        }
        min = minutos - b.minutos;
        hor = horas - b.horas;
        if(hor < 0){
            hor += 24;
        }
        return Horario(hor, min, seg);
    }

};

int main(){
    Horario a, b, c;
    char op;

    scanf("%d:%d:%d", &a.horas, &a.minutos, &a.segundos);
    scanf("%d:%d:%d", &b.horas, &b.minutos, &b.segundos);
    scanf(" %c", &op);

    if(op == 'A'){
        c = a + b;
    } else if(op == 'S'){
        c = a - b;
    }

    printf("%02d:%02d:%02d\n", c.horas, c.minutos, c.segundos);
}