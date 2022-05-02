# CPP

## CPP0

## CPP01
## CPP02
## CPP03
## CPP04
## CPP05

## CPP06
### 1.ex00
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
```



* 상수와 리터럴 => 상수는 변하지 않는 변수(메모리 위치), 리터럴은 변수의 값이 변하지 않는 데이터(메밀 위치 안의 값)을 뜻한다.
둘 다 변하지 않는 값을 의미하지만 상수는 변하지 않는 변수를 뜻하기 때문에 참조변수를 상수로 지정하면 참조변수 메모리의 주소값이 변하지 않는다는 의미지 그 주소가 가리키는 데이터들까지 상수라는 의미가 아니라 값은 수정이 가능하다. 그러나 리터럴은 데이터 그 자체이기 때문에 변수에 넣는 변하지 않는 데이터를 뜻한다. 대게 인스턴스는 리터럴이 아니나 string같은 불변 클래스를 객체 리터럴이라고 칭한다
### 2.ex01
### 3.ex02

## CPP07
## CPP08
