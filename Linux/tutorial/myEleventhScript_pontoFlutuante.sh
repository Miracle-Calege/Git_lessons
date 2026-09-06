#!/usr/bin/bash

#para fazer operaçoes com números de ponto flutuante(número decimais) usamos a biblioteca bc


num1=20.5
num2=5



echo "20.5+5" | bc # A operação "20.5+5" vai se tratada como input para o bc
echo "20.5-5" | bc
echo "20.5*5" | bc
echo "scale=2;20.5/5" | bc # A divisao gera um valor decima por isso usamos scale=numero de casas decimais para determinar o numero de casa decimais
echo "20.5%5" | bc


#usando variaveis
echo "$num1+$num2" | bc #
echo "$num1+$num2" | bc
echo "20.5*5" | bc
echo "scale=2;20.5/5" | bc 
echo "20.5%5" | bc

#raiz quadrada
num=27
echo "scale=2;sqrt($num)" | bc -l # usamos bc -l para termos acesso a funcao sqrt(numero)

#potencia

echo "scale=2; 3^3 "| bc -l # base^expoente


