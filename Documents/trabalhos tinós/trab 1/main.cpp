
#include <iostream>

using namespace std;

    class DataN{
        
        public:
    void ConfereDia (int dia);
    void ConfereMes (int mes);
    void ConfereDiaeMes (int dia, int mes);
    void ConfereAno (int ano);
    void Cadastra(int dia, int mes, int ano);
    
        private:
    int dia;
    int mes;
    int ano;
    
    };
    
    void DataN::Cadastra(int dia, int mes, int ano){
        
            cout<<"Insira a data inicial desejada em 3 etapas:\nDia(Com 2 dígitos):";
        std::cin >> dia;

    ConfereDia(dia);

          cout<<"Mês(Com 2 dígitos):";
        std::cin >> mes;

     ConfereMes(mes);
     ConfereDiaeMes(dia,mes);
    
            cout<<"Ano(Com 4 dígitos):";
        std::cin >> ano;
    
     ConfereAno(ano);

    }
    
    void DataN::ConfereDia(int dia){
        if (dia>31 || dia<1){
    cout<<"ERRO.\nEsse valor não pode ser aceito para o campo data."<<endl;
        };
    }
    
    void DataN::ConfereMes(int mes){
        if (mes>12 || mes<1){
    cout<<"ERRO\nEsse valor não pode ser aceito para o campo data."<<endl;
        };
    }
    
    void DataN::ConfereDiaeMes(int dia, int mes){
        if (mes==4 && dia==31 || mes==6 && dia==31 || mes==9 && dia==31 || mes==11 && dia==31){
    cout<<"ERRO\nO mês selecionado possui apenas 30 dias." <<endl;
        };
    }
    
    void DataN::ConfereAno(int ano){
        if (ano<0){
    cout<<"ERRO\nEsse valor não pode ser aceito para o campo data." <<endl;
        };
    }
    
    
    int main()
{
    int dia;
    int mes; 
    int ano;
    
    DataN *Data1=new DataN();
 
 Data1->Cadastra(dia, mes, ano);
 
    return 0;
}
    
    


