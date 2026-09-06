#!/usr/bin/bash

#sleep-> da um delay/intervalo entre a instrucoes
# sleep numero de segundos

n=1

<<comment
while [ $n -le 10 ]

do

echo "$n"
(( n++ ))

sleep 1

done
comment

#gnome-terminal & comando usado para abrir terminal

while [ $n -le 3 ]

do

echo "$n"
(( n++ ))

gnome-terminal &

done
