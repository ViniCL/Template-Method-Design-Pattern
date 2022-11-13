# Template-Method-Design-Pattern

templateDoacao.h -> É a classe abstrata que define o método padrão e seus métodos auxiliares que poderão ser sobrescritos.

doacaoDeComida.h  e  doacaoPix.h-> Implementação do templateDoacao.h para criar uma classe de doação de quilo de comida e doação em dinheiro por Pix, respectivamente. Que por sua vez, implementa funcionalidades próprias nos métodos sobrescritos da classe pai. 

main.cpp -> Cria objetos do tipo DoacaoDeComida e DoacaoPixCabeca e chama o método padrão do TemplateDoacao, para representar a funcionalidade desse design pattern. 
