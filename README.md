# Controle de Cores com LED RGB e Arduino

## Sobre o Projeto
Este projeto tem como objetivo demonstrar o funcionamento e o controle de um **LED RGB** (Red, Green, Blue) utilizando uma placa Arduino. O código foi desenvolvido para executar e testar diversas combinações possíveis de cores, manipulando os canais individuais do componente.

Com este repositório, consolidei meus conhecimentos sobre portas digitais e manipulação de saídas (OUTPUT) em hardwares microcontrolados, o que é uma excelente base para estudos em segurança de hardware.

## Tecnologias e Componentes Utilizados
* Linguagem C++ (Arduino IDE)
* 1 Placa Arduino UNO
* 1 Componente LED RGB (Ânodo/Cátodo comum)
* Jumpers e Resistores de proteção

## Como a Lógica Funciona
Através das portas 9, 10 e 11 do Arduino, o código envia sinais digitais (HIGH e LOW) em intervalos de 1 segundo (`delay(1000)`) para acender as cores puras (Azul, Verde e Vermelho). Em seguida, o código sobrepõe os estados lógicos (ex: Azul HIGH + Verde HIGH) para gerar as cores combinadas, varrendo todas as possibilidades do LED.
