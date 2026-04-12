#include <iostream> // Biblioteca para entrada e saída de dados
#include <cstdlib> // Biblioteca para funções de controle de processo, como system("pause") e system("cls")
#include <ctime> // Biblioteca para manipulação de data e hora, usada para gerar números aleatórios
#include <string> // Biblioteca para manipulação de strings, usada para armazenar nomes e naipes das cartas
#include <iomanip> // Biblioteca para manipulação de entrada e saída formatada, usada para imprimir o saldo com duas casas decimais
#include <fstream> // Biblioteca para manipulação de arquivos, usada para salvar e carregar o saldo do jogador
using namespace std;
class Jogador {
private:
    string nome, cargo, arquetipo;
    float nivel, partidaganha = 0;

public:
    virtual ~Jogador() {}

    void setNome(string n) { nome = n; }
    string getNome() { return nome; }

    void setCargo(string c) { cargo = c; }
    string getCargo() { return cargo; }

    void setNivel(float n) { nivel = n; }
    float getNivel() { return nivel; }

    void setArquetipo(string a) { arquetipo = a; }
    string getArquetipo() { return arquetipo; }

    virtual void exibirArquetipo() {}
    virtual void exibirBonus() {}

    void setPartidasVencidas(float pg) { partidaganha = pg; }
    float getPartidasVencidas() { return partidaganha; }
};
class Emissor : public Jogador {
    private:
    float bonusXP = 7;
    public:
    void exibirArquetipo() override {
        cout << "                Emissor                " << endl;
    }
    void exibirBonus() override {
        cout << "[ARQUÉTIPO EMISSOR]" << endl;
        cout << "Bônus de XP para Emissor: " << bonusXP << "%" << endl;
    }
    void classEmissor() {
    cout << "==================================================" << endl;
    cout << "                Perfil do Emissor                " << endl;
    cout << "Jogador que domina pela branca e posicionamento." << endl;
    cout << "O jogo é decidido antes da bola. " << endl;   
    cout << "Características do Emissor:" << endl;
    cout << "- Consistência. " << endl;
    cout << "- Leitura de mesa." << endl;
    cout << "- Controle fino." << endl;
    cout << "Estratégias para jogar como Emissor:" << endl;
    cout << "- Controlar ritmo." << endl;
    cout << "- Garantir posição sempre." << endl;
    cout << "- Evitar riscos desnecessários." << endl;
    cout << "==================================================" << endl;
    }
};

class Reforco : public Jogador {
    private:
    float bonusXP = 5;
    public:
    void exibirArquetipo() override {
        cout << "                Reforço                " << endl;
    }
    void exibirBonus() override {
        cout << "[ARQUÉTIPO REFORÇO]" << endl;
        cout << "Bônus de XP para Reforço: " << bonusXP << "%" << endl;
    }
    void classReforco() {
    cout << "==================================================" << endl;
    cout << "                Perfil do Reforço                " << endl;
    cout << "Jogador focado em execução direta. Resolve o jogo na tacada." << endl;
    cout << "Se eu enxergar… eu mato." << endl;   
    cout << "Características do Reforço:" << endl;
    cout << "- Alta precisão. " << endl;
    cout << "- Agressividade." << endl;
    cout << "- Assumir risco calculado." << endl;
    cout << "Estratégias para jogar como Reforço:" << endl;
    cout << "- Dominar pela sequência." << endl;
    cout << "- Finalizar rapidamente." << endl;
    cout << "- Assumir risco calculado ." << endl;
    cout << "==================================================" << endl;
    }
};
class Manipulador : public Jogador {
    private:
    float bonusXP = 10;
    public:
    void exibirArquetipo() override {
        cout << "                Manipulador                " << endl;
    }
    void exibirBonus() override {
        cout << "[ARQUÉTIPO MANIPULADOR]" << endl;
        cout << "Bônus de XP para Manipulador: " << bonusXP << "%" << endl;
    }
   void classManipulador() {
    cout << "==================================================" << endl;
    cout << "                Perfil do Manipulador                " << endl;
    cout << "Jogador que vence tirando o jogo do adversário." << endl;
    cout << "Você perde antes de perceber." << endl;   
    cout << "Características do Manipulador:" << endl;
    cout << "- travar mesa" << endl;
    cout << "- Utiliza estratégias para manipular os adversários, como defesas e jogadas imprevisíveis." << endl;
    cout << " " << endl; 
    cout << "Estratégias para jogar como Manipulador:" << endl;
    cout << "- Travar mesa." << endl;
    cout << "- Forçar erro." << endl;
    cout << "- jogar no desgaste." << endl;
    cout << "==================================================" << endl;
    }
};

