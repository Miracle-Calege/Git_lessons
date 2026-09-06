#!/usr/bin/bash


<<comment
3.Metodo
for comando in ls pwd date #A variavel comando vai assumir os comandos listados

do
echo "--------------$comando-------------------"
 $comando #Aqui serao executados os comandos
done

comment
2.Metodo

for item in *  # *-> significa todos directórios e ficheiros no nosso path actual

do 

if [ -d $item ] #verifica se é um directório através do -d ou -f para ficheiros
then 
echo $item
fi
done

