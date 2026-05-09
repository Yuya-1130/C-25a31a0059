#include "disp.h"
#include <stdio.h>

static int total;
static float avarage;

// 合計点と平均点の関数の定義
void dispResult(int Jap, int Mat, int Sci, int Eng, int Soc) {
    //合計と平均の計算
    total = Jap + Mat + Sci + Eng + Soc;
    avarage = (float)total / 5.0f;

    //結果を出力
    printf("国語：%d点 / 数学：%d点 /理科：%d点 / 英語：%d点 / 社会：%d点 \n", Jap, Mat, Sci, Eng, Soc);
    printf("\n");
    printf("合計点: %d点 / 平均点: %.1f点\n", total, avarage);
}

// 合格判定と結果の表示の関数の定義
void dispPass(int Jap, int Mat, int Sci, int Eng, int Soc) {
    //合否判定
    const int pass_score = 40; // 教科ごとの合格点は40
    bool pass_Jap = (pass_score <= Jap);
    bool pass_Mat = (pass_score <= Mat);
    bool pass_Sci = (pass_score <= Sci);
    bool pass_Eng = (pass_score <= Eng);
    bool pass_Soc = (pass_score <= Soc);

    // すべての教科で合格しているか
    bool pass_all = pass_Jap && pass_Mat && pass_Sci && pass_Eng && pass_Soc;

    printf("\n");

    //合否を出力
    const int pass_avarage = 60.0f;
    if (pass_avarage <= avarage && pass_all) {
        printf("合格\n");
    }
    else {
        printf("不合格です\n");

        printf("\n");

        if (avarage < pass_avarage) {
            printf("平均点が60未満です\n");
        }
        printf("\n");
        if (!pass_Jap)
        {
            printf("国語が40点未満です\n");
        }
        if (!pass_Mat)
        {
            printf("数学が40点未満です\n");
        }
        if (!pass_Sci)
        {
            printf("理科が40点未満です\n");
        }
        if (!pass_Eng)
        {
            printf("英語が40点未満です\n");
        }
        if (!pass_Soc)
        {
            printf("社会が40点未満です\n");
        }

    }
}