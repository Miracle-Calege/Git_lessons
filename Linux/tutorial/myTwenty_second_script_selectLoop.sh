#!/usr/bin/bash


<< comment
Cria alíneas enumeradas:
1) primeiro item da lista
2)segundo item da lista
...
Onde cada numero esta associado a um item.O numero que escolhermos vai imprimir o item associado a ele

select variavel in lista de itens

do

comando1
comando2
....

done

comment


<< comment
select nome in mark john tom ben

do 
echo "selecionado:$nome"
done
comment

select nome in mark john tom ben

do 
case $nome in
mark)
echo Selecionado mark ;;
john)
echo Selecionado john ;;
tom)
echo Selecionado tom ;;
ben)
echo Selecionado ben ;;
*)
echo "Erro"
esac


done



