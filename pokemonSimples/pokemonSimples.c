#include<stdio.h>
#include<conio.h>
#include<time.h>

void main(){
int res1, res2, res3,res4, atk1, atk2, def1, def2, tou1, tou2, tou3, tou4, tou5, tou6, hp1 = 1000, hp2 = 1000, ron = 1, zzz;

system("color 70");

iniciar:

printf("Escolha uma opcao:\n1. Modo Historia\n2. Jogar contra computador\n3. Jogar contra outro jogador\n4. Informacoes do desenvolvedor\nOutros. Sair do jogo\nResposta:");
scanf("%i", &res1);
system("cls");

    switch(res1){

    case 1:

    break;
    case 2:

    compu:

    res2 = 0;
    res3 = 0;
    atk1 = 0;
    def1 = 0;
    atk2 = 0;
    def2 = 0;

    printf("\n================================================================");
    if (ron == 1){
    printf("\nJogador 1 escolha o primeiro pokemon:\n1. Bulbasaur;\n2. Charmander;\n3. Squirtle;\n4. Pikachu;\n5. Eevee;\n6. Meowth;\n7. Machop;\n8. Magnemite;\n9. Gastly;\n10. Magikarp;\nResposta:");
    scanf("%i", &res2);
    system("cls");

    }else if (ron == 2){
    printf("\nJogador 1 escolha o segundo pokemon:\n1. Bulbasaur;\n2. Charmander;\n3. Squirtle;\n4. Pikachu;\n5. Eevee;\n6. Meowth;\n7. Machop;\n8. Magnemite;\n9. Gastly;\n10. Magikarp;\nResposta:");
    scanf("%i", &res2);
    system("cls");

    }else if (ron == 3){

    printf("\nJogador 1 escolha o ultimo pokemon:\n1. Bulbasaur;\n2. Charmander;\n3. Squirtle;\n4. Pikachu;\n5. Eevee;\n6. Meowth;\n7. Machop;\n8. Magnemite;\n9. Gastly;\n10. Magikarp;\nResposta:");
    scanf("%i", &res2);
    system("cls");
    }
    srand ((unsigned) time(NULL));
    res3 = (rand() % 10) + 1;

    switch (res2){
        case 1:
        atk1 = 20;
        def1 = 10;
        printf("Bulbasaur deu: ");
        break;
        case 2:
        atk1 = 40;
        def1 = 3;
        printf("Charmander deu: ");
        break;
        case 3:
        atk1 = 30;
        def1 = 5;
        printf("Squirtle deu: ");
        break;
        case 4:
        atk1 = 35;
        def1 = 3;
        printf("Pikachu deu: ");
        break;
        case 5:
        atk1 = 25;
        def1 = 6;
        printf("Eevee deu: ");
        break;
        case 6:
        atk1 = 30;
        def1 = 3;
        printf("Meowth deu: ");
        break;
        case 7:
        atk1 = 50;
        def1 = 0;
        printf("Machop deu: ");
        break;
        case 8:
        atk1 = 25;
        def1 = 4;
        printf("Magnemite deu: ");
        break;
        case 9:
        atk1 = 35;
        def1 = 2;
        printf("Gastly deu: ");
        break;
        case 10:
        atk1 = 10;
        def1 = 1;
        printf("Magikarp deu: ");
        break;
        }

        switch (res3){
        case 1:
        atk2 = 20;
        def2 = 10;
        break;
        case 2:
        atk2 = 40;
        def2 = 3;
        break;
        case 3:
        atk2 = 30;
        def2 = 5;
        break;
        case 4:
        atk2 = 35;
        def2 = 3;
        break;
        case 5:
        atk2 = 25;
        def2 = 6;
        break;
        case 6:
        atk2 = 30;
        def2 = 3;
        break;
        case 7:
        atk2 = 50;
        def2 = 0;
        break;
        case 8:
        atk2 = 25;
        def2 = 4;
        break;
        case 9:
        atk2 = 35;
        def2 = 2;
        break;
        case 10:
        atk2 = 10;
        def2 = 1;
        break;
        }

        switch (ron){
        case 1:
        tou1 = atk1 - def2;
        hp2 = hp2 - (atk1 - def2);
        printf("%i de dano.", tou1);
        break;

        case 2:
        tou2 = atk1 - def2;
        hp2 = hp2 - (atk1 - def2);
        printf("%i de dano.", tou2);
        break;
        case 3:
        tou3 = atk1 - def2;
        hp2 = hp2 - (atk1 - def2);
        printf("%i de dano.", tou3);
        break;
        }

        switch (res3){
        case 1:
        printf("\nBulbasaur deu: ");
        break;
        case 2:
        printf("\nCharmander deu: ");
        break;
        case 3:
        printf("\nSquirtle deu: ");
        break;
        case 4:
        printf("\nPikachu deu: ");
        break;
        case 5:
        printf("\nEevee deu: ");
        break;
        case 6:
        printf("\nMeowth deu: ");
        break;
        case 7:
        printf("\nMachop deu: ");
        break;
        case 8:
        printf("\nMagnemite deu: ");
        break;
        case 9:
        printf("\nGastly deu: ");
        break;
        case 10:
        printf("\nMagikarp deu: ");
        break;
        }
        switch (ron){
        case 1:
        tou4 = atk2 - def1;
        hp1 = hp1 - (atk2 - def1);
        printf("%i de dano.", tou4);
        break;

        case 2:
        tou5 = atk2 - def1;
        hp1 = hp1 - (atk2 - def1);
        printf("%i de dano.", tou5);
        break;
        case 3:
        tou6 = atk2 - def1;
        hp1 = hp1 - (atk2 - def1);
        printf("%i de dano.", tou6);
        break;
        }
        ron = ron + 1;
        if (ron == 4){
            printf("\nNo final foi o ");
            if (hp1 > hp2){
                printf("J1 que ganhou!");
            }else if (hp1 < hp2){
                printf("CPU que ganhou!");
            }else{
                printf("grande empate!");
            }
            printf("\nJ1 = %i", hp1);
            printf("\nCPU = %i",hp2);
            printf("\n\nFazer o que: \n1. Menu Iniciar \n2. Jogar Novamente \nOutros. Sair do Jogo \nResposta:");
            scanf("%i", res4);
            system("cls");
            hp1 = 1000;
            hp2 = 1000;
            if (res4 == 1){
                goto iniciar;
            }else if (res4 == 2){
                ron = 1;
                goto compu;
            }
        }else{
        goto compu;
        }

    break;

    case 3:

    round:

    res2 = 0;
    res3 = 0;
    atk1 = 0;
    def1 = 0;
    atk2 = 0;
    def2 = 0;

    printf("\n================================================================");
    if (ron == 1){
    printf("\nJogador 1 escolha o primeiro pokemon:\n1. Bulbasaur;\n2. Charmander;\n3. Squirtle;\n4. Pikachu;\n5. Eevee;\n6. Meowth;\n7. Machop;\n8. Magnemite;\n9. Gastly;\n10. Magikarp;\nResposta:");
    scanf("%i", &res2);
    system("cls");

    }else if (ron == 2){
    printf("\nJogador 1 escolha o segundo pokemon:\n1. Bulbasaur;\n2. Charmander;\n3. Squirtle;\n4. Pikachu;\n5. Eevee;\n6. Meowth;\n7. Machop;\n8. Magnemite;\n9. Gastly;\n10. Magikarp;\nResposta:");
    scanf("%i", &res2);
    system("cls");

    }else if (ron == 3){

    printf("\nJogador 1 escolha o ultimo pokemon:\n1. Bulbasaur;\n2. Charmander;\n3. Squirtle;\n4. Pikachu;\n5. Eevee;\n6. Meowth;\n7. Machop;\n8. Magnemite;\n9. Gastly;\n10. Magikarp;\nResposta:");
    scanf("%i", &res2);
    system("cls");
    }

    if (res2 > 0 && res2 < 11){
        printf("\n================================================================");
        if (ron == 1){

        printf("\nJogador 2 escolha o primeiro pokemon:\n1. Bulbasaur;\n2. Charmander;\n3. Squirtle;\n4. Pikachu;\n5. Eevee;\n6. Meowth;\n7. Machop;\n8. Magnemite;\n9. Gastly;\n10. Magikarp;\nResposta:");
        scanf("%i", &res3);
        system("cls");

        }else if (ron == 2){

        printf("\nJogador 2 escolha o segundo pokemon:\n1. Bulbasaur;\n2. Charmander;\n3. Squirtle;\n4. Pikachu;\n5. Eevee;\n6. Meowth;\n7. Machop;\n8. Magnemite;\n9. Gastly;\n10. Magikarp;\nResposta:");
        scanf("%i", &res3);
        system("cls");

        }else if (ron == 3){

        printf("\nJogador 2 escolha o ultimo pokemon:\n1. Bulbasaur;\n2. Charmander;\n3. Squirtle;\n4. Pikachu;\n5. Eevee;\n6. Meowth;\n7. Machop;\n8. Magnemite;\n9. Gastly;\n10. Magikarp;\nResposta:");
        scanf("%i", &res3);
        system("cls");
        }
        if (res3 > 0 && res3 < 11){

        switch (res2){
        case 1:
        atk1 = 20;
        def1 = 10;
        printf("Bulbasaur deu: ");
        break;
        case 2:
        atk1 = 40;
        def1 = 3;
        printf("Charmander deu: ");
        break;
        case 3:
        atk1 = 30;
        def1 = 5;
        printf("Squirtle deu: ");
        break;
        case 4:
        atk1 = 35;
        def1 = 3;
        printf("Pikachu deu: ");
        break;
        case 5:
        atk1 = 25;
        def1 = 6;
        printf("Eevee deu: ");
        break;
        case 6:
        atk1 = 30;
        def1 = 3;
        printf("Meowth deu: ");
        break;
        case 7:
        atk1 = 50;
        def1 = 0;
        printf("Machop deu: ");
        break;
        case 8:
        atk1 = 25;
        def1 = 4;
        printf("Magnemite deu: ");
        break;
        case 9:
        atk1 = 35;
        def1 = 2;
        printf("Gastly deu: ");
        break;
        case 10:
        atk1 = 10;
        def1 = 1;
        printf("Magikarp deu: ");
        break;
        }

        switch (res3){
        case 1:
        atk2 = 20;
        def2 = 10;
        break;
        case 2:
        atk2 = 40;
        def2 = 3;
        break;
        case 3:
        atk2 = 30;
        def2 = 5;
        break;
        case 4:
        atk2 = 35;
        def2 = 3;
        break;
        case 5:
        atk2 = 25;
        def2 = 6;
        break;
        case 6:
        atk2 = 30;
        def2 = 3;
        break;
        case 7:
        atk2 = 50;
        def2 = 0;
        break;
        case 8:
        atk2 = 25;
        def2 = 4;
        break;
        case 9:
        atk2 = 35;
        def2 = 2;
        break;
        case 10:
        atk2 = 10;
        def2 = 1;
        break;
        }

        switch (ron){
        case 1:
        tou1 = atk1 - def2;
        hp2 = hp2 - (atk1 - def2);
        printf("%i de dano.", tou1);
        break;

        case 2:
        tou2 = atk1 - def2;
        hp2 = hp2 - (atk1 - def2);
        printf("%i de dano.", tou2);
        break;
        case 3:
        tou3 = atk1 - def2;
        hp2 = hp2 - (atk1 - def2);
        printf("%i de dano.", tou3);
        break;
        }

        switch (res3){
        case 1:
        printf("\nBulbasaur deu: ");
        break;
        case 2:
        printf("\nCharmander deu: ");
        break;
        case 3:
        printf("\nSquirtle deu: ");
        break;
        case 4:
        printf("\nPikachu deu: ");
        break;
        case 5:
        printf("\nEevee deu: ");
        break;
        case 6:
        printf("\nMeowth deu: ");
        break;
        case 7:
        printf("\nMachop deu: ");
        break;
        case 8:
        printf("\nMagnemite deu: ");
        break;
        case 9:
        printf("\nGastly deu: ");
        break;
        case 10:
        printf("\nMagikarp deu: ");
        break;
        }

        switch (ron){
        case 1:
        tou4 = atk2 - def1;
        hp1 = hp1 - (atk2 - def1);
        printf("%i de dano.", tou4);
        break;

        case 2:
        tou5 = atk2 - def1;
        hp1 = hp1 - (atk2 - def1);
        printf("%i de dano.", tou5);
        break;
        case 3:
        tou6 = atk2 - def1;
        hp1 = hp1 - (atk2 - def1);
        printf("%i de dano.", tou6);
        break;
        }
        ron = ron + 1;
        if (ron == 4){
            printf("\nNo final foi o ");
            if (hp1 > hp2){
                printf("J1 que ganhou!");
            }else if (hp1 < hp2){
                printf("J2 que ganhou!");
            }else{
                printf("grande empate!");
            }
            printf("\nJ1 = %i", hp1);
            printf("\nJ2 = %i",hp2);
            printf("\n\nFazer o que: \n1. Menu Iniciar \n2. Jogar Novamente \nOutros. Sair do Jogo \nResposta:");
            scanf("%i", &res4);
            system("cls");
            hp1 = 1000;
            hp2 = 1000;
            if (res4 == 1){
                goto iniciar;
            }else if (res4 == 2){
                ron = 1;
                goto round;
            }
        }else{
        goto round;
        }

        }else{
        printf("ERRO!");
        }
        }else{
        printf("ERRO!");
        }
        break;
    case 4:
        printf("Feito por Thiago Mazzoni. \n Voltar aperte 1");
        scanf("%i", &zzz);
        goto iniciar;
    }
}
