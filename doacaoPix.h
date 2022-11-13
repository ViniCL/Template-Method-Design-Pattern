#pragma once

#include "templateDoacao.h" 

class DoacaoPix : public TemplateDoacao{

public:
    bool processaValor(double value) const {

        if(value > 0){
            return true;
        }

        return false;
    };

    void exibeMensagemFofinhaAoDoador() const {
        std::cout << "Valeu meu parceiro(a)! A regra eh clara! \n";
    };

    void exibeMensagemDeFalhaAoDoador() const {
        std::cout << "Bah! Nao vai dar nao! \n";
    };


};