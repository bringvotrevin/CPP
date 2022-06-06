# C++
42seoul cpp 과제 규칙
* compile flag : -Wall -Werror -Wextra -std=c++98 => 함수나 자료형 사용시 cplusplus.com과 cppreference.com에서 버전 확인 후 사용함
* using standard library is allowed
* no external library
* no \*printf. \*alloc(), free()
* using namespace and friend is forbidden
* STL is only allowed in CPP08
* from CPP02 to CPP08, the classes must be designed in the Orthodox Canonical Form
* function implementation put in a header file is not allowed

## CPP00~CPP08까지 subject과 설명들은 wiki 참조

## [CPP00]
### ex00 Megaphone
실행시 받은 인자중 소문자를 대문자로 바꿔서 출력하는 프로그램을 만들어라</br>
=> toupper 함수 이용</br>
string을 처음으로 사용. 멤버 함수인 begin, end, size, length 등을 이용해서 쉽게 정보를 얻을 수 있다</br>

### ex01 My Awesome PhoneBook
PhoneBook과 Contact 클래스를 이용해 ADD, SEARCH, EXIT 기능이 있는 전화번호부 프로그램 만들기</br>
implement two classes :
* PhoneBook
    1. it has array of contacts
    2. it can store a maximum of 8 contacts. if you add 9th contact, replace the oldest one by the new one
    3. dynamic allocation is forbidden
* Contcat
    * stands for a phonebook contact
The program only accepts ADD, SEARCH, EXIT
* ADD
    * contact fields ar : first name, last name, nickname, phone number, darkest secret
* SEARCH
    * display the saved contacts as a list of 4 columns: index, first name, last name and nickname
    * Each column must be 10 characters wide, separated by '|' and right-aligned. is the text is longer than the column, turncate it and last displayable character will be replaced by dot('.')
    * then put an index number for more imformation
* EXIT
    * the program quits and the contact are lost forever!

인풋값을 std::getline으로 받을지 std::cin으로 받을지에 대해 많이 고민함 </br>

[ std::cin ]
입력값을 띄어쓰기, 엔터등으로 나누기 때문에 공백을 무시함</br>
* ERROR : " ADD SEARCH " 이런식으로 공백을 사이에 두고 두 문자를 입력했을 때 ADD부분만 인풋으로 들어와서 사용되고 버퍼에 SEARCH가 남아 있어서 다음 입력값을 받는 부분에서 자동으로 SEARCH값이 들어와서 실행됨
    => 우선 값을 받아서 변수에 저장 후, cin.get()를 사용해 뒤에 남은 버퍼가 개행인지 여부를 확인함

[ std::getline ]
개행을 기준으로 입력값을 받음</br>
contact 정보를 저장할 때 띄어쓰기가 있어도 전체 인풋 값이 잘 저장되어야 하기 때문에 getline이용</br>
* ERROR : 공백이 모두 저장됨
    => 첫번째 파라미터에 std::cin >> std::ws로 앞의 공백을 모두 스킵해줌

## [CPP01]
### ex00 BraiiiiiiinnnzzzZ
zombie class를 만들고 생성자와 소멸자가 호출되는 떄를 알 수 있게 알맞은 출력물을 넣는다. 그 후 정적할당으로 zombie를 생성시키는 함수 하나, new 를 사용해서 동적할당으로 zombie를 생성하는 함수를 하나 만들어서 각각 zombie들의 생성, 소멸 타이밍을 확인한다. 정적할당은 해당 함수를 벗어날 때 소멸되나 동적할당으로 생성한 좀비는 직접 delete를 해줘야 소멸이 됨</br>
main문에서 동적할당으로 선언시 프로그램이 종료되더라도 포인터를 잃지 않기 때문에 delete를 하지 않아도 leaks가 뜨지 않으나 다른 함수에서 동적할당을 한 메모리를 해제하지 않았을 경우 함수를 벗어날 때 그 메모리를 참조할 방법이 없기 때문에 꼭 delete를 해줘야함