class Transmutador : public Jogador {

private: 
float bonusXP = 8;
public :
  void exibirArquetipo() override {
        cout << "                Transmutador                " << endl;
    }
    void exibirBonus() override {
        cout << "[ARQUÉTIPO TRANSMUTADOR]" << endl;
        cout << "Bônus de XP para Transmutador: " << bonusXP << "%" << endl;
    }
   void classTransmutador() {
    cout << "==================================================" << endl;
    cout << "                Perfil do Transmutador                " << endl;
    cout << "Jogador imprevisível que usa efeitos e soluções únicas." << endl;
    cout << "Existe sempre outra linha." << endl;   
    cout << "Características do Transmutador:" << endl;
    cout << "- Criatividade." << endl;
    cout << "- Improviso." << endl;
    cout << "- Improviso" << endl; 
    cout << "Estratégias para jogar como Transmutador:" << endl;
    cout << "- Criar jogadas não óbvias" << endl;
    cout << "- Usar efeito como arma" << endl;
    cout << "- Quebrar padrões" << endl;
    cout << "==================================================" << endl;
    }
};

class Materializador : public Jogador {

private: 
float bonusXP = 8;
public :
  void exibirArquetipo() override {
        cout << "                Materializador                " << endl;
    }
    void exibirBonus() override {
        cout << "[ARQUÉTIPO MATERIALIZADOR]" << endl;
        cout << "Bônus de XP para Materializador: " << bonusXP << "%" << endl;
    }
   void classMaterializador() {
    cout << "==================================================" << endl;
    cout << "                Perfil do Materializador                " << endl;
    cout << "Especialista em jogadas indiretas e leitura de ângulos complexos." << endl;
    cout << "A mesa inteira é minha aliada." << endl;   
    cout << "Características do Materializador:" << endl;
    cout << "- Visão espacial." << endl;
    cout << "- Precisão indireta." << endl;
    cout << "- Cálculo" << endl; 
    cout << "Estratégias para jogar como Materializador:" << endl;
    cout << "- Usar tabelas" << endl;
    cout << "- Resolver bolas difíceis" << endl;
    cout << "- Explorar geometrias da mesa" << endl;
    cout << "==================================================" << endl;
    }
};

class Especialista : public Jogador {

private: 
float bonusXP = 12;
public :
  void exibirArquetipo() override {
        cout << "                Especialista                " << endl;
    }
    void exibirBonus() override {
        cout << "[ARQUÉTIPO ESPECIALISTA]" << endl;
        cout << "Bônus de XP para Especialista: " << bonusXP << "%" << endl;
    }
   void classEspecialista() {
    cout << "==================================================" << endl;
    cout << "                Perfil do Especialista                " << endl;
    cout << "Jogador raro que domina todos os aspectos do jogo." << endl;
    cout << "Eu jogo o jogo certo." << endl;   
    cout << "Características do Especialista:" << endl;
    cout << "- Versatilidade." << endl;
    cout << "- Leitura profunda." << endl;
    cout << "- Consistência elite." << endl; 
    cout << "Estratégias para jogar como Especialista:" << endl;
    cout << "- Adaptar ao adversário." << endl;
    cout << "- jogar o que a partida pede." << endl;
    cout << "- Alternar estilos." << endl;
    cout << "==================================================" << endl;
    }
};



