# CPP

## CPP0

## CPP01
## CPP02
## CPP03
## CPP04
## CPP05
ex00부터 ex03까지 bureaucrat(공무원..?이라 칭함), Form(서류)-(파생서류들: Shrubbery, Robotomy, Presidential), Intern(인턴)을 각각 class로 만들어서 사용함 
각 과정에서 오류가 날 경우 try & catch문으로 받아줘야함 
각 클래스 안에서 오류시 exception 클래스를 상속받는 오류 클래스들을 throw해야 하기 때문에 각각 클래스 안에 GradeTooHightException같은 클래스들을 따로 선언해줘야함
### ex00
  bureaucrat(공무원..?이라 칭함)class 만들기
  이름과 등급을 멤버변수로 가지고 있다. 실제 공무원처럼 숫자가 낮을수록 높은 지위에 있음

### ex01
  Form(서류)class 만들기. 
  이름과 싸인 되었는지 여부(isSigned), 서류에 싸인이 가능한 (공무원의)등급, 서류를 실행? 가능한 등급을 멤버변수로 가지고 있음.
  공무원 클래스에 form을 인자로 받는 signForm 함수를 추가해서 공무원 레벨과 서류의 사인 레벨을 비교한 뒤 가능할 경우 isSigned를 true로 바꾸는 beSigned 메서드를 form이 가지고 있어야함
 ### ex02
  Form의 파생클래스들 만들기 Shrubbery, Robotomy, Presidential
  ex01번의 signForm 함수와 같이 실행 함수도 추가한다 공무원 클래스에 executeForm 함수를 추가, form에도 execute함수가 추가되고 이건 순수가상함수로 선언되어야함 그래야 execute 함수 실행시 파생클래스의 execute로 잘 연결이 되기 때문
  파생 클래스들은 각각 싸인레벨, 실행 레벨이 다르고 execute되었을 경우 실행하는 행동들이 다름
  
  ### ex03
  인턴 만들기 
  form type 이름(shru, robo, presi 어쩌구 등등)을 인자로 받아서 makeForm을 한다

## CPP06
### ex00
파라미터를 c++ 리터럴의 가장 일반적인 형태인 string 표현으로 받는 프로그램을 만들어라.
그 리터럴은 scalar값인 char, int, float, double중 하나에 속해있어야 한다. char를 제외하고는 십진법만 사용됨

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
변환이 말이 되지 않거나 오버플로우가 발생할 때, 그 타입의 변환이 불가능하다는 정보의 메세지를 띄워야 한다. numeric limits나 special value의 헤더는 허용됨


* 상수와 리터럴 => 상수는 변하지 않는 변수(메모리 위치), 리터럴은 변수의 값이 변하지 않는 데이터(메밀 위치 안의 값)을 뜻한다.
둘 다 변하지 않는 값을 의미하지만 상수는 변하지 않는 변수를 뜻하기 때문에 참조변수를 상수로 지정하면 참조변수 메모리의 주소값이 변하지 않는다는 의미지 그 주소가 가리키는 데이터들까지 상수라는 의미가 아니라 값은 수정이 가능하다. 그러나 리터럴은 데이터 그 자체이기 때문에 변수에 넣는 변하지 않는 데이터를 뜻한다. 대게 인스턴스는 리터럴이 아니나 string같은 불변 클래스를 객체 리터럴이라고 칭한다
### ex01
serialization (직렬화) : 객체가 어떤 특정 메모리상 사용되는데 그 상태 그대로는 저장이나 네트워크 전송이 어려울 때 다른 환경에서 사용할 수 있게 바꾸는것
desericalize (역직렬시키다)
### ex02

## CPP07
## CPP08
