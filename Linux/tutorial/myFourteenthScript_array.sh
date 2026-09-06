#!/usr/bin/bash


#criando um array-> nome do array=('elemento1' 'elemento2' 'elemento3' 'elemento...')



os=('ubuntu' 'windows' 'kali') #array de sistemas operativos


#imprimindo elementos do array echo "${nome do array[indice]}" ou echo "${nome do array[@]}" para imprimir todo o array 


#adicionando elemento no array: nome do array[indice]='elemento/valor'

os[3]='mac'

#removendo elementos do array: unset nome do array[indice]

unset os[2]



echo "${os[@]}"
echo "${os[0]}"
echo "${!os[@]}" #imprime os indices do array-> echo "${!nome do array[@]}"
echo "${#os[@]}"  #imprime o tamanho do array-> echo "${#nome do array[@]}"  
