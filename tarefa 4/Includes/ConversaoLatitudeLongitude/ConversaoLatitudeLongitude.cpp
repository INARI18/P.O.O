#include "ConversaoLatitudeLongitude.h"

static size_t writeCallback (char* conteudo, size_t tamanho, size_t tamanhoMemoria, std::string* entrada){

    ((std::string*)entrada) -> append((char*)conteudo, tamanho * tamanhoMemoria);
    return tamanho * tamanhoMemoria;
}

static void converteLatitudeLongitude (std::string endereco){

    CURL* curl;
    std::string leitura;

    std::string link = "https://nominatim.openstreetmap.org/search?" + endereco + "&format=json";

    curl = curl_easy_init();

    if (curl){
        curl_easy_setopt (curl, CURLOPT_URL, link.c_str());
        curl_easy_setopt (curl, CURLOPT_WRITEFUNCTION, writeCallback);
        curl_easy_setopt (curl, CURLOPT_WRITEDATA, &leitura);

        curl_easy_perform (curl);
    
        curl_easy_cleanup (curl);

        std::cout << leitura << "\n";
    }
}
