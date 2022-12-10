#include <stdio.h>

class Inimigo {    
    int id;
    int x; 
    int y;
    bool vivo;


public:
    Inimigo(){

    }

    //TODO: Crie um construtor que inicializa um inimigo usando os parâmetros abaixo.
    Inimigo(int id, int x, int y, bool vivo){    
        this->id = id;
        this->x = x;
        this->y = y;
        this->vivo = vivo;   
    }

    //TODO: Crie um método que muda a o status do inimigo de vivo para morto caso seja acertado pelo lazer na posição (X,Y).
    //Retorna true caso o inimigo tenha sido acertado pela primeira vez e falso caso contrário.
    bool foi_acertado(int x, int y){  
        //printf("%d %d\n", this->x, this->y);
        //printf("%d %d\n", x, y);
        if(this->x == x && this->y == y && this->vivo == true){
            this->vivo = false;
            return true;
        }else{
            return false;
        }
    }    
};



class Fase{

    Inimigo *inimigos;
    int quantidade_inimigos;
    int pontos; 
    int municao;

public:
    Fase(int quantidade_inimigos, int municao){
        this->inimigos = new Inimigo[quantidade_inimigos];        
        this->quantidade_inimigos = quantidade_inimigos;
        this->pontos = 0;
        this->municao = municao;
    }

    //TODO: Crie um método quer ler as coordenadas do inimigos (conforme a descrição de entrada) e inicialize o vetor inimigos utilizando o construtor da classe Inimigo.
    void inicializar_inimigos(){   
        int x1, y1;     
        for(int i = 0; i < this->quantidade_inimigos; i++){
            scanf("%d %d", &x1, &y1);
            this->inimigos[i] = Inimigo(i, x1, y1, true);
            
        }
    }

    //TODO: Crie um método que simula as T tentativas de disparos, caso o disparo acerte um inimigo incremente a pontuação em 10 pontos. Seu método deve ler as coordenadas dos disparos conforme o exemplo de entrada.
    //Dica: Lembre-se que o jogador só tem M munições por fase e ele não deve ser capaz de disparar após a munição acabar.
    void jogar(int T){
        int x1, y1;
        bool aux;
        for(int i = 0; i < T ; i++){
            scanf("%d %d", &x1, &y1);
            if(this->municao == 0){
                continue;
            }
            for(int k = 0; k < quantidade_inimigos; k++){
                aux = inimigos[k].foi_acertado(x1, y1);
                if(aux == true){
                    this->pontos += 10;
                }
            }
            this->municao--;
        }       
    }
    void imprimir_relatorio(){
        //Crie um for que imprime todos os inimigos que foram acertados e morreram.
        printf("Relatorio da Fase\n");
        printf("Pontuacao: %d\n", this->pontos);
        printf("Municao: %d\n", this->municao);
    }

};

int main(){

    int N; //Quantidade de Inimigos
    int M; //Quantidade de Munição

    scanf("%d %d", &N, &M); 

    Fase fase = Fase(N, M);

    fase.inicializar_inimigos();

    int T; //Quantidade de Tentativas
    scanf("%d", &T); 

    fase.jogar(T);
    fase.imprimir_relatorio();        
}