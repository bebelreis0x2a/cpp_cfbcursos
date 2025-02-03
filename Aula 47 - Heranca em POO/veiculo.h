#ifndef VEICULO_H
#define VEICULO_H

class Veiculo{ // Classe pai
	public:
		int velocidade, blindagem, rodas;
	
		void setTipo(std::string _tipo);
		void setVelocidadeMax(int _velocidadeMax);
		void setArmamento(bool _armamento);

		std::string getTipo();
		int getVelocidadeMax();
		bool getArmamento();

		void mostrar();
	private:
		std::string tipo;
		int velocidadeMax;
		bool armamento;
};

// A herança é quando uma classe herda características de outra

void Veiculo::mostrar(){
	std::cout << "Tipo...........: " << this->getTipo() << std::endl;
	std::cout << "Velocidade Max.: " << this->getVelocidadeMax() << std::endl;
	std::cout << "Quant. de rodas: " << this->rodas << std::endl;
	std::cout << "Blindagem......: " << this->blindagem << std::endl;
	std::cout << "Se há armamento: " << this->getArmamento() << std::endl;
	std::cout << "-----------------------------------------" << std::endl;
	
}

std::string Veiculo::getTipo(){
	return this->tipo;
}

int Veiculo::getVelocidadeMax(){
	return this->velocidadeMax;
}

bool Veiculo::getArmamento(){
	return this->armamento;
}
void Veiculo::setTipo(std::string _tipo){
	this->tipo = _tipo;
}

void Veiculo::setVelocidadeMax(int _velocidadeMax){
	this->velocidadeMax = _velocidadeMax;
}

void Veiculo::setArmamento(bool _armamento){
	this->armamento = _armamento;
}

class Moto:public Veiculo{ //Classe veículo
	public:
		Moto();	
};

Moto::Moto(){
	this->velocidade = 0;
	this->blindagem = 0;
	this->rodas = 2;
	this->setTipo("Moto");
	this->setVelocidadeMax(120);
	this->setArmamento(false);
}

class Carro:public Veiculo{ //Classe veículo
	public:
		Carro();	
};

Carro::Carro(){
	this->velocidade = 0;
	this->blindagem = 0;
	this->rodas = 4;
	this->setTipo("Carro");
	this->setVelocidadeMax(200);
	this->setArmamento(false);
}

class Tanque:public Veiculo{ //Classe veículo
	public:
		Tanque();
			
};

Tanque::Tanque(){
	this->velocidade = 0;
	this->blindagem = 1;
	this->rodas = 8;
	this->setTipo("Tanque");
	this->setVelocidadeMax(100);
	this->setArmamento(true);
}
#endif