### ex01 Moar brainz!
zombie 배열을 만들어보기 `new name[num]` 형식으로 할당하고 `delete []name`으로 해제

### ex02 Hi this is brain
참조자를 써보는 과제. c++에서 call-by-reference 구현 방법에는 두 가지 방법이 있는데 첫번째는 주소값을 이용하는것, 두번째는 참조자를 이용하는것.</br>
참조자는 자신이 참조하는 변수를 대신할 수 있는 또 하나의 이름이다. 변수에만 선언이 가능하며 선언과 동시에 초기화되어야 한다. 또한 NULL로 초기화도 불가.</br>
포인터 같은 경우 잘못 사용할 확률이 높으니 (\*, & 등 다양한 기호 사용) 상대적으로 활용법이 기존 변수와 동일한 참조자를 이용하는것이 훨씬 사용하기 편하다. 그러나 c에서는 변수를 그대로 어떤 함수로 넘길 때 그 값이 변하지 않는다고 단정지을 수 있으나 c++에서는 함수가 참조자를 이용해 매개변수를 받을지도 모르니 더 주의깊게 코드를 봐야 한다. 그렇기 때문에 함수 내에서 참조자를 통해 값을 변경하지 않을 때에는 참조자를 const로 선언해서 함수 원형을 봤을 때 값의 변경이 이뤄지지 않음을 명시해주는 습관을 기르는게 중요

### ex03 Unnecessary violence
앞서 나온 참조자를 이용해 클래스에 활용해보는것인데 HumanA, HumanB 클래스가 있으며 각각 클래스는 내부에 Weapon이라는 클래스를 가지고 있다. 그러나 HumanA는 언제나 Weapon클래스를 가지고 있어야 하고 HumanB는 가지고 있을때도, 없을때도 있다.</br>
참조자는 선언과 동시에 초기화되어야하며 NULL이 올 수 없다 그렇기 때문에 언제나 Weapon 클래스를 가지고있어야하는 HumanA는 참조자로 Weapon을 가지고 있으며 HumanB는 포인터로 가지고 있도록 만들었다.

### ex04 Sed is for losers
Create a program that takes three parameters in the following order: a filename and two strings, s1 and s2</br>
It will open the file <filename> and copies its content into a new file <filename>.replacem replacing every occurrence of s1 with s2.</br>
(Forbidden functions : std::string::replace)</br>
파일 입출력을 다뤄보는 과제.</br>
`std::ifstream`으로 입력 파일, `std::ofstream`으로 출력 파일을 다룸. `is_open()`으로 정상적으로 작동했는지 확인함</br>
c에서는 `close`함수를 이용해 닫아줘야 했으나 여기선 특별한 경우 아닌 이상 close를 굳이 쓸 필요 없음</br>
replace가 금지되어 있기 때문에 find와 substr을 이용해서 매번 문자열을 찾고 변형할 string을 변형했으나 평가중 어떤 분께서 find의 두번째 인자로 탐색을 시작할 위치가 있다고 알려주셔서 매번 substr로 잘라서 새 string을 만들 필요 없이 탐색한 위치만 저장해두고 활용하는 방법을 알려주심 (그러나 후에 yoojlee가 시도해봤으나 약간의 문제가 있었음 이부분은 추후에 더 봐야 할듯)

### ex05 Harl 2.0
함수 실행시 인자로 넘겨받은 레벨값에 따라 그에 맞는 경고문을 출력하는 과제. 레벨은 DEBUG, INFO, WARNING, ERROR 단계가 있으며 if/else if/else문의 남발이 금지되어 있다. => 함수포인터를 이용해보기</br>
함수 포인터는 ``` Return_Type (Class_Name::* pointer_name)(Argument_List) ``` 형식이며, 
할당 방법은 `pointer_name = function_name (or &function_name)`, 호출 방법은 `(pointer_name)(Argument_List)` 또는 `(*(pointer_name))(Argument_List)`이다.</br>
멤버함수포인터의 경우 어떤 클래스에 속한건지 `::`연산자와를 함수포인터와 할당하는 함수명 앞에 붙여줘야 한다.</br>
과제에서는 함수포인터 배열과 경고레벨 배열을 연관된 함수끼리 같은 인덱스로 이어지게 만든 후 인자로 받은 스트링이 몇번째 경고레벨과 같은지 찾은 후 그 인덱스의 함수를 연결해주었다.

