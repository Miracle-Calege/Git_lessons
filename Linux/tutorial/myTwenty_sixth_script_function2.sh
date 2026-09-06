#!/usr/bin/bash

uso(){
echo "Insira um argumento"
echo "uso: $0 mome do ficheiro"
}

existeFicheiro(){
local file="$1"

[[ -f "$file" ]] && return 0 || return 1 # e o mesmo que se existir o ficheiro retorna 0 senao retorna 1
}




[[ $# -eq 0 ]] && uso # se a quantidade de argumentos for =0 chama a funcao uso

if( existeFicheiro "$1" ) 

then

echo "Ficheiro encontrado"

else

echo "Ficheiro nao encontrado"

fi
