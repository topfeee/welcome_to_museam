#include<stdio.h>
int main(){
    char str[][30] = {"syvanonh","ekthaviphonh","sanasay","thipphavong","andina","juje","zeokham","anosith","thippavanh","sanakham","thongchan","souphaxay","dalavang","phouthongphet","mina","sitthiphone","alisa","anoulack","vanasack","oudomphon","sokxay"};
    int j = 1;
    printf("------------------------\n");
    printf(" Members of class 1cs1\n");
    printf("------------------------\n\n");
    for (int i = 0; i < 21; i++)
    {
        printf("member[%d] = %s\n",j++,str[i]);
    }    
    return 0;
}
