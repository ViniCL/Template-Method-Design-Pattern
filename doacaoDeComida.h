#pragma once

#include "templateDoacao.h" 

class DoacaoDeComida : public TemplateDoacao{

public:
    bool processaValor(double value) const {

    double qtdKiloQuiloMinima = 1;

        if(value >= qtdKiloQuiloMinima){
            return true;
        }
        
        return false;
    };

    void exibeMensagemFofinhaAoDoador() const {
        std::cout << "Juntos acabaremos com a fome! Obrigado! \n";
    };

    void exibeMensagemDeFalhaAoDoador() const {
        std::cout << "Infelizmente a quantidade que tentou doar nao eh suficiente :( \n";
    };


};