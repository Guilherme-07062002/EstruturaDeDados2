#include <iostream>
#include <string>

using namespace std;

struct Pessoa {
    string nome;
    int idade;
    Pessoa* proximo;
};

int main(){
    Pessoa pessoa1;
    pessoa1.nome = "Jurema";
    pessoa1.idade = 40;
    pessoa1.proximo = nullptr;

    Pessoa pessoa2;
    pessoa2.nome = "Jandir";
    pessoa2.idade = 60;
    pessoa1.proximo = &pessoa2;
    pessoa2.proximo = nullptr;

    Pessoa pessoa3;
    pessoa3.nome = "Batista";
    pessoa3.idade = 50;
    pessoa2.proximo = &pessoa3;
    pessoa3.proximo = nullptr;

    Pessoa* currentNode = &pessoa1;
    while(currentNode != nullptr){
        cout << "{ nome: " << currentNode->nome << ", idade: " << currentNode->idade << " } " << endl;
        currentNode = currentNode->proximo;
    }

     while(currentNode != nullptr){
        Pessoa* proximaPessoa = currentNode->proximo;
        delete currentNode;
        currentNode = proximaPessoa;
    }

    return 0;
}