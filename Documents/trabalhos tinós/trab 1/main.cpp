
#include <iostream>

using namespace std;

    class Data{
        
        public:
    int dia;
    int mes;
    int ano;
    void ConfereDia (int dia);
    void ConfereMes (int mes);
    void ConfereDiaeMes (int dia, int mes);
    void ConfereAno (int ano);
    };
    
    void Data::ConfereDia(int dia){
        if (dia>31 || dia<1){
    cout<<"ERRO.\nEsse valor não pode ser aceito para o campo data."<<endl;
        };
    }
    
    void Data::ConfereMes(int mes){
        if (mes>12 || mes<1){
    cout<<"ERRO\nEsse valor não pode ser aceito para o campo data."<<endl;
        };
    }
    
    void Data::ConfereDiaeMes(int dia, int mes){
        if (mes==4 && dia==31 || mes==6 && dia==31 || mes==9 && dia==31 || mes==11 && dia==31){
    cout<<"ERRO\nO mês selecionado possui apenas 30 dias." <<endl;
        };
    }
    
    void Data::ConfereAno(int ano){
        if (ano<0){
    cout<<"ERRO\nEsse valor não pode ser aceito para o campo data." <<endl;
        };
    }
    
    
    int main()
{
    int dia;
    int mes; 
    int ano;
    
    Data *Data1=new Data();
    
    cout<<"Insira a data inicial desejada em 3 etapas:\nDia (Com 2 dígitos):";
std::cin >> dia;

    Data1->ConfereDia(dia);

    cout<<"Mês (Com 2 dígitos):";
std::cin >> mes;

  Data1->  ConfereMes(mes);
  Data1->  ConfereDiaeMes(dia,mes);

    cout<<"Ano (Com 4 dígitos):";
std::cin >> ano;
    
  Data1->  ConfereAno(ano);

    return 0;
}
    
    


