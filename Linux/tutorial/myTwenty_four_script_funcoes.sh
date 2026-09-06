#!/usr/bin/bash

<<comment
1.Metodo para criar funcoes

function nome(){
comandos
}
2.Metodo para criar funcoes

nome (){
comandos
}

*****************
Passando argumentos para um método:
chamamos o metodo argumento(s)
nome arg1 arg2 arg3

NB:Os argumentos são acessados por $1 primeiro argumente $2 segundo argumento assim em diante


comment
<<comment
#criacao de funcoes
function ola(){
echo "Hello world!"
}

sair(){
exit 
}

#chamada das funcoes

ola #imprime o Hello word
sair # sai do programa
comment


function imprimir(){
echo $@
}


sair(){
exit 
}

#passando argumento
imprimir Miracle Calege
sair
