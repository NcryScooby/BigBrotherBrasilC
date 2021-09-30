#include <stdio.h>

int main()
{

    int voto, total_votos = 0, votos1 = 0, votos2 = 0, votos3 = 0;
    float porcent;
    char nome1[20], nome2[20], nome3[20];

    printf("\n\nBIG BROTHER BRASIL\n\n\n");

    printf("Digite o primeiro nome indicado ao Paredao: ");
    scanf("%s", &nome1);
    printf("Digite o segundo nome indicado ao Paredao: ");
    scanf("%s", &nome2);
    printf("Digite o terceiro nome indicado ao Paredao: ");
    scanf("%s", &nome3);

    printf("\n\nEstao no paredao: %s, %s e %s", nome1, nome2, nome3);

    for (;;)
    {

        printf("\n\nEscolha quem voce deseja eliminar:\n\n1 - %s\n2 - %s\n3 - %s\n4 - Encerrar Votacao\n\n", nome1, nome2, nome3);
        scanf("%d", &voto);

        if (voto == 1)
        {
            printf("\nVoce votou em %s\n", nome1);
            total_votos++;
            votos1++;
        }
        else if (voto == 2)
        {
            printf("\nVoce votou em %s\n", nome2);
            total_votos++;
            votos2++;
        }
        else if (voto == 3)
        {
            printf("\nVoce votou em %s\n", nome3);
            total_votos++;
            votos3++;
        }
        else if (voto == 4)
        {

            if (votos1 > votos2 && votos1 > votos3)
            {
                porcent = votos1 * 100 / total_votos;

                printf("\nVotacao Encerrada...\nTotal de votos: %d\n\n", total_votos);

                printf("O eliminado foi %s, com rejeicao de %.f%%\n\n", nome1, porcent);
                break;
            }
            else if (votos2 > votos1 && votos2 > votos3)
            {
                porcent = votos2 * 100 / total_votos;

                printf("\nVotacao Encerrada...\nTotal de votos: %d\n\n", total_votos);

                printf("O eliminado foi %s, com rejeicao de %.f%%\n\n", nome2, porcent);
                break;
            }
            else if (votos3 > votos1 && votos3 > votos2)
            {
                porcent = votos3 * 100 / total_votos;

                printf("\nVotacao Encerrada...\nTotal de votos: %d\n\n", total_votos);

                printf("O eliminado(a) foi %s, com rejeicao de %.f%%\n\n", nome3, porcent);
                break;
            }
        }

        else
        {
            printf("\nNumero Invalido, Digite um numero Valido!\n");
        }
    }

    return 0;
}