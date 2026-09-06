#!/usr/bin/bash

#Todas variaveis sao globais em shell scripting, mas para tornarmos uma variavel local adicionamos a local antes da variavel


function imprimir(){
local nome=$1 #Antes de colocarmos o local o conteudo da variavel nome poderia ser alterado de fora da função

echo "O nome e $nome"
}

nome="Tom"
echo "O nome e $nome"

imprimir Max


