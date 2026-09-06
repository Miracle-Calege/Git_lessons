#!/usr/bin/bash
echo $0 $1 $2 $3 '> echo $1 $2 $3' # echo $1 $2 $3 vai exibir os valores dos argumentos
args=("$@") #criamos um array que armazena todos os argumentos "$@"
echo ${args[0]}  ${args[1]}  #imprime os argumentos cujo os indices foram acessados
echo $@ #imprime todos os argumentos
echo $# #imprime o numero de argumentos contidos no array

