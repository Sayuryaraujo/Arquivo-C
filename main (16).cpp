   #include<locale.h>
    #include <stdio.h>
    int main(){
    setlocale(LC_ALL,"");
    int n1;
    char *cardapio;
    printf("Cardapio:\n1 - X-Burguer - R$ 10,00 \n2 - X-Salada - R$ 12,00 \n3 - X-Bacon - R$ 15,00 \n4 - Hot Dog - R$ 8,00 \n5 - Refrigerante - R$ 5,00\n");
    printf ("informe o numero da opçao que deseja:\n");
    scanf("%d", &n1);
    switch(n1){
        case 1 :
        cardapio= "X-Burguer - R$ 10,00";
        break;
        case 2 :
        cardapio = "X-Salada - R$ 12,00";
        break;
        case 3 :
        cardapio = "X-Bacon - R$ 15,00";
        break;
        case 4 :
        cardapio = "Hot Dog - R$ 8,00";
        case 5:
        cardapio = "Refrigerante - R$ 5,00";
        default:
        printf("opção invalida! programa encerrado");
        return 1;
    }
  printf("Voce escolheu a opção %s",  cardapio);
  return 0;
}
