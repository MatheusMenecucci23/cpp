#include <iostream>
#include <iomanip>
	
using namespace std;

class ventilador{

private:
    string cor;
    int numero_de_pas, velocidade;
    bool estado;

public:
    void Ligar();
    void Desligar();
    void AlterarVelocidae(int n);
};
void ventilador::Ligar()
{
    if(estado == false){
         estado = true;
    }
    std::cout << "O ventilador ligou\n";

}
void ventilador::Desligar()
{
    if(estado == true){
         estado = false;
    }
    std::cout << "O ventilador desligou\n";
}
void ventilador::AlterarVelocidae(int n)
{
    if (n == 1)
    {
        velocidade=1;
        std::cout << "O ventilador está na velocidade 1\n";
    }else if (n ==2)
    {
        velocidade=2;
        std::cout << "O ventilador está na velocidade 2\n";
    }else if(n ==3)
    {
        velocidade=3;
        std::cout << "O ventilador está na velocidade 3\n";
    }else{
        std::cout << "Essa velocidade naõ existe\n";
    }
    
}
int main(){
    ventilador meuVentilador;
    meuVentilador.Ligar();
    meuVentilador.Desligar();
    meuVentilador.AlterarVelocidae(1);
}