------------------------------------------------------ TAREFA #1 ------------------------------------------------------

Considere que você está prestes a implementar um sistema para uma transportadora de
cargas do Baita Chão. Nessa primeira etapa, a transportadora apenas mencionou algumas
das suas necessidades:

1) Descrever a frota de veículos (carro, camionete, caminhão). Cada veículo tem suas
particularidades específicas (capacidade de carga, ano de fabricação, chassi,
modelo, localização, etc…).
2) Descrever os clientes
3) Descrever os pedidos de transportes (e.g., cliente que solicita, tipo de transporte,
local de coleta, local de entrega, peso da carga, volume da carga).

Neste primeiro momento, vocês devem implementar as Classes em C++ para descrever os
itens (1,2,3). Cada sistema pode possuir suas próprias variações e peculiaridades. Além da
implementação das classes, vocês devem implementar os métodos de acesso aos atributos
(métodos get e set), quando necessários. 

------------------------------------------------------ TAREFA #2 ------------------------------------------------------

Nesta segunda etapa, vocês devem primeiramente refatorar o código existente da seguinte
forma:

1) Separar as classes em arquivos separados (em .h e .cpp)
2) Realizar verificações nos métodos set para evitar que dados errados sejam
inseridos em todos os métodos
3) Adicionar retorno inteiro para o sets e gets. Os métodos devem retornar 1
quando a operação foi concluída com sucesso, e 0 caso contrário.
4) Adicionar Construtor e Destrutor em todas as classes
5) Implementar herança para a classe de Veículos.

Após, vocês devem implementar uma Classe para gerenciar os veículos. Esta classe deve
possuir:

1) Uma lista de veículos ativos da empresa
2) Uma série de métodos para interagir com os veículos:
a) adicionarVeiculo(...)
b) removerVeiculo(...)
c) buscarVeiculo (por id, placa, etc)
d) buscarVeiculo (por localização):
e) obterVeiculosDisponiveis
f) …
