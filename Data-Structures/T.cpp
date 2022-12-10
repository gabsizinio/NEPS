#include <iostream>
#include <stdexcept>

using namespace std;

template <typename T>
class MyVector
{

    T *data;
    int current_size;
    int max_size;

public:
    MyVector()
    {
        this->max_size = 4;
        this->data = new T[this->max_size];
        this->current_size = 0;
    }

    T operator[](int i)
    {
        if (i < this->current_size)
        {
            return this->data[i];
        }

        throw out_of_range("Index out of range!");
    }

	void push_back(T value)
{
    // Verifica se precisamos aumentar o espaço no vetor;
    if (this->current_size >= this->max_size)
    {
        // Armazena a referência para data
        T *backup = this->data;

        // Dobra o tamanho da quantidade que podemos armazenar no vetor e redimenciona o vetor data
        this->max_size *= 2;
        this->data = new T[this->max_size];

        // Copia os valores de volta
        for (int i = 0; i < this->current_size; i++)
        {
            this->data[i] = backup[i];
        }
    }

    // Adiciona o dado e aumenta o tamanho
    this->data[this->current_size] = value;
    this->current_size++;
}   
void pop_back()
{
    if (this->current_size > 0)
    {
        this->current_size--;
    }
}

void resize(int new_size)
{
    // Armazena a referência para data
    T *backup = this->data;

    // Dobra o tamanho da quantidade que podemos armazenar no vetor e redimenciona o vetor data
    this->max_size = new_size;

    // Verifica se o novo tamanho é menor que o tamanho anterior. 
    if (this->max_size < this->current_size)
    {
        this->current_size = this->max_size;
    }

    this->data = new T[this->max_size];

    // Copia os valores de volta
    for (int i = 0; i < this->current_size; i++)
    {
        this->data[i] = backup[i];
    }
}
int size()
{
    return this->current_size;
}

};

int main()
{

    MyVector<int> V;
    cout << V[0] << endl;

    return 0;
}
