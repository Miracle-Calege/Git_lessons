#!/usr/bin/bash

#break-> sai do programa caso uma dada seja cumprida
#continue-> salta uma iteração do loop caso uma dada condição seja cumprida

for((i=1;i<=10;i++))
do

if [ $i -gt 5 ]
then 
break #Sai do programa caso uma dada condicao seja cumprida
fi
echo "$i"
done

