#include<stdio.h>
#include <string.h>



int main (void){
    char introductitonmessage[]= "[X] hahahaha I will keep spreading, till you enter the secret code or you can give up by typing (giveup)";
    char failmessage[] = "[X] hahahahahaha I told you, I will keep spreading !";
    char successmessage[] = "[X] grgrgrgrgrgrg You stopped me from spreading this time, but you won't next time";
    char privilegemessage [] = "[X] grgrgrgrgrgrg I will stop spreading because you are nasef's friend";
    char secretcode [] = "SECRET{c4n_y0u_234d_7h3_11n35}";
    char privilegecode [] = "PRIVILEGE{iamnasef}";
    char value[]="no";

    while(1){
        printf("%s \n",introductitonmessage);
        printf("> ");
        scanf("%s", &value);

        if(strcmp(value,"giveup")==0){
            printf("%s \n",failmessage);
            break;
        }else if(strcmp(value,privilegecode)==0){
            printf("%s \n",privilegemessage);
            break;
        }else if(strcmp(value,secretcode)==0){
            printf("%s \n",successmessage);
            break;
        }else{
            printf("%s \n",failmessage);       
        }

    }


}