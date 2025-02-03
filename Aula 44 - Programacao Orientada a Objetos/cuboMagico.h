#ifndef CUBOMAGICO_H // Apenas para indicar o começo e o fim do header. Caso o header seja chamado duas vezes,
		     // o ifndef evita que haja dupla declaração, retornando uma página em branco.
#define CUBOMAGICO_H

// Os arquivos header não são arquivos compilados, só quando chamado no arquivo .cpp

class CuboMagico{
	
	public:
		std::string tipo;
		int camadas;

		CuboMagico(std::string _tipo, int _camadas); //O constructor tem o nome da classe!
		void mostrar(); //O constructor tem o nome da classe!
	private:
}; //Não se esqueça do ponto-e-vírgula no fim da classe!

CuboMagico::CuboMagico(std::string _tipo, int _camadas){
	
	//No construtor, não utilizamos o this!
	tipo = _tipo;
	camadas = _camadas;
}

void CuboMagico::mostrar(){
	std::cout << "Tipo...: " << this->tipo << std::endl;
	std::cout << "Camadas: " << this->camadas << "\n\n";
}

#endif
