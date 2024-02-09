#include<stdio.h>
#include <string.h>



int main (void){
    char introductiton[]= "[X] hahahaha I will keep spreading, till you enter the secret code or you can give up by typing (giveup)";
    char fail[] = "[X] hahahahahaha I told you, I will keep spreading !";
    char success[] = "[X] grgrgrgrgrgrg You stopped me from spreading this time, but you won't next time";
    char privilege [] = "[X] grgrgrgrgrgrg I will stop spreading because you are nasef's friend";
    char secretcode [] = "SECRET{c4n_y0u_234d_7h3_11n35}";
    char value[]="no";

    while(1){
        printf("%s \n",introductiton);
        printf("> ");
        scanf("%s", &value);

        if(strcmp(value,"giveup")==0){
            printf("%s \n",fail);
            break;
        }else if(strcmp(value,"PRIVILEGE{iamnasef}")==0){
            printf("%s \n",privilege);
            break;
        }else if(strcmp(value,"SECRET{c4n_y0u_234d_7h3_11n35}")==0){
            printf("%s \n",success);
            break;
        }else{
            printf("%s \n",fail);       
        }

    }


}