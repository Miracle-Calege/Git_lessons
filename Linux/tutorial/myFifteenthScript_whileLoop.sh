#!/usr/bin/bash

#while loops

#while [condicao]
#do
#comando1
#comando2
#comando3
#done ->simboliza o fim da instrucao

n=1

while [ $n -le 10 ] # enquanto n for <= 10 a accao abaixo sera executada

do

echo "$n"
#n=$(( n+1 )) # tambem e possivel fazer (( n++ ))
(( n++ ))
done

