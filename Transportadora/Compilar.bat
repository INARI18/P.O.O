@echo off

REM gera executavel
SET EXECUTAVEL=main.exe

REM compila
g++ -o %EXECUTAVEL% -s main.cpp Includes/Veiculos/Veiculos.cpp Includes/Clientes/Clientes.cpp Includes/Pedidos/Pedidos.cpp Includes/Carro/Carro.cpp Includes/Caminhonete/Caminhonete.cpp Includes/Caminhao/Caminhao.cpp Includes/Veiculos/Garagem.cpp Includes/Veiculos/EscolheVeiculo.cpp Includes/Pedidos/ControlePedidos.cpp Includes/Clientes/CadastrosClientes.cpp Includes/Atendimento/Atendimento.cpp

REM verifica sucesso
IF %ERRORLEVEL% EQU 0 (
    echo Executavel criado!
    echo.
    %EXECUTAVEL%
) ELSE (
    echo Erro!
)

pause


