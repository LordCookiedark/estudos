#include <stdio.h>
#include <windows.h>

int main()
{
    int opcao = 0;
    int selecionado = 0;
    printf("Bem-vindo ao Pedra, Papel ou Tesoura!");
    printf("\nInstrucoes:\nUse W para cima e S para baixo para selecionar a opcao desejada e Enter para confirmar\n\n");

    while (1)
    {

        if(selecionado == 0)
        {
            system("cls");
            printf("Bem-vindo ao Pedra, Papel ou Tesoura!");
            printf("\nInstrucoes:\nUse W para cima e S para baixo para selecionar a opcao desejada e Enter para confirmar\n\n");
            printf("Selecione uma opcao:\n   %s Pedra\n   Papel\n   Tesoura\n   Sair\n\n", selecionado == 0 ? "->" : "  ");
        }
        if(selecionado == 1)
        {
            system("cls");
            printf("Bem-vindo ao Pedra, Papel ou Tesoura!");
            printf("\nInstrucoes:\nUse W para cima e S para baixo para selecionar a opcao desejada e Enter para confirmar\n\n");
            printf("Selecione uma opcao:\n    Pedra\n   %s Papel\n   Tesoura\n   Sair\n\n", selecionado == 1 ? "->" : "  ");
        }
        if(selecionado == 2)
        {
            system("cls");
            printf("Bem-vindo ao Pedra, Papel ou Tesoura!");
            printf("\nInstrucoes:\nUse W para cima e S para baixo para selecionar a opcao desejada e Enter para confirmar\n\n");
            printf("Selecione uma opcao:\n    Pedra\n   Papel\n   %s Tesoura\n   Sair\n\n", selecionado == 2 ? "->" : "  ");
        }
        if(selecionado == 3)
        {
            system("cls");
            printf("Bem-vindo ao Pedra, Papel ou Tesoura!");
            printf("\nInstrucoes:\nUse W para cima e S para baixo para selecionar a opcao desejada e Enter para confirmar\n\n");
            printf("Selecione uma opcao:\n    Pedra\n   Papel\n   Tesoura\n   %s Sair\n\n", selecionado == 3 ? "->" : "  ");
        }



        char tecla;
        scanf("%c", &tecla);

        switch (tecla)
        {
        case 'w':
        case 'W':
            selecionado--;
            if (selecionado < 0) selecionado = 3;
            break;
        case 's':
        case 'S':
            selecionado++;
            if (selecionado > 3) selecionado = 0;
            break;
        case '\n':
            opcao = selecionado;
            break;
        }

        if (opcao != 0 && opcao == 1)
        {
            printf("Voce escolheu Pedra!\n");

        }
        if (opcao != 0 && opcao == 2)
        {
            printf("Voce escolheu Papel\n");
        }
        if (opcao !=0 && opcao == 2)
        {
            printf("Voce escolheu Tesoura\n");
        }
        if (opcao !=0 && opcao == 3)
        {
            printf("obrigado por jogar");
        }

    }

    return 0;
}