### ex06 Harl filter
처음으로 swtich문을 써도 된다고 허가가 떨어진 과제 </br>
위의 ex05번과 이어서 주어진 경고레벨 이상의 경고문을 모두 출력하는 프로그램을 만드는 것

## [CPP02] </br>이 과제부터 모든 클래스가 Orthodox Canonical Form(Default constructor, Copy constructor, Copy assignment operator, Destructor)을 갖추고 있어야 한다
### ex00 My First Class in Orthodox Canonical Form
Orthodox canonicla form에 맞춰서 클래스를 만들어봄
### ex01 Towards a more useful fixed-point numver class
float과 int형의 수를 받으면 8비트짜리 고정소수점 형태로 만들어보기</br>
int는 bit shift로 구현 가능하나 float은 쉬프트 연산이 불가하기 때문에 8칸(2의 8승) 값인 256을 곱해줌</br>
부동소수점과 고정소수점에 대해 알아보았다</br>
[고정소수점]</br>
특성 숫자의 소수점 자리를 고정하는 방식. 구현하기 편하나 정밀도가 낮음</br>
[부동소수점]

<img src="https://user-images.githubusercontent.com/81025416/168531854-ca7c1082-1e65-4604-a875-d1a63d34aeec.jpeg" width="50%" height="50%">

### ex02 Now we're talking
위에서 구현한 Fixed 클래스에 >, <, >=, <=, ==, !=, +, -, \*, /, 전위증감, 후위증감 연산자 오버로딩과 min, max함수 구현</br>
전위증감연산자는 값을 증가시킨 후 클래스 자체를 리턴하면 되지만 후위증감연산자는 클래스 자체의 값은 증가되나 리턴되는 값은 증가되기 전 값을 복사해둔 클래스인 tmp를 반환한다.

## [CPP03]
### ex00 Aaaaand... OPEN!
공격형 게임 캐릭터를 만들고 ex00에서 만든 클래스를 베이스로 ex01과 ex02에서 상속받아서 새로운 클래스를 만들며 상속에 대해 알아보는 과제
Name, 정수형으로 저장되는 Hit point, Energy points, Attack damage와 attack, takeDamage, beRepaired함수를 가지고 있는 ClapTrap이라는 이름의 클래스를 만들기

### ex01 Serena, my love!
ClapTrap을 private으로 상속받아서 체력과 에너지 포인트가 다르며 guardGate라는 함수가 추가된 ScavTrap이라는 클래스 만들기. 생성자와 소멸자, attack함수는 ClapTrap과 다른 출력물이 나와야 한다.</br>
상위 클래스는 ClapTrap, 하위클래스는 ScavTrap.</br>
하위클래스 객체가 생성될 때 하위클래스 생성자가 호출 되면서 본체가 실행되기 전에 초기화 리스트에 있는 상위 클래스의 생성자가 먼저 호출되고 동작한다. 하위클래스 생성자 호출->상위클래스 생성자 호출->상위클래스 변수 초기화->하위클래스 클래스 변수 초기화 순.</br> 그러나 파괴될때는 역순이다. 자식(하위클래스)이 파괴되는 동안에도 부모(상위클래스)의 멤버를 참조할 수 있어야 하기 때문에 자식 클래스가 파괴된 후 부모클래스가 파괴된다.
상속될 때 재정의 해야하는 함수는 생성자와 파괴자, 대입연산자, 정적 멤버변수와 정적 멤버함수가 있으며 추가로 상속받지 않고 다른 동작을 하기 원하는 함수는 오버라이딩을 해주어야 한다.

