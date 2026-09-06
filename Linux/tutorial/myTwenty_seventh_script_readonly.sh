#!/usr/bin/bash

<<comment
readonly permite que o valor da variavel nao seja mudado igual ao final em java.

Em variavel :
readonly variavel
ex:readonly var=31

Em funcoes:

readonly -f hello (colocamos readonly na chamada da funcao)

readonly -f-> exibe todas as funcoes readonly
readonly -p -> exibe todas as variaveis readonly

comment

var=31
readonly var

hello(){
echo "Hello World"
}

hello
