algoritmo "Vendas dos Colaboradores"

var
   nome: caractere
   colaborador: inteiro
   salfixo, venda1, venda2, venda3, venda4, SomaVendas: real
   comissao, VendasTotal, SalarioFinal: real

   
inicio
 para colaborador de 1 ate 4 passo 1 faca
      escreva("Nome do Colaborador: ")
      leia (nome)
      escreva("Informe salario fixo: ")
      leia (salfixo)
      escreva ("Informe o salario da 1ª semana:")
      leia (venda1)
      escreva ("Informe o salario da 2ª semana:")
      leia (venda2)
      escreva ("Informe o salario da 3ª semana:")
      leia (venda3)
      escreva ("Informe o salario da 4ª semana:")
      leia (venda4)
      
      SomaVendas <-(venda1+venda2+venda3+venda4)
      Comissao <- ((SomaVendas*10)/100))

Escreval ("Nome do Colaborador:", Nome)
Escreval ("Total de Vendas:", SomaVendas)
Escreval ("Salario Final com Comisssao:", Comissao+Salfixo+VendasTotal+SalarioFinal)

fimPara
Fimalgoritmo
