#include <iostream>
#include <memory>

class Carro{
	public:
		int velocidade = 0;
		int getVelocidade(){
			return velocidade;
		}
		void setVelocidade(int _velocidade){
			this->velocidade = _velocidade;
		}
};

int main(int argc, char *argv[]){
	
	//Um ponteiro único não pode ser atribuído a outro ponteiro, só se ele for compartilhado
	
	std::unique_ptr<int> pnum(new int(10)); //Crio um ponteiro único com um valor pré-determinado

	std::shared_ptr<int> sharedPointer1(new int(20));
	std::shared_ptr<int> sharedPointer2 = sharedPointer1;

	std::cout << "Valor de pnum: " << *pnum << "\nEndereço de pnum: " << &pnum << "\n\n";
	// Não é preciso apagar o ponteiro, porque ele já faz isso automaticamente
	
	std::cout << "Valor do meu ponteiro compartilhado: " << *sharedPointer2 << "\n\n";

	//Para strings:
	std::unique_ptr<std::string> texto(new std::string("Bebel"));

	std::cout << *texto << "\nTamanho: " << texto->size() << "\n\n";

	//Para classes:
	std::shared_ptr<Carro> fusca(new Carro());
	std::shared_ptr<Carro> sharedFusca = fusca;

	std::cout << "Velocidade atual do fusca: " << fusca->getVelocidade() << std::endl;

	sharedFusca->setVelocidade(10);
	
	std::cout << "Velocidade atual do fusca: " << fusca->getVelocidade() << "\n\n";

	return 0;
}

