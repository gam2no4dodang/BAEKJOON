//
////1 (컴파일에러 - 처음엔 간단하게 생각해 예문인 고양이를 한줄한줄 잘라 프린트 문에 붙혀넣었다 근데 안된다 //알고보니 main에 오타가 나서 maun이라고 작성했다)
//
//#include <stdio.h>
//
//int maun() { printf("\ /\ /n"); printf(" ) ( ') /n"); printf("( / ) /n"); printf(" (__)|) /n"); return 0; }
//
////2 (틀렸습니다 - 차근차근 다시 작성하여보니 틀렸다 아무래도 C++의 printf에는 공백을 넣을 수 없는 것 같다)
//
//#include <stdio.h>
//
//int main() { printf("\ /\ /n"); printf(" ) ( ') /n"); printf("( / ) /n"); printf(" (__)|) /n"); return 0; }
//
////3 (컴파일에러 - 그래도 일단 포기하지 않고 여러가지 방법으로 넣어봤다 하지만 공백이 들어가지 않는단 // 것은 점점 맞는거 같다)
//
//#include <stdio.h>
//
//int main() {
//	printf("
//		\ /
//	) (') ( / ) (__)| /n");
//		return 0;
//}
//
////4 (컴파일에러 - 다음 단계를 위해 작성하다 잠시 생각과 확인을 위해 쓰다가 제출했다)
//
//#include <stdio.h> #include #include using namespace std;
//
//int main() {
//	"\ /\ ( ') ( /
//		(__) | ) return 0;
//}
//
////5 (컴파일에러 - printf문을 포기하고 cout으로 갈아탔다 헤더파일도 추가하고 선언도 해보았지만 아직 부족한 것같 //다)
//
//#include <stdio.h> #include #include using namespace std;
//
//int main() {
//	cout << " \ /
//		) (') ( / ) (__)| "; return 0; }
//
//		//6 (틀렸습니다 - printf문에 참 미련이 많은 것 같다 헤더파일 바꿨다고 혹시나해서 또 printf문 사용해보는 모습이다)
//
//#include using namespace std;
//
//			int main() { printf("\ /\ /n"); printf(" ) ( ') /n"); printf("( / ) /n"); printf(" (__)|) /n"); return 0; }
//
//	//7 (컴파일에러 - 조금 정답에 가까워 지긴했다 하지만 cout사용법이 익숙치 않아 허둥댔기 때문에 이 문제를 //푸는데 많은 어려움이 있던 것같다 여기까지 왔음에도 많이 어려웠다)
//
//#include using namespace std;
//
//	int main() { cout << "\ /" << endl; cout << " ) ( ')" << endl; cout << "( / )" << endl; cout << " (__)|"; return 0; }
//
//	//8 (컴파일에러 - 혹시나해서 #include 를 추가했다)
//
//#include #include using namespace std;
//
//	int main() { cout << "\ /" << endl; cout << " ) ( ')" << endl; cout << "( / )" << endl; cout << " (__)|"; return 0; }

	//9 (맞았습니다 - 결국 인터넷에 해석을 검색해보았다, \를 두번 쳐야 표시가 된다나... 참 어렵다,.,)

#include

	using namespace std;

	int main() {
		cout << "\ /\"<< endl; cout << ") (')" << endl; cout << "( / )" << endl; cout << " \(__)|" << endl; return 0; }