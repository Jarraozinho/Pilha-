#include<iostream>
using namespace std;

typedef int Tipoitem;
const int max_itens = 12;

class pilha{
    int tamanho ;
    Tipoitem* estrutura ;

    pilha(); // contrutora // stack
    ~pilha(); // destrutora // ~stack
    bool estacheia(); // verifica se ta cheia // isfull
    bool estavazia(); // verifica se a pilha ta vazia  // isempty
    void inserir(Tipoitem item) ; // push
    void remover(); // pop
    void imprimir(); // print
    int qualtamanho();  // lent


};
