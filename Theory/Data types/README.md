<h2>Основные понятия программирования</h2>
<h3>Типы данных</h3>

- **Тип данных** определяет:
  - множество допустимых значений
    данных;
  - внутреннее представление данных;
  - совокупность операций над
    данными.
	
- **Примитивные типы данных:**
  - Integer
  - Character
  - Boolean
  - Floating Point
  - Double Floating Point
  - Valueless or Void
  - Wide Character

- **Встроенные типы данных:**
  - Function
  - Array
  - Pointer
  - Reference
  
- **Абстрактные или определенные пользователем типы данных**
  - Class
  - Structure
  - Union
  - Enumeration
  - Typedef defined DataType
	
|Тип|Размер, байт|Диапазаон|
| :-----------: | :-----------: | :-----------: |
|short int|	2	|-32,768 to 32,767|
|unsigned short int|	2	|0 to 65,535|
|unsigned int|	4	|0 to 4,294,967,295|
|int|	4	|-2,147,483,648 to 2,147,483,647|
|long int|	4	|-2,147,483,648 to 2,147,483,647|
|unsigned long int|	4	|0 to 4,294,967,295|
|long long int|	8	|-(2^63) to (2^63)-1|
|unsigned long long int|	8	|0 to 18,446,744,073,709,551,615|
|signed char|	1	|-128 to 127|
|unsigned char|	1	|0 to 255|
|float|	4|	|
|double|	8|	|
|long double|	12 | |	
|wchar_t|	2 or 4|	1 wide character|

- **Объявление и инициализация переменных**

  **тип имя_переменной = значение;**

  - byte b = 0x55;
  - short s = 0x55ff;
  - int i = 1000000;
  - long l = 0xffffffffL;
  - float f = .25f;
  - double d = .00001234;
  - char с = 'a';
  - boolean bool = true;