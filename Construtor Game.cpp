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
    
    // Método, público
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
