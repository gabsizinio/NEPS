#include <stdio.h>
#include <stdlib.h>

class Personagem {
protected:
    int vida;
    int defesa;

    int quantidade_ataques;    
    int *ataques;

    void recebe_golpe(Personagem B);
    void golpear(Personagem B);

public:
    int get_vida(){
        return vida;
    }    

    void receber_dano(int dano){
        this->vida -= (dano - defesa) > 0 ? (dano - defesa) : 0;
    }

    int* get_ataques(){
        return ataques;
    }
};

class Heroi : public Personagem {

public:
    //TODO: Implemente o construtor da classe Heroi. Lembre-se que o herói tem duas opções de ataque.
    Heroi(int vida, int defesa, int ataque1, int ataque2){
        this->vida = vida;
        this->defesa = defesa;
        this->quantidade_ataques = 2;
        this->ataques = new int[2];
        this->ataques[0] = ataque1;
        this->ataques[1] = ataque2;
    }

    //TODO: Implemente o   método golpear, Lembre-se que o herói tem duas opções de ataque.
    void golpear(Personagem &B, int opcao){
        B.receber_dano(this->ataques[opcao]);

    }

};


class Inimigo : public Personagem {

public:
    //TODO: Implemente o construtor da classe Inimigo. Lembre-se que o inimigo tem apenas uma opção de ataque.
    Inimigo(int vida, int defesa, int ataque){   
        this->vida = vida;
        this->defesa = defesa;
        this->quantidade_ataques = 1; 
        this->ataques = new int[1];
        this->ataques[0] = ataque;
    }

    //TODO: Implemente o método golpear da classe Inimigo.
    void golpear(Personagem &B){
        B.receber_dano(*ataques);
    }

};

int main(){
    
    int vida, defesa, ataque1, ataque2;

    scanf("%d %d %d %d", &vida, &defesa, &ataque1, &ataque2);
    
    Heroi heroi = Heroi(vida, defesa, ataque1, ataque2);    

    scanf("%d %d %d", &vida, &defesa, &ataque1);

    Inimigo inimigo = Inimigo(vida, defesa, ataque1);

    int rounds, opcao;
    scanf("%d", &rounds);
    for(int i=0; i < rounds and inimigo.get_vida() > 0 and heroi.get_vida() > 0; i++){        

        scanf("%d", &opcao);
        heroi.golpear(inimigo, opcao);        
        inimigo.golpear(heroi);               

    }

    if ((heroi.get_vida() <= 0 and inimigo.get_vida() <= 0) or (heroi.get_vida() > 0 and inimigo.get_vida() > 0)){
        printf("EMPATE\n");
    }else if (heroi.get_vida() > 0){
        printf("HEROI\n");
    }else {
        printf("INIMIGO\n");
    }
}