#include <stdio.h> //"%[^\n]"

struct Pets
{
    char nome[100];
    char especie[100];
}pets;

int Cadastro(int n, int m)
{
    struct Pets pets[100];
    printf("Por favor, digite o nome do seu Pets:\n");
    scanf("%[^\n]", &Pets.nome[0]);
    printf("Por favor, digite a especie do seu Pets:\n");
    scanf("%[^\n]", &Pets.especie);
    while()
    n = n - 3;
    return n;
}

int maior_Nome(int n)
{
    for(int x = 0; x <= Pets.nome[100]; x++)
    {
        
    }
    n = n - 1;
    return n;
}

int maior_Especie(int n)
{
    for(int x = 0; x <= Pets.especie[100]; x++)
    {
        
    }
    n = n - 2;
    return n;
}

int main()
{
    int N_pets, i, opcao, contador = 0;
    printf("Por favor, digite quantos Pets quer cadastrar:\n");
    scanf("%d", &N_pets);
    
    printf("\n----------Menu----------\n");
    printf("Fazer Cadastro (1)\n");
    printf("Ver qual a especie mais frequente (2)\n");
    printf("Ver o MAIOR nome de pet (3)\n");
    printf("Sair (0)\n");
    printf("-------------------------\n");
    scanf("%d", &opcao);
    
    struct Pets pets[100];
    
    while(opcao =! 0 ){
        if(opcao == 3)
        {
            Cadastro(opcao);
            contador++;
        }
        else if(opcao == 2)
        {
            maior_Especie(opcao);
        }
        else if(opcao == 1)
        {
            maior_Nome(opcao);
        }
        else
        {
            if(contador < N_pets)
            {
                printf("\n----------Menu----------\n");
                printf("Fazer Cadastro (3)\n");
                printf("Ver qual a especie mais frequente (2)\n");
                printf("Ver o MAIOR nome de pet (1)\n");
                printf("Sair (0)\n");
                printf("-------------------------\n");
                scanf("%d", &opcao);
            }
            else
            {
                printf("\n----------Menu----------\n");
                printf("Ver qual a especie mais frequente (2)\n");
                printf("Ver o MAIOR nome de pet (1)\n");
                printf("Sair (0)\n");
                printf("-------------------------\n");
                scanf("%d", &opcao);
            }
        }
    }
    
    return 0;
}
