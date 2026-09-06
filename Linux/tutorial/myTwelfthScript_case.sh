#!/usr/bin/bash

#case expressao/variavel in
#  caso 1 )
#   accao a ser executada ;;
#  caso 2 )
#   accao a ser executada ;;
#  * )-> default 
# accao a ser executada ;;
#esac -> para "fechar" o case(é o inverso de case)


veiculo=$1;# argumento, ou seja, podemos colocar argumentos (ex:caminhao, car, etc) durante a execucao do script

case $veiculo in
  "carro" )
  echo "Custa 1000 meticais para alugar" ;;
  
  "van" )
  echo "Custa 100 meticais para alugar" ;;
  
  "bicicleta" )

	echo "Custa 10000 meticais para alugar" ;;
	
	"caminhao" )
	
	echo "Custa 1500 meticais para alugar" ;;
	
	* ) #default case-> caso nao seja nenhum das opcoes acima
	echo "Veiculo desconhecido"   ;;
	
	esac
