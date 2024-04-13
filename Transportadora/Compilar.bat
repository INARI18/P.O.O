@echo off

REM gera executavel
SET EXECUTAVEL=main.exe

REM compila
g++ -o %EXECUTAVEL% -s main2.cpp Includes/Veiculos.cpp Includes/Clientes.cpp Includes/Pedidos.cpp Includes/Carro.cpp Includes/Caminhonete.cpp Includes/Caminhao.cpp Includes/GerenciaVeiculos.cpp Includes/EscolheVeiculo.cpp Includes/Atendimento.cpp

REM verifica sucesso
IF %ERRORLEVEL% EQU 0 (
    echo Executavel criado!
    echo.
    %EXECUTAVEL%
) ELSE (
    echo Erro!
)

pause


