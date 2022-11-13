#pragma once

using namespace std;

class TemplateDoacao{

public:
    void realizarPagamento(double value) const{
       if( this->processaValor(value)){
        this->exibeMensagemFofinhaAoDoador();
       } else {
        this->exibeMensagemDeFalhaAoDoador();
       }
    };


    virtual bool processaValor(double value) const {};
    virtual void exibeMensagemFofinhaAoDoador() const {};
    virtual void exibeMensagemDeFalhaAoDoador() const {};


};