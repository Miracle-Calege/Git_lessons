#!/usr/bin/bash
#Uma entrada
echo "Insira o seu nome: "
read nome
echo "O seu nome e: $nome"

#Duas ou mais entradas
echo "Insira os nomes: "
read nome1 nome2 #inserimos dois nomes na mesma linha no prompt(antes de clicar enter)
echo "Os  nomes e: $nome1, $nome2"

#para que a entrada esteja na mesma linha
read -p 'username: ' user
read -sp 'Password:' password
echo #salta uma linha
echo "Username: $user"
echo "Password: $password"

#lendo e inserindo  num array
echo "Insira os nomes no array: "
read -a nomes #nomes e o nome do array
echo "Nomes: ${nomes[0]}, ${nomes[1]}" #para acessar uma das posicoes do array :${nome do array[indice]}

#lendo sem usar nenhuma variavel explicita

echo "Insira o seu nome: "
read 
echo "O seu nome e: $REPLY"

