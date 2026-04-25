// doyo12.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{   // 変数を宣言する
	//float number;
	// 少数を代入する
	//number = 1.2;
	// 変数「number」にキーボードで押下した数値を代入する
	/*scanf_s("%f", &number);

	printf("入力した値は %f です\n", number);

	char c = 'a';
	printf("%c\n", c);*/
	// 1 + 1 の結果を変数「add」に宣言と同時に代入する
	//int add = 1 + 1;
	// 1 - 1 の結果を変数「sub」に宣言と同時に代入する
	//int sub = 1 - 1;
	// 1 * 1 の結果を変数「mul」に宣言と同時に代入する
	//int mul = 1 * 1;
	// 1 / 1 の結果を変数「div」に宣言と同時に代入する
	//int div = 1 / 1;

	//int ans = 2 + 3 * 4;

	/*int a = 1;
	int b = 2;

	float answer = static_cast<float>(a) / static_cast<float>(b);
	printf("%f\n", answer);*/

	//int answer = 5;
	
	


		int t = (int)time(nullptr);

		int answer = t % 10;

		bool Clear = true;

		while (Clear)
		{
			int input;

			scanf_s("%d", &input);

			int rank = 0;

			int sub = answer - input;

			if (answer == input)
			{
				rank = 2;
				printf("一致！\n");
			}

			else if (sub > -3 && sub < 3)
			{
				rank = 1;
				printf("惜しい！\n");
			}
			else if (answer < input)
			{
				printf("大きい！\n");
			}
			else if (answer > input)
			{
				printf("小さい！\n");
			}

			/*if (sub > -3)
			{
				if (sub < 3)
				{
					printf("惜しい！\n");
				}
			}*/

			switch (rank)
			{
			case 2:
				printf("ランクS\n");
				Clear = false;

				break;
			case 1:
				printf("ランクA\n");
				break;
			default:
				printf("ランクB\n");
				break;

			}

			if (Clear)
			{

			}
		}
		return 0;
}

