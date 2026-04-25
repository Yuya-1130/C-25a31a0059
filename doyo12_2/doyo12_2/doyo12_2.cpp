// doyo12_2.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include<stdio.h>

//	answe　をコンソールに表示する関数 f を定義する
// 引数    : int 型の値を受け取る
// 戻り値  : 引数の二つの値を足した値
void f() {
	static int answer = 0;
	answer = answer + 1;
	printf("関数ｆが呼び出されました。　answer は[%d] です\n", answer);
	return 0;
	
}
// メイン関数
int main(){

	// 関数 f を使う
	 f(1,3);
	 f();
	return 0;
}
//	answe　をコンソールに表示する関数 f を定義する
// 引数    : int 型の値を受け取る
// 戻り値  : 引数の二つの値を足した値
int f(int number, int number2) {
	int answer = number + number2;
	return answer;
	
}