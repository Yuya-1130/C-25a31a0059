

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "disp.h"

int main()
{
    //ランダムな５教科の点数を作成する

       int Jap;
       int Mat;
       int Sci;
       int Eng;
       int Soc;

       srand((unsigned int)time(NULL));
       Jap = rand() % 100 + 1;
       Mat = rand() % 100 + 1;
       Sci = rand() % 100 + 1;
       Eng = rand() % 100 + 1;
       Soc = rand() % 100 + 1;
   
       //合計点と平均点を計算と表示
       dispResult(Jap, Mat, Sci, Eng, Soc);
       //合格判定と結果の表示
       dispPass(Jap, Mat, Sci, Eng, Soc);
      
      
   
}

