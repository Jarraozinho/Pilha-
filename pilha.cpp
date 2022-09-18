#include<iostream>
using namespace std;

using namespace std;

   pilha::pilha() // pilha :: refere se ao nome da classe e posteriomente o nome da funcao
   {
       tamanho = 0;
       estrutura = new Tipoitem[max_itens]
   }

   pilha::~pilha()
   {
       delete[] estrurura;
   }

   bool pilha::estacheia()
   {
       return (tamanho == max_itens);
   }

   bool pilha::estavazia()
   {
       return(tamanho == 0);
   }

   void pilha::inserir(Tipoitem)
   {
       if (estacheia()){
        cout << "A pilha esta cheia " << endl;
        cout << "Nao e possivel inserir novos elementos" << endl;
       }else{
        estrutura[tamanho] = item;
        tamanho++;
       }
   }

   Tipoitem pilha::remover()
   {
       if(estavazia()){
         cout << "A pilha esta vazia " << endl;
         cout << "Nao tem elemento para ser removido" << endl;
       } else{
         return estrutura[tamanho-1];
         tamanho--;
       }
   }

   void pilha::imprimir()
   {
       cout << "Pilha : [";
       for (int i=0; i< tamanho ; i++){
         cout << estrutura[i] << "  ";
       }
       cout << "]" << endl;
   }

   int pilha::qualtamanho(){

       return tamanho;
   }
