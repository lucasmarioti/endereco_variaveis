#include <stdio.h>

int main()
{
    
    # define tamanho 7
    
   int m_7851[tamanho];
   
   
   for(int i=0; i<tamanho; i++){
        printf("endereco %p \n",m_7851 + i); 
   }    

    return 0;
}
