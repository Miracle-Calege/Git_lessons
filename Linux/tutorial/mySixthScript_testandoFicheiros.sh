#!/usr/bin/bash

#\c mantem o cursor na mesma linha e deve ser usado com echo -e

echo -e "Insirar o nome do ficheiro: \c"
read file_name

# -e verifica se o ficheiro existe, -f verifica se o ficheiro existe e se e um ficheiro norma, -d para verificar se é um directorio, -b para ficheiros especiais(videos, audios, imagens), -c para verifica ficheiro de caracteres, -s verifica se um ficheiro está vazio ou nao, -r, -w, -x para verificar as permissoes.

if [ -e $file_name ]
then 
echo "$file_name encontrado"
else
echo "$file_name nao encontrado"
fi

#so verifica ficheiros que esta na pasta onde o script esta a ser executado

#Entre os [] devemos providenciar um espaço no inicio e no fim da instruçao ex: if [espaco1instruçãoespaço2]
