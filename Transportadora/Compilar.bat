@echo off

REM gera executavel
SET EXECUTAVEL=main.exe

REM compila
g++ -o %EXECUTAVEL% -s main.cpp Includes/Veiculos.cpp Includes/Clientes.cpp Includes/Pedidos.cpp Includes/Carro.cpp Includes/Caminhonete.cpp Includes/Caminhao.cpp Includes/PrintaFormulario.cpp Includes/EscolheVeiculo.cpp

REM verifica sucesso
IF %ERRORLEVEL% EQU 0 (
    echo Executavel criado!
    echo.
    %EXECUTAVEL%
) ELSE (
    echo Erro!
)

pause


