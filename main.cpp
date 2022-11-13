#include <iostream>

#include "doacaoPix.h"
#include "doacaoDeComida.h"

using namespace std;

int main(){

    DoacaoPix* pix = new DoacaoPix();
    DoacaoDeComida* comida = new DoacaoDeComida();   

    comida->realizarPagamento(0.50);
    pix->realizarPagamento(0.00);

    comida->realizarPagamento(1.50);
    pix->realizarPagamento(1.69);

    return 0;
};