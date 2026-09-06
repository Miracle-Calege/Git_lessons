#!/usr/bin/bash

<<comment
1.Metodo
for variavel in 1 2 3 4 5 ..N
do
comando1
comando2
...
done

2.Metodo
for variavel in ficheiro1 ficheiro2 ficheiro3
do
comando1 na variavel
comando2
...
done

3.Metodo

for OUTPUT in (comando linux)
do
comando1 na OUTPUT
comando2
....
done

4.for ((EXP1;EXP2;EXP3))
do
comando1
comando2
...
done
comment

<<comment
A variavel escolhida(i no nosso caso) vai assumir os valores abaixo (1..5)
colocamos os numeros distanciando-os por um espaço ou {numero inicial..numero final} ou {numero inicial..numero final..distanciamento/valor a ser incrementado}

1.Metodo
for i in 1 2 3 4 5  ou for {1..5} ou {1..10..2}-> vai partir de 1 a 10 distando 2 unidades

do

echo $i

done

comment

#echo ${BASH_VERSION}-> indica a versao do shell

<<comment
4.Metodo

Este loop assemelha-se ao das linguagens de programação

for((i=0;i<5;i++))
do
echo $i
done

comment
