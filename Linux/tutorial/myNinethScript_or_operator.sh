#!/usr/bin/bash

#usando o operador ou(||)
# ex: if [ condicao1 ] || [ condicao2 ]
# outra jeito ex: if [ condicao1 -0  condicao2 ]
# outro jeito ex: if [[ condicao1  ||  condicao2 ]]


idade=20

if [ "$idade" -gt 18 ] || [ "$idade" -lt 30 ]# verica se idade>18 ou idade<30
then
echo "idade valida"
else 
echo "idade invalida"
fi
