#ifndef VEICULO_H
#define VEICULO_H

class Veiculo{
	public:
		int velocidade;
		int tipo;

		Veiculo(int _tipo);		

		int getVelocidadeMax(); //Para manipular e ter acesso a propriedades privadas, devo usar get e set		
		bool getLigado();
		void setLigado(int l);
		std::string getNome();



	private:		
		std::string nome;
		int velocidadeMax;
		bool ligado;

		void setVelocidadeMax(int _velocidadeMax);
	

};

Veiculo::Veiculo(int _tipo){
	this->ligado = false;
	this->tipo = _tipo;

	if(tipo == 1){
		this->nome = "Carro";
		setVelocidadeMax(200);
	}else if(tipo == 2){
		this->nome = "Aviao";
		setVelocidadeMax(800);
	}else{
		this->nome = "Navio";
		setVelocidadeMax(40);
	}
}

bool Veiculo::getLigado(){
	return this->ligado;
}

void Veiculo::setLigado(int l){
	this->ligado = (l == 1)? true : false;
}

int Veiculo::getVelocidadeMax(){
	return this->velocidadeMax; 
}

void Veiculo::setVelocidadeMax(int _velocidadeMax){
	this->velocidadeMax = _velocidadeMax;
}

std::string Veiculo::getNome(){
	return this->nome; 
}
#endif
