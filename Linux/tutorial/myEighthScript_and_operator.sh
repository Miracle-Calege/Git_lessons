#!/usr/bin/bash

# usando o operador and(&&)

# ex: if [ condicao1 ] && [ condicao2 ]
# outra jeito ex: if [ condicao1 -a  condicao2 ]
# outro jeito ex: if [[ condicao1  &&  condicao2 ]]

idade=20

if [ "$idade" -gt 18 ] && [ "$idade" -lt 30 ] #verifica se a idade> 18 e idade <30
then
echo "idade valida"
else 
echo "idade invalida"
fi
