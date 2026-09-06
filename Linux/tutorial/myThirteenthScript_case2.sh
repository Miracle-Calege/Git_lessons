#!/usr/bin/bash

#case expressao/variavel in
#  pattern1/regex )
#   accao a ser executada ;;
#  pattern1/regex )
#   accao a ser executada ;;
#  * )-> default 
# accao a ser executada ;;
#esac -> para "fechar" o case(é o inverso de case)


echo -e "Insira algum caracter :\c"
read valor

case $valor in
 
 [a-z] )# se o valor for um caracter minusculo de a-z
 
 echo " Inseriu $valor a-z" ;;
 
 [A-Z] )# se o valor for um caracter maiusculo de A-Z
 
 echo " Inseriu $valor A-Z" ;;
 
 [0-9] )# se o valor for uma caracter numerico de 0-9
 
 echo " Inseriu $valor 0-9" ;;
 
 ? )# se for uma caracter especial(sinais de pontuacao, etc)
 
 echo " Inseriu $valor caracter especial" ;;
 
 * )
 
 echo "entrada invalida" ;;
 
 esac 
