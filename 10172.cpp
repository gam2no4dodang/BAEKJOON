////1 (컴파일에러 - 일단 어제의 고양이 문제와 비슷해 보였기에 헤더는 를 사용했고 using namespace std;도 //선언해 주었으며 cout을 이용해 \는 두번 써주어 출력되도록하였다 하지만 오류가 떠서 왜그럴까 생각을 해보았는데 //가만보니 "가 들어있어 이게 꼬여서 출력하기 힘들 것같아 보였다)
//
//#include using namespace std; { cout<<"|\/|"<<endl; cout<<"|q p| /}"<<endl; cout<<"( 0 )"""\"<<endl; cout<<"|"^"` |"<<endl; cout<<"||/=\\__|"<<endl; return 0; }
//
////2 (컴파일에러 - 찾아보니 " 나 ' 앞엔 \ 를 하나 붙혀주어야 출력이 된다고한다 그래서 앞에 하나씩 붙혀주었지만 //아직 오류가 뜬다)
//
//#include using namespace std; { cout<<"|\/|"<<endl; cout<<"|q p| /}"<<endl; cout<<"( 0 )"""\<<endl; cout<<"|"^"` |"<<endl; cout<<"||/=\\__|"<<endl; return 0; }
//
////3 (컴파일에러 - 왜 오류가 나는지 이때까진 알 수 없었다)
//
//#include using namespace std; { std::cout<<"|\/|"<<endl; std::cout<<"|q p| /}"<<endl; std::cout<<"( 0 )"""\<<endl; std::cout<<"|"^"` |"<<endl; std::cout<<"||/=\\__|"<<endl; return 0; }
//
////4 (컴파일에러 - 알고보니 하나는 6번째 줄에 "를 안닫았던 것이였다 코딩을 한참 쉬다가 다시하니 이런 사소한 //실수가 정말 많은 것 같다)
//
//#include using namespace std; { std::cout<<"|\/|"<<endl; std::cout<<"|q p| /}"<<endl; std::cout<<"( 0 )"""\"<<endl; std::cout<<"|"^"` |"<<endl; std::cout<<"||/=\\__|"<<endl; return 0; }
//
////5 (컴파일에러 - 윗부분에 자꾸 오류가 떠 오류를 스크랩해 검색해보니 ;를 지워야한다 뭐다 말이 많아 //using namespace std; 의 ;를 지워보았다 역시 이게 답일리 없다)
//
//#include using namespace std { std::cout<<"|\/|"<<endl; std::cout<<"|q p| /}"<<endl; std::cout<<"( 0 )"""\"<<endl; std::cout<<"|"^"` |"<<endl; std::cout<<"||/=\\__|"<<endl; return 0; }

//6 (맞았습니다 - 알고보니 또 기초적인 것을 빼먹었다.. int main()을 적지 않았던 것이다 이걸 깨닳았을 때 좀 //입이 썻다,,)

#include using namespace std;

int main() {
	std::cout << "|\/|" << endl; std::cout << "|q p| /}" << endl; std::cout << "( 0 )"""\"<<endl; std::cout<<" | "^"` | "<<endl; std::cout<<" || /= \\__ | "<<endl; return 0; }