#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//構造体の定義
struct /*「任意の名前」*/{
    /*項目名の宣言（型と名）*/
    
    
    
};

int main(void){
    int id,i=0,ID;
    int gender;
    double height;
    char fname[FILENAME_MAX];
    char buf[256];
    FILE* fp;
    struct /*「上で定義した任意の名前」 「新たな任意の名前」[「標本の数」]*/;   //main外で定義した任意の名前の構造体をmain内では「新たな任意の名前」として扱う

    /*heights.csvからデータを得る*/
    printf("input the filename of sample height:");
    fgets(fname,sizeof(fname),stdin);
    fname[strlen(fname)-1] = '\0';
    printf("the filename of sample : %s\n",fname);
    fp = fopen(fname,"r");
    if(fp==NULL){
        fputs("File open error\n",stderr);
        exit(EXIT_FAILURE);
    }
    fgets(buf, sizeof(buf),fp);//heights.csvの１行目は項目名なので空読みします
    while(fgets(buf,sizeof(buf),fp) != NULL){
        sscanf(buf,"%d ,%lf",&gender,&height);
        /* genderとheightを構造体に入れていきます。
        (構造体名)[i(番目)].(項目名)＝(値)という風に書きます。
        heightも同様に追加します。
        i++;
        */
    }
    if(fclose(fp) == EOF){
        fputs("file close error\n",stderr);
        exit(EXIT_FAILURE);
    }

    /*ID.csvからデータを得る*/
    printf("input the filename of sample ID:");
    fgets(fname,sizeof(fname),stdin);
    fname[strlen(fname)-1] = '\0';
    printf("the filename of sample: %s\n",fname);
    fp = fopen(fname,"r");
    if(fp==NULL){
        fputs("File open error\n",stderr);
        exit(EXIT_FAILURE);
    }
    /* このままだとi=14から始まるので0で初期化してください。*/

    while(fgets(buf,sizeof(buf),fp) != NULL){
        sscanf(buf,"%d",&id);
        /* gender,heightと同様に構造体にIDを追加してください。*/

        i++;
    }
    if(fclose(fp) == EOF){
        fputs("file close error\n",stderr);
        exit(EXIT_FAILURE);
    }
    /*検索パート*/
    printf("Which ID's data do you want?\n");
    scanf("%d", &ID);
    /* IDを構造体から探します。
    このままだとi=14から始まるので0で初期化してください。
    while文で　標本の数(14)周する
        if文で　もし構造体のi番目のIDが受け取ったIDなら
            if文で　もし構造体のi番目のgenderが1なら
                print  (ID),'Male',(height)
            else文で　もし構造体のi番目のgenderが2なら
                print  (ID),'Female',(height)
            return 0;
        i++;
    printf('No data');　//14周しても見つからない場合
    return 0;
    */
}