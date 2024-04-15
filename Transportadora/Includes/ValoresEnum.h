#ifndef VALORES_ENUM_H
#define VALORES_ENUM_H

//////////////////////////// Caminhonete, Carro ou Caminhao ///////////////////////////
enum class Chassi {
    G51FP23E4NL100709, JTFJX02P9K0004567, 
    B9D111060T5002156, G1CHK24U64E121748,
    JN1ABCDEFGH123456, G11FP23E4NL100000,
    R37HT44F8DR650972, Y7UCA99W5PK284136,
    J04HZ36D7EP843920, M68SG78V1ZF572103,
    L52VX91Q2BJ079546
};

enum class Ano {
    _2024, _2023, _2022, _2021,
    _2020, _2019, _2018, _2017,
    _2016, _2015, _2014, _2013,
    _2012, _2011, _2010, _2009,
    _2008, _2007, _2006, _2005,
    _2004, _2003, _2002, _2001,
    _2000
};

enum class Motorista {
    Alexandre, Bernardo, 
    Caio, Diego, Alice, 
    Fernando, Gustavo, Hugo, 
    Julia, Rodrigo
};

//////////////////////////// Carro ////////////////////////////

enum class CargaCarro {
    _481L, _337L, _518L, 
    _502L, _392L, _432L, 
    _473L, _430L, _362L, 
    _523L, _345L, _478L,
    _407L, _514L, _377L, 
    _504L, _344L, _443L, 
    _311L, _398L, _525L, 
    _509L, _332L, _533L
};

enum class ModeloCarro {
    Toyota_Corolla, Honda_Civic,
    Ford_Mustang, Chevrolet_Cruze,
    Volkswagen_Golf, BMW_X5,
    Mercedes_Benz_C_Class, Audi_A4,
    Nissan_Altima, Hyundai_Elantra 
};

enum class NumeroPortas {
    _2, _4
};

enum class Cambio {
    Automatico, Manual
};

//////////////////////////// Caminhonete ////////////////////////////

enum class CargaCaminhonete {
    _815Kg, _671Kg, _972Kg,
    _754Kg, _849Kg, _593Kg,
    _642Kg, _736Kg, _508Kg,
    _901Kg, _624Kg, _798Kg,
    _739Kg, _552Kg, _631Kg,
    _903Kg, _555Kg, _706Kg,
    _892Kg, _624Kg, _836Kg,
    _590Kg, _820Kg, _933Kg
};

enum class ModeloCaminhonete {
    Ford_F150, Chevrolet_Silverado,
    Toyota_Tacoma, Dodge_Ram1500,
    GMC_Sierra, Nissan_Frontier,
    Honda_Ridgeline, Jeep_Gladiator,
    Volkswagen_Amarok, Mitsubishi_L200
};

enum class Cacamba { // Caçamba
    Fechada, Aberta,
    Basculante, Estendida,
    Grade, Carga_Dupla
};


//////////////////////////// Caminhao ////////////////////////////

enum class CargaCaminhao {
    _5897Kg, _10344Kg, _7276Kg,
    _12562Kg, _4125Kg, _8752Kg,
    _13987Kg, _6423Kg, _11856Kg,
    _8201Kg, _9564Kg, _13322Kg,
    _6411Kg, _11685Kg, _9543Kg,
    _12104Kg, _3901Kg, _14250Kg,
    _6698Kg, _13396Kg, _7658Kg,
    _11933Kg, _5756Kg, _13820Kg
};

enum class ModeloCaminhao {
    Volvo_FH,
    Mercedes_Benz_Actros,
    Scania_R_Series,
    DAF_XF,
    Iveco_Stralis,
    MAN_TGX,
    Kenworth_W900,
    International_LoneStar,
    Mack_Anthem,
    Peterbilt_579
};

enum class Altura {
    _350cm = 350, _400cm = 400, _450cm = 450, _500cm = 500, _550cm = 550
};

enum class Largura {
    _220cm = 220, _240cm = 240, _260cm = 2600, _280cm = 280, _300cm = 300
};

enum class Comprimento {
    _600cm = 600, _700cm = 700, _800cm = 800, _900m = 900, _1000cm = 1000
};

//////////////////////////// Clientes e Pedidos ////////////////////////////

enum class Nome {
    Ana, Bruno, 
    Carla, Daniel, 
    Erika, Felipe, 
    Gabriela, Henrique, 
    Isabela, João
};





#endif

