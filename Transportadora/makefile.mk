# Definição de variáveis
EXECUTAVEL := main.exe
SOURCES := main.cpp Includes/Veiculos.cpp Includes/Clientes.cpp Includes/Pedidos.cpp Includes/Caminhao.cpp Includes/PrintaFormulario.cpp

# Regras
all: $(EXECUTAVEL)

$(EXECUTAVEL): $(SOURCES)
	g++ -o $@ -s $^

.PHONY: clean

clean:
	rm -f $(EXECUTAVEL)