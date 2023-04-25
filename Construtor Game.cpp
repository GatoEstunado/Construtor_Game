#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Criar a classe, "JogoAdivinhacao"
class JogoAdivinhacao {
    
    // Variáveis, de forma privada
    private:
    int numeroSecreto;
    int tentativas;
    
    // "Construtor" da classe, público
    public:
    JogoAdivinhacao() {
        // Definir o método de "JogoAdivinhacao", o que ele deve realizar
        srand (time(0));
        numeroSecreto = rand() % 100 + 1;
        tentativas = 0;
    }
    
    // Método do programa para executa-lo
    void jogar() {
        
        // Interface do usuário, recebimento de dados e condições
        int palpite;
        do {
            cout << "Digite um número entre 1 e 100: ";
            cin >> palpite;
            tentativas++;
            if (palpite < numeroSecreto) {
                cout << "O número secreto é maior!" << endl;
            } else if (palpite > numeroSecreto) {
                cout << "O número secreto é menor!" << endl;
            } else {
                cout << "Parabéns, você acertou o número em " << tentativas << " tentativas!" << endl;
            }
            // Condição do "while" para que o programa se repita até que o número seja advinhado
            } while (palpite != numeroSecreto);
        }
            
    };

// Programa principal que rodará o código
int main () {
    JogoAdivinhacao jogo;
    jogo.jogar();
    return 0;
}

/* O "Construtor" nos ajuda a realizar a criação de uma instância com maior facilidade, com a "Forma de bolo", geramos a "Classe" e então um "Construtor" 
a partir dela, que gerará uma classe pré-definida...
   Como por exemplo, 'Class Peixe' -> 'Peixe ()' -> Colocamos sua definição base -> Criamos uma nova classe Peixe2, não definimos sua caracteristícas e executamos 
ela -> Ela nos dará os valores colocados no construtor "Peixe ()". 
   Em um jogo, ele poderia ser usado na ressureição do jogador, como no PACMAN, ou para gerar uma personagem "Random", como quando fazemos em jogos tipo Terraria, 
ARK ou Conan Exiles. */
