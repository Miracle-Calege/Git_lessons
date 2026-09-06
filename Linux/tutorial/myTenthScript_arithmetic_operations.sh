#!/usr/bin/bash


num1=20
num2=5

echo $(( num1 + num2 )) #operacoes aritmeticas devem ser colocadas entre (( operacao ))
echo $(( num1 - num2 ))
echo $(( num1 * num2 ))
echo $(( num1 / num2 ))
echo $(( num1 % num2 ))


echo $(( num1 + num2 )) #operacoes aritmeticas também podem ser colocadas entre (expr operacao ).NB:As variaveis devem ser antecedidas por "$"


echo $(expr $num1 - $num2 )
echo $(expr  $num1 \* $num2 ) #neste método "*" deve ser antecedido por "\"
echo $(expr $num1 / $num2 )
echo $(expr $num1 % $num2 )
