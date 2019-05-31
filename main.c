//
//  main.c
//  HW23
//
//  Created by Mac on 2019/5/31.
//  Copyright © 2019年 Mac. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(void)
{
    FILE *pFile;
    char poem[50];
    int c;
    int sum=0;
    printf("-------------------------------------------------\n");
    
    printf("               用唯讀模式讀取data.txt            \n");
    
    printf("-------------------------------------------------\n");
    printf("讀取內容為：\n");
    pFile=fopen("data.txt", "r");
    if (pFile==NULL)
    {
        printf("檔案開啟失敗!!\n");
        exit(1);
    }
    rewind(pFile);
    while ((fgets(poem, 50, pFile)) != NULL)
        printf("%s", poem);
    printf("\n");
    fclose(pFile);
    system("pause");
    return 0;
}