### ex02 Repetitive work
ex01번과 비슷하다. ClapTrap을 상속받는 FragTrap 만들기

## [CPP04] 
### ex00 Polymorphism
Animal 클래스를 만들고 그것을 상속받아 Dog과 Cat 클래스도 만든다.</br>
makeSound 함수를 오버라이딩해서 각각의 동물들 울음소리를 출력하도록 만들고 Animal의 makeSound은 아무 소리도 내지 말아야한다.</br>
메인문에서 Animal 포인터를 생성 후 new로 각각 Animal, Dog, Cat 클래스를 할당해 준 후 각각 포인터들의 makeSound를 해서 포인터 클래스가 아닌 실제로 생성된 클래스의 makeSound 함수가 알맞게 실행되어야 한다. 이는 makeSound가 가상함수(virtual function)으로 정의되어야 한다는 것이다. WrongAnimal과 WrongCat의 경우 동일하게 실행하나 실행시 WrongCat의 makeSound가 아닌 WrongAnimal의 함수가 실행되어서 Animal, Cat 클래스와 </br>

[virtual function]
대부분의 함수를 호출하는 코드는 컴파일 타임에 고정된 메모리 주소로 변환되는데 이것을 정적 바인딩이라고 한다 C++ 에서 가상함수는 프로그램이 실행될 때 객체를 결정하기 때문에 컴파일 타임에 해당 객체를 특절할 수 없기 때문에 런타임에 올바른 함수가 실행될 수 있도록 하는 동적 바인딩을 한다. C++ 컴파일러는 각각의 개체마다 가상함수 테이블을 가리키는 포인터를 저장하기 위한 숨겨진 멤버를 하나씩 추가하며 가상함수를 하나라도 가지는 클래스에서는 컴파일러가 가상함수 테이블을 만들어서 주소를 저장한다. 가상함수가 있는 클래스는 소멸자도 반드시 가상으로 선언해야한다

### ex01 I don't want to set the world on fire
std::string 배열 100개인 idea를 가지고 있는 Brain 클래스를 만들어서 Dog과 Cat 클래스 안에 동적할당해준다. Dog과 Cat의 복사는 얕은 복사이면 안됨. </br>
[Shallow Copy & Deep Copy]
객체가 가진 멤버들의 값을 새로운 객체로 복사하는 방법. 객체가 참조타입의 멤버를 가지고 있다면 얕은 복사(Shallow copy)는 참조 값만 복사가 되며(주소값을 공유) 깊은 복사(Deep copy)는 참조값의 복사가 아닌 참조된 객체 자체가 복사된다(새로 동적할당을 받고 원본의 데이터 복사). 디폴트 복사 생성자는 기본적으로 얕은복사를 한다. 얕은 복사시 메모리 주소를 공유하기 때문에 한 객체의 소멸자가 실행시 메모리가 해제되어 복사된 객체가 해제된 메모리를 가리키는 메모리 접근 에러가 일어난다.

### ex02 Abstract class
Animal class should not be instantiable => Animal을 추상 클래스(Abstract class)로 만들기</br>
virtual function 프로토타입에 "= 0" 이 붙은 형태를 순수가상함수(pure virtual function)이라고 한다. 함수 정의는 이루어지지 않고 함수 선언만 된 것이라고 볼 수 있는데 자식 클래스에서 반드시 오버라이딩 해야하는 함수이다. 이런 순수가상함수가 하나라도 있다면 이 클래스는 추상클래스라고 한다. 이 클래스는 객체로 만들지 못하고 상속에서만 쓰일 수 있다.

## [CPP05]
ex00부터 ex03까지 bureaucrat(공무원..?이라 칭함), Form(서류)-(파생서류들: Shrubbery, Robotomy, Presidential), Intern(인턴)을 각각 class로 만들어서 사용함</br>
각 과정에서 오류가 날 경우 try & catch문으로 받아줘야함. 각 클래스 안에서 오류시 exception 클래스를 상속받는 오류 클래스들을 throw해야 하기 때문에 각각 클래스 안에 GradeTooHightException같은 클래스들을 따로 선언해줘야함.

