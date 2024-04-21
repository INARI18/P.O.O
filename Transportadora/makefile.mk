# Definição de variáveis
EXECUTAVEL := main.exe
SOURCES := main.cpp Includes/Veiculos/Veiculos.cpp Includes/Clientes/Clientes.cpp Includes/Pedidos/Pedidos.cpp Includes/Caminhao/Caminhao.cpp Includes/Veiculos/EscolheVeiculo.cpp Includes/Veiculos/Garagem.cpp Includes/Clientes/CadastrosClientes.cpp Includes/Atendimento/Atendimento.cpp

# Regras
all: $(EXECUTAVEL)

$(EXECUTAVEL): $(SOURCES)
	g++ -o $@ -s $^

.PHONY: clean

clean:
	rm -f $(EXECUTAVEL)