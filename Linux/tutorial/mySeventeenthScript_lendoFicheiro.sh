#!/usr/bin/bash

# ler o conteudo de um ficheiro


<<comment

****************Primeiro metodo*************
while read variavel que guardara o conteudo a ser lido
do

echo $variavel que guardou o conteudo lido

done < nome do ficheiro  (< redirecciona o conteudo para o loop)

****************Segundo metodo*************
cat nome do ficheiro | while read variavel que guardara o conteudo a ser lido
do

echo $variavel que guardou o conteudo lido

done

****************Terceiro metodo*************
while IFS =  read -r variavel que guardara o conteudo a ser lido

do

echo $variavel que guardou o conteudo lido

done < nome do ficheiro 
comment


while IFS= read -r ler

do
echo $ler

done < /etc/ucf.conf


#IFS como strings sao divididas em palavras

#IFS=  read (o pequeno espaco que demos entre IFS e o read) quer dizer que ha cada espaco temos uma palavra ou tambem podemos usar IFS = ''