### ex00 Mommhy, when i grow up, i want to be a bureaucrat!
bureaucrat(공무원..?이라 칭함)class 만들기</br>
이름과 등급을 멤버변수로 가지고 있다. 실제 공무원처럼 숫자가 낮을수록 높은 지위에 있음

### ex01 Form up, maggots!
Form(서류)class 만들기.</br>
이름과 싸인 되었는지 여부(isSigned), 서류에 싸인이 가능한 (공무원의)등급, 서류를 실행? 가능한 등급을 멤버변수로 가지고 있음.</br>
공무원 클래스에 form을 인자로 받는 signForm 함수를 추가해서 공무원 레벨과 서류의 사인 레벨을 비교한 뒤 가능할 경우 isSigned를 true로 바꾸는 beSigned 메서드를 form이 가지고 있어야함
  
 ### ex02 No, you need form 28B, not 28C
Form의 파생클래스들 만들기 Shrubbery, Robotomy, Presidential</br>
ex01번의 signForm 함수와 같이 실행 함수도 추가한다 공무원 클래스에 executeForm 함수를 추가, form에도 execute함수가 추가되고 이건 순수가상함수로 선언되어야함 그래야 execute 함수 실행시 파생클래스의 execute로 잘 연결이 되기 때문. 파생 클래스들은 각각 싸인레벨, 실행 레벨이 다르고 execute되었을 경우 실행하는 행동들이 다름
  
### ex03 At least this beats coffee-making
인턴 만들기. form type 이름(위의 shrubbery.., robotomy.., presidential..)을 인자로 받아서 makeForm을 한다

## [CPP06]
### ex00 Conversion of scalar types
파라미터를 c++ 리터럴의 가장 일반적인 형태인 string 표현으로 받는 프로그램을 만들어라.</br>
그 리터럴은 scalar값인 char, int, float, double중 하나에 속해있어야 한다. char를 제외하고는 십진법만 사용됨</br></br>

char literals : 'c', 'a', ...
  undisplayable characters는 인풋으로 사용되지 않는다. 변환한 char가 undisplayable이면 알림 메시지 표현

int literals : 0, -42, 42...

float literals : 0.0f, -4.2f, 4.2f...
  nan, -inff, +inff도 처리해야 함

double literals : 0..0, -4.2, 4.2...
  nan, -inf, +inf도 처리해야 함

먼저 
1) 파라미터로 패스된 타입을 가려내고,
2) string형태에서 원래 타입으로 변환시킨 후,
3) 나머지 세개의 다른 데이터 타입으로 변환해야한다.
4) 마지막으로 아래와 같이 결과를 출력해야 한다

```
./convert 0
char: Non displayable
int: 0
float: 0.0f
double: 0.0
./convert nan
char: impossible
int: impossible
float: nanf
double: nan
./convert 42.0f
char: '*'
int: 42
float: 42.0f
double: 42.0
```
변환이 말이 되지 않거나 오버플로우가 발생할 때, 그 타입의 변환이 불가능하다는 정보의 메세지를 띄워야 한다. numeric limits나 special value의 헤더는 허용됨</br>
\* 상수와 리터럴 => 상수는 변하지 않는 변수(메모리 위치), 리터럴은 변수의 값이 변하지 않는 데이터(메모리 위치 안의 값)을 뜻한다.</br>
둘 다 변하지 않는 값을 의미하지만 상수는 변하지 않는 변수를 뜻하기 때문에 참조변수를 상수로 지정하면 참조변수 메모리의 주소값이 변하지 않는다는 의미지 그 주소가 가리키는 데이터들까지 상수라는 의미가 아니라 값은 수정이 가능하다. 그러나 리터럴은 데이터 그 자체이기 때문에 변수에 넣는 변하지 않는 데이터를 뜻한다. 대게 인스턴스는 리터럴이 아니나 string같은 불변 클래스를 객체 리터럴이라고 칭한다.</br>

