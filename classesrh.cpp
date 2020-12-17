#include <iostream>
#include <string>

using namespace std;

class Funcionario{
	private:
		float salario;
		string nome;
		
	public:	
		float getSalario(){
			return salario;
		}
		
};

class CLT : public Funcionario{
	private:
		float salarioBase;
		int horasExtras;
		float custoHoraExtra;	
	
};

class Vendedor : public CLT{
	private:
		float percentualComissao;
		float totalVendas;
	
};

class Remoto : public Funcionario{
	private:
		float custoHora;
		float horasTrabalhadas;
};
