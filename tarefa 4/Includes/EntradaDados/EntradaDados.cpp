#include "EntradaDados.h"

void EntradaDados::instancia (CadastrosClientes* listaClientes, ControlePedidos* listaPedidos, string dataPath)
{
    ifstream file (dataPath);
    string s;

    if (!file.is_open())  //  confere se o arquivo existe
    {  
        cerr << "Erro ao ler o arquivo\n";
        return;
    }    

    getline (file, s);  //  pula a primeira linha, que e o header
    
    while (file.peek() != EOF) //  enquanto nao chegar ao fim do arquivo
    {
        Clientes* cliente = new Clientes;
        Pedidos* pedido = new Pedidos;

            getline (file, s, ',');
                cliente->setNome(s);
//                cout << s << "\n";

            getline (file, s, ',');
                cliente->setCPF(s);
//                cout << s << "\n";

            getline (file, s, '"');
            getline (file, s, '"');
                cliente->setEndereco(s);
//                cout << s << "\n";
            getline (file, s, ',');

            getline (file, s, ',');
                cliente->setTelefone(s);
 //               cout << s << "\n";

            getline (file, s, ',');
                cliente->setEmail(s);
 //               cout << s << "\n";

            getline (file, s, '"');
            getline (file, s, '"');
                pedido->setColeta(s);
//                cout << s << "\n";
            getline (file, s, ',');

            getline (file, s, '"');
            getline (file, s, '"');
                pedido->setEntrega(s);
//                cout << s << "\n";
            getline (file, s, ',');

            getline (file, s, ',');
        try{
                pedido->setPeso(stof(s));
        } catch (exception& erro) {
            cout << "ERRO! " << s << "\n"; //  printar string se der qualquer erro
        }

            getline (file, s, ',');
        try{
                pedido->setVolume(stof(s));
        } catch (exception& erro) {
            cout << "ERRO! " << s << "\n"; //  printar string se der qualquer erro
       }

            getline (file, s, '\n');
                pedido->setPrioridade(s);
//                cout << s << "\n";

        listaClientes -> adicionaCliente(cliente);
        listaPedidos -> adicionaPedido (pedido);
    }
}