[구현] `static_cast`를 사용해보는 과제. 인자를 string으로 받아 그 원래 타입을 가려내고 변환하는 과정을 stod같은 함수를 사용해서 변환하면 손쉬우나 과제는 c++98버전만 허용하기 때문에 string을 각 타입으로 변환하는 함수들을 사용하지 못했다. 그래서 인자들을 쪼개서 파싱해서 타입을 밝힌 뒤 std::stringstream으로 받아서 각 타입에 넣어주고 static_cast로 다른 타입으로 변환해줌

### ex01 Serialization
reinterpret_cast를 사용해보는 과제. 임의의 포인터 타입끼리의 변환과 정수형을 포인터로 바꾸는 것을 허용하는 캐스트 연산자이다. 포인터를 정수 표현으로 변환할 때 유용하게 사용. 다른 형태의 포인터로 변경이 가능하기 때문에 잘못 사용하는 경우 결과 값이 컴파일러에 따라 다르거나 예상치 못한 값이 나올 수도 있음</br>
Data 클래스 포인터를 uintptret_t타입 변수에 담고 그걸 다시 Data 클래스 포인터로 변환해보며 그 과정에서 주소값이 똑같이 담기는지, 클래스 안에 있는 값은 변함 없이 잘 보존되어 있는지를 확인</br>
serialization (직렬화) : 객체가 어떤 특정 메모리상 사용되는데 그 상태 그대로는 저장이나 네트워크 전송이 어려울 때 다른 환경에서 사용할 수 있게 바꾸는것</br>
desericalization (역직렬화) : 직렬화 반대. 스트림에서 객체를 재구성</br>
intptr_t, uintptr_t 포인터의 주소를 저장하는데 사용됨. 시스템 내부에서 사용하는 포인터와 같은 크기.</br>

### ex02 Identify real type
dynamic_cast를 이용해보는 과제. 안전한 다운캐스팅용. 부모 클래스의 포인터에서 자식 클래스의 포인터로 다운캐스팅해주는 연산자. 실제로 부모클래스 포인터가 무엇을 가리키고있는지를 보고 같은 타입으로 다운캐스팅 할 경우에만 변환이 성공적으로 이루어짐. 성공시 new_type의 value를 리턴한다. 포인터로의 변환 실패시 NULL을 리턴하며 참조자로의 변환이 실패할 경우 exception을 throw한다(참조자에는 NULL이 들어갈 수 없기 때문에).

## [CPP07]
### ex00 Start with a few functions
템플릿 등장</br>
c++에서는 자료형에 따라 함수 오버로딩이 가능하지만 매번 다른 자료형의 함수를 새로 작성하는것보단 어떤 자료형이 와도 유연하게 처리 가능한 템플릿이란 기능을 사용하는것이 유용하다. 물론 너무 템플릿을 남발하면 컴파일 속도가 느려진다고 하니 남발은 조심.</br>
일반 함수는 컴파일시에 원형만 선언하면 컴파일 가능하고 링크할 때 바인딩 되지만 템플릿은 컴파일할 때 완벽하게 구체화되어야 하므로 같은 번역단위 안에 선언이 있어야 한다(=헤더파일에 선언되어야 한다). 또는 tpp파일로 헤더파일과 분할 가능
템플릿을 이용해서 swap과 min, max 함수 만들어보기
### ex01 Iter
함수 템플릿에 배열과 함수포인터를 인자로 받아서 배열을 하나씩 돌며 함수 실행시켜보는 Iter함수 만들기
### ex02 Array
클래스 템플릿 만들기 멤버변수로 배열을 가지고 있고 []오퍼레이터를 오버로딩 해줘서 클래스에서 []로 해당하는 배열의 인덱스에 접근 가능하게 만들기

## [CPP08]
### ex00 Easy find
### ex01 Span
### ex02 Mutated abomination