//============================================================
int main(){
    Jogador* jogador[100];
int opcao;
int totaldejogadores = 0;
    cout << fixed << setprecision(2);
while (true){

cout << "==================================================" << endl;
cout << "          Bem Vindo - O Operador de Mesa          " << endl;
cout << "     Você não joga sinuca, você opera um sistema  " << endl;
cout << "==================================================" << endl;
cout << "1- Apostar " << endl;
cout << "2- Listar Classes" << endl;
cout << "3- Editar Jogadores" << endl;
cout << "4- Ranking" << endl;
cout << "5- Sair" << endl;

cin >> opcao;
switch(opcao) {

    case 1: {
    string nome1, nome2;
    int partidas;
    int vitorias1 = 0, vitorias2 = 0;
    int aposta;
    double reais;

    cout << "Criando a partida!" << endl;
    cout << "Digite o nome do Jogador 1: " << endl;
    cin >> nome1;

    cout << "Digite o nome do Jogador 2: " << endl;
    cin >> nome2;

    cout << "Digite a quantidade de partidas a serem jogadas: " << endl;
    cin >> partidas;

    cout << "A partida entre " << nome1 << " e " << nome2 << " foi criada!" << endl;

    cout << "Deseja apostar em quem? " << endl;
    cout << "1- " << nome1 << endl;
    cout << "2- " << nome2 << endl;
    cin >> aposta;

    cout << "Deseja apostar quantos reais?" << endl;
    cin >> reais;

    cout << "A aposta foi feita! Voce apostou em: "
         << (aposta == 1 ? nome1 : nome2)
         << " // MD" << partidas
         << " // R$" << reais << endl;

    system("pause");
    system("cls");

    for (int i = 0; i < partidas; i++) {
        cout << "Partida: " << i + 1 << endl;
        cout << nome1 << " " << vitorias1 << " x " << vitorias2 << " " << nome2 << endl;

        cout << "Quem venceu a partida? " << endl;
        cout << "1- " << nome1 << endl;
        cout << "2- " << nome2 << endl;

        int vencedor;
        cin >> vencedor;

        if (vencedor == 1) {
            vitorias1++;
        } else if (vencedor == 2) {
            vitorias2++;
        } else {
            cout << "Opcao invalida!" << endl;
            i--; // repete a rodada
            continue;
        }
    }

    // vencedor da partida
    int vencedorFinal;

    if (vitorias1 > vitorias2) {
        cout << nome1 << " venceu a serie!" << endl;
        vencedorFinal = 1;
    } else if (vitorias2 > vitorias1) {
        cout << nome2 << " venceu a serie!" << endl;
        vencedorFinal = 2;
    } else {
        cout << "Empate!" << endl;
        vencedorFinal = 0;
    }

    // Atualiza partidas ganhas 
    if (vencedorFinal == 1) {
        for (int i = 0; i < totaldejogadores; i++) {
            if (jogador[i]->getNome() == nome1) {
                jogador[i]->setPartidasVencidas(
                    jogador[i]->getPartidasVencidas() + 1
                );
                break;
            }
        }
    } 
    else if (vencedorFinal == 2) {
        for (int i = 0; i < totaldejogadores; i++) {
            if (jogador[i]->getNome() == nome2) {
                jogador[i]->setPartidasVencidas(
                    jogador[i]->getPartidasVencidas() + 1
                );
                break;
            }
        }
    }

    // resultado
    if (vencedorFinal == aposta) {
        cout << "Voce ganhou a aposta! +" << reais << " reais!" << endl;
    } else if (vencedorFinal != 0) {
        cout << "Voce perdeu a aposta! -" << reais << " reais!" << endl;
    } else {
        cout << "Aposta anulada (empate)." << endl;
    }

    system("pause");
    system("cls");
    break;
}
    case 2: {
        bool noMenuClasses = true;
        
        while (noMenuClasses) {
            int num;
            cout << "==================================================" << endl;
            cout << "                Classes Disponíveis                " << endl;
            cout << "1- Emissor" << endl;
            cout << "2- Reforço" << endl;
            cout << "3- Manipulador" << endl;
            cout << "4- Transmutador" << endl;
            cout << "5- Materializador" << endl;
            cout << "6- Especialista" << endl;
            cout << "7- Voltar" << endl;
            cout << "==================================================" << endl;
            cin >> num;

            switch(num) {
                case 1: {
                    Emissor emissor;
                    emissor.classEmissor();
                    break;
                }
                case 2: {
                    Reforco reforco;
                    reforco.classReforco();
                    break;
                }
                case 3: {
                    Manipulador manipulador;
                    manipulador.classManipulador();
                    break;
                }
                case 4: {
                    Transmutador transmutador;
                    transmutador.classTransmutador();
                    break;
                }
                case 5: {
                    Materializador materializador; 
                    materializador.classMaterializador();
                    break;
                }
                case 6: {
                    Especialista especialista;
                    especialista.classEspecialista();
                    break;
                }
                case 7: {
                    noMenuClasses = false;
                    break;
                }
                default: {
                    cout << "Opcao invalida!" << endl;
                    break;
                }
            } 
            
            if (noMenuClasses) {
                system("pause");
                system("cls");
            }
        } 
        
        system("cls");
        break;
    } 
   case 3: {
        int arquetipo;
        string nome_temp, cargo_temp;
        float nivel_temp;
   
    
    if (totaldejogadores >= 100) {
        cout << "Limite de Jogadores atingido!" << endl;
    } else {
    cout << "Digite o nome do Jogador: " << endl;
    cin >> nome_temp;
    cout << "Escolha o nivel do " << nome_temp << ":" << endl;
    cout << "0 .. 2.9 - Iniciante" << endl;
    cout << "3 .. 3.9 - Intermediário" << endl;
    cout << "4 .. 4.9 - Competitivo Base" << endl;
    cout << "5 .. 6.9 - Competitivo Forte" << endl;
    cout << "7 .. 8.9 - Elite" << endl;
    cout << "9 + - Lendário" << endl;
    cin >> nivel_temp;
    if (nivel_temp > 0 && nivel_temp < 3.0) {
        cout << "Jogador é Iniciante!" << endl;
      cargo_temp = "Iniciante";
    } else if (nivel_temp >= 3 && nivel_temp < 4.0) {
        cout << "Jogador é Intermediário!" << endl;
       cargo_temp = "Intermediário";  
    } else if (nivel_temp >= 4 && nivel_temp < 5.0) {
        cout << "Jogador é Competitivo Base!" << endl;
        cargo_temp = "Competitivo Base";
    } else if (nivel_temp >= 5 && nivel_temp < 7.0) {
        cout << "Jogador é Competitivo Forte!" << endl;
        cargo_temp = "Competitivo Forte";
    } else if (nivel_temp >= 7 && nivel_temp < 9.0) {
        cout << "Jogador é Elite!" << endl;
        cargo_temp = "Elite";
    } else if (nivel_temp >= 9) {
        cout << "Jogador é Lendário!" << endl;
        cargo_temp = "Lendário";
    } else {
        cout << "Nivel Invalido. Digite um valor entre 0 e 10." << endl;
        continue;
    }     
    cout << "Qual é o arquétipo do jogador?" << endl;
    cout << "1- Emissor" << endl;
    cout << "2- Reforço" << endl;
    cout << "3- Manipulador" << endl;
    cout << "4- Transmutador" << endl;
    cout << "5- Materializador" << endl;
    cout << "6- Especialista" << endl;
    cin >> arquetipo;
    switch(arquetipo) {
        case 1: {
            jogador[totaldejogadores] = new Emissor();
            jogador[totaldejogadores]->setArquetipo("Emissor");
break;         
        }
        case 2: {
            jogador[totaldejogadores] = new Reforco();
            jogador[totaldejogadores]->setArquetipo("Reforço");
break;
        }
        case 3: {
            jogador[totaldejogadores] = new Manipulador();
            jogador[totaldejogadores]->setArquetipo("Manipulador");
break;
        }
        case 4: {
            jogador[totaldejogadores] = new Transmutador();
            jogador[totaldejogadores]->setArquetipo("Transmutador");
break;
        }
        case 5: {
            jogador[totaldejogadores] = new Materializador();
            jogador[totaldejogadores] ->setArquetipo("Materializador");
break;
        }
        case 6: {
            jogador[totaldejogadores] = new Especialista();
            jogador[totaldejogadores] ->setArquetipo("Especialista");
break;
        }
    }
    jogador[totaldejogadores]->setNome(nome_temp);
    jogador[totaldejogadores]->setNivel(nivel_temp);
    jogador[totaldejogadores]->setCargo(cargo_temp);
    cout << jogador[totaldejogadores]->getNome() << " foi adicionado com sucesso!" << endl;
    totaldejogadores++;
}
system("pause");
system("cls");
break;
}
        case 4: {

        for (int i = 0 ; i < totaldejogadores ; i++){			
			for(int j = 1 + i; j < (totaldejogadores) ; j++ ){
				if(jogador[i]->getNivel() < jogador[j]->getNivel()){
					swap(jogador[i], jogador[j]);
				}
			}
		}

     for (int j = 0 ; j < totaldejogadores; j++){
    cout << "-----------------------------" << endl;
    cout << "Jogador " << j+1 << ":" << endl;
    cout << "Nome: " << jogador[j]->getNome() << endl;
    cout << "Nível: " << jogador[j]->getNivel() << endl;
    cout << "Cargo: " << jogador[j]->getCargo() << endl;
    cout << "Habilidades Especiais: " << endl;
    jogador[j]->exibirBonus();
}
    break;
    }
case 5:
        cout << "Saindo..." << endl;
        exit(0);
}
}
system("pause");
return 0;
}