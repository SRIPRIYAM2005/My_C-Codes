#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    char str2[20];
    char unique[20];
    int k = 0,flag=0;
    scanf("%s",str);
    char max;
    for (int i = 0;i<strlen(str);i++) {
        if (str[i] >= 65 && str[i] <= 90) 
        str2[i] = str[i] + 32;
        else
        str2[i] = str[i] - 32;
    }
 //   printf("%s\n",str2);
     for (int i = 0;i<strlen(str);i++) {
       for (int j = 0;j<strlen(str);j++) {
           if (j == i) continue;
           if (str[i] == str2[j]) 
               flag++;
           }
       if (flag == 1){
           flag = 0;
             if (str[i] >= 65 && str[i] <= 90) {    
            unique[k] = str[i];
            k++;}
            continue;
       }
       flag = 0;
   }
   if (strlen(unique) == 0) {
       printf("no common letter found!");
       return 0;
       
   }
    max=unique[0];
   for (int i = 0;i<strlen(unique);i++) {
           if (max < unique[i]) {
               max = unique[i];
       }
   }
     printf("%c",max);
}
  
   
