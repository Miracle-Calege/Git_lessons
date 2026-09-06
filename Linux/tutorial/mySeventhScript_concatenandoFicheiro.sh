#!/usr/bin/bash


#Este script vai concatenar uma entrada ao final de um ficheiro de texto

echo -e "Insirar o nome do ficheiro: \c"
read file_name

if [ -f $file_name ] # se o ficheiro existir
then 
if [ -w $file_name ] #verifica se o ficheiro tem permissao de escrita
then
echo "Insira qualquer texto. Para sair pressione ctrl+d"
cat >> $file_name #concatena o texto
else
echo "O ficheiro nao tem permissao de escrita"
fi
else
echo "$file_name nao existe"
fi
