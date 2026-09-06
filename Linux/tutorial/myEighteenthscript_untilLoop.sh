#!/usr/bin/bash

#until vs while
#until-> executa as instruções caso a condição seja falsa
#while->executa as instruções caso a condição seja verdadeira

<<comment
estrutura:
until [ condicao ]

do 
comando1
comando2
....

done

comment


n=1

until [ $n -ge 10 ]

do

echo $n
n=$((n+1))
done
