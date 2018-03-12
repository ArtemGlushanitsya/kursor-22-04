// Kursor 22.04.2017

//Операторы (Programming Stuff)

//prog 1
/*
#include <iostream>

class A
{
public:  // < откр класс
	int i;
};

int main()
{
	A a{ 1 };
	std::cout << a.i << std::endl;
}*/

//prog 1(1)
/*
#include <iostream>

class A
{
public:
	A(const int i): i(i)   // иницыализация
	{}

	int get(void)
	{
		return i;
	}

private:
	int i;
};

int main()
{
	A a{ 1 };
	std::cout << a.get() << std::endl;
}*/

//prog 1(2)
/*
#include <iostream>

class A
{
public:
	A(const int i) : i(i)
	{
		std::cout << "A::A(" << i << "): {" << i << "}" << std::endl;   //< проверка вывода
	}

	auto& get(void) const
	{
		return i;
	}

private:
	int i;
};

int main()
{
	const A a{ 1 };
	std::cout << a.get() << std::endl;
}*/

//prog 1(3)
/*
#include <iostream>

class A
{
public:
	A(const int i) : i(i)
	{
		std::cout << "A::A(" << i << "): {" << i << "}" << std::endl;   //< проверка вывода
	}

	~A(void) // деструктор по образу конструктора
	{
		std::cout << "A::~A(): {" << i << "}" << std::endl;
	}

	auto& get(void) const
	{
		return i;
	}

private:
	int i;
};

int main()
{
	const A a{ 1 };
	std::cout << a.get() << std::endl;
}*/

//prog 1(4)
/*
#include <iostream>

class A
{
public:
	A(const int i) : i(i)
	{
		std::cout << "A::A(" << i << "): {" << i << "}" << std::endl;
	}

	A(const A&) = default;   // неявный конструктор копирования

	~A(void)
	{
		std::cout << "A::~A(): {" << i << "}" << std::endl;
	}

	auto& get(void) const
	{
		return i;
	}

private:
	int i;
};

int main()
{
	const A a{ 1111111 };
	std::cout << a.get() << std::endl;
	const A b{ a };
	std::cout << a.get() << std::endl;
}*/

//prog 1(5)
/*
#include <iostream>

class A
{
public:
	A(const int i) : i(i)
	{
		std::cout << "A::A(" << i << "): {" << i << "}" << std::endl;
	}

	A(const A& a): i(a.i)  // явный конструктор копирования для инициализации объекта b
	{
			std::cout << "A::A(" << i << "): {" << i << "}" << std::endl;
	}

	~A(void)
	{
		std::cout << "A::~A(): {" << i << "}" << std::endl;
	}

	auto& get(void) const
	{
		return i;
	}

private:
	int i;
};

int main()
{
	const A a{ 1 };
	std::cout << a.get() << std::endl;
	const A b{ a };
	std::cout << a.get() << std::endl;
}*/

//prog 1(6)
/*
#include <iostream>

class A
{
public:
	A(void) : i{}
	{
		std::cout << "A::A(): {" << i << '}' << std::endl;
	}

	A(const int i) : i(i)
	{
		std::cout << "A::A(" << i << "): {" << i << '}' << std::endl;
	}

	A(const A& a) : i(a.i)
	{
		std::cout << "A::A({" << i << "}): {" << i << '}' << std::endl;
	}

	~A(void)
	{
		std::cout << "A::~A(): {" << i << '}' << std::endl;
	}

	void operator = (const A& a)
	{
		std::cout << "A::operator=({" << i << "})" << std::endl;
		i = a.i;
	}

	auto& get(void) const
	{
		return i;
	}

private:
	int i;
};

int main()
{
	const A a{ 1 };
	std::cout << a.get() << std::endl;
	A b;
	std::cout << b.get() << std::endl;
	b = a;
	std::cout << b.get() << std::endl;
}*/

//prog 1(7)
/*
#include <iostream>

class A
{
public:
	A(void) : i{}
	{
		std::cout << "A::A(): {" << i << '}' << std::endl;
	}

	A(const int i) : i(i)
	{
		std::cout << "A::A(" << i << "): {" << i << '}' << std::endl;
	}

	A(const A& a) : i(a.i)
	{
		std::cout << "A::A({" << i << "}): {" << i << '}' << std::endl;
	}

	~A(void)
	{
		std::cout << "A::~A(): {" << i << '}' << std::endl;
	}

	const A& operator = (const A& a)
	{
		std::cout << "A::operator=({" << i << "})" << std::endl;
		i = a.i;
		return *this;
	}

	auto& get(void) const
	{
		return i;
	}

private:
	int i;
};

int main()
{
	const A a{ 1 };
	std::cout << a.get() << std::endl;
	A b;
	std::cout << b.get() << std::endl;
	b = a;
	std::cout << b.get() << std::endl;
	A c;
	std::cout << c.get() << std::endl;
	c = b = a;  // вызов цепи операторов доваление и изменение строк (259, 263)
	std::cout << c.get() << std::endl;
}*/

//prog 1(8)
/*
#include <iostream>

class A
{
public:
	A(void) : i{}
	{
		std::cout << "A::A(): {" << i << '}' << std::endl;
	}

	A(const int i) : i(i)
	{
		std::cout << "A::A(" << i << "): {" << i << '}' << std::endl;
	}

	A(const A& a) : i(a.i)
	{
		std::cout << "A::A({" << i << "}): {" << i << '}' << std::endl;
	}

	~A(void)
	{
		std::cout << "A::~A(): {" << i << '}' << std::endl;
	}

	const A& operator = (const A& a)
	{
		std::cout << "A::operator=({" << i << "})" << std::endl;
		i = a.i;
		return *this;
	}

	auto& get(void) const
	{
		return i;
	}

private:
	int i;
};

int main()
{
	const A a{ 1 };
	std::cout << a.get() << std::endl;
	A b;
	std::cout << b.get() << std::endl;
	b.operator=(a);
	std::cout << b.get() << std::endl;
	A c;
	std::cout << c.get() << std::endl;
	c.operator=(b.operator = (a));     // стандартная запись
	std::cout << c.get() << std::endl;
}*/

//prog 1(9)
/*
#include <iostream>

class A
{
public:
	A(void) : i{}
	{
		std::cout << "A::A(): {" << i << '}' << std::endl;
	}

	A(const int i) : i(i)
	{
		std::cout << "A::A(" << i << "): {" << i << '}' << std::endl;
	}

	A(const A& a) : A(a.i)
	{
		std::cout << "A::A({" << i << "}): {" << i << '}' << std::endl;
	}

	A(A&& a) : A(a.i)  // конструктор перемищения
	{
		std::cout << "A::A({&&" << i << "}): {" << i << '}' << std::endl;
		a.i = 0;
	}

	~A(void)
	{
		std::cout << "A::~A(): {" << i << '}' << std::endl;
	}

	const A& operator = (const A& a) // оператор присвоения
	{
		std::cout << "A::operator=({" << i << "})" << std::endl;
		i = a.i;
		return *this;
	}

	const A& operator = (A&& a)   // оператор перемищения
	{
		std::cout << "A::operator=({&&" << i << "})" << std::endl;
		i = a.i;
		a.i = 0;
		return *this;
	}

	auto& get(void) const
	{
		return i;
	}

private:
	int i;
};

int main()
{
	A a{ 123456789 };
	std::cout << "a: " << a.get() << std::endl;
	A b(std::move(a));
	std::cout << "a: " << a.get() << std::endl;
	std::cout << "b: " << b.get() << std::endl;
}*/

//prog 1(10)
/*
#include <iostream>


//class A;
//A a;
//@a -> a.operator@();
//@a -> a.operator@(const A& a);


class A
{
public:
	A(void) : i{}
	{
		std::cout << "A::A(): {" << i << '}' << std::endl;
	}

	A(const int i) : i(i)
	{
		std::cout << "A::A(" << i << "): {" << i << '}' << std::endl;
	}

	A(const A& a) : A(a.i)
	{
		std::cout << "A::A({" << i << "}): {" << i << '}' << std::endl;
	}

	A(A&& a) : A(a.i)  // конструктор перемищения
	{
		std::cout << "A::A({&&" << i << "}): {" << i << '}' << std::endl;
		a.i = 0;
	}

	~A(void)
	{
		std::cout << "A::~A(): {" << i << '}' << std::endl;
	}

	const A& operator = (const A& a) // оператор присвоения
	{
		std::cout << "A::operator=({" << i << "})" << std::endl;
		i = a.i;
		return *this;
	}

	const A& operator = (A&& a)   // оператор перемищения
	{
		i = a.i;
		a.i = 0;
		std::cout << "A::operator=({&&" << i << "})" << std::endl;
		return *this;
	}

	auto& get(void) const
	{
		return i;
	}

private:
	int i;
};

A f(const A& a)
{
	return a;
}

int main()
{
	A a{ 123456789 };
	std::cout << "a: " << a.get() << std::endl;
	A b;
	b = f(a);  // вызов оператора перемищения
	std::cout << "a: " << a.get() << std::endl;
	std::cout << "b: " << b.get() << std::endl;
}*/

//prog 1(11)
/*
#include <iostream>


//class A;
//A a;
//@a -> a.operator@();
//@a -> a.operator@(const A& a);


class A
{
public:
	A(void) : i{}
	{
		std::cout << "A::A(): {" << i << '}' << std::endl;
	}

	A(const int i) : i(i)
	{
		std::cout << "A::A(" << i << "): {" << i << '}' << std::endl;
	}

	A(const A& a) : A(a.i)
	{
		std::cout << "A::A({" << i << "}): {" << i << '}' << std::endl;
	}

	A(A&& a) : A(a.i)  // конструктор перемищения
	{
		std::cout << "A::A({&&" << i << "}): {" << i << '}' << std::endl;
		a.i = 0;
	}

	~A(void)
	{
		std::cout << "A::~A(): {" << i << '}' << std::endl;
	}

	const A& operator = (const A& a) // оператор присвоения
	{
		std::cout << "A::operator=({" << i << "})" << std::endl;
		i = a.i;
		return *this;
	}

	const A& operator = (A&& a)   // оператор перемищения
	{
		i = a.i;
		a.i = 0;
		std::cout << "A::operator=({&&" << i << "})" << std::endl;
		return *this;
	}

	auto operator - (void) const
	{
		std::cout << "A::operator-({" << i << "})" << std::endl;
		return -i;
	}

	auto& get(void) const
	{
		return i;
	}

private:
	int i;
};

A f(const A& a)
{
	return a;
}

int main(void)
{
	const A a{ 1 };
	std::cout << "-a: " << -a << std::endl;
}*/

//prog 1(12)
/*
#include <iostream>


//class A;
//A a;
//@a -> a.operator@();
//@a -> a.operator@(const A& a);


class A
{
public:
	A(void) : i{}
	{
		std::cout << "A::A(): {" << i << '}' << std::endl;
	}

	A(const int i) : i(i)
	{
		std::cout << "A::A(" << i << "): {" << i << '}' << std::endl;
	}

	A(const A& a) : A(a.i)
	{
		std::cout << "A::A({" << i << "}): {" << i << '}' << std::endl;
	}

	A(A&& a) : A(a.i)  // конструктор перемищения
	{
		std::cout << "A::A({&&" << i << "}): {" << i << '}' << std::endl;
		a.i = 0;
	}

	~A(void)
	{
		std::cout << "A::~A(): {" << i << '}' << std::endl;
	}

	const A& operator = (const A& a) // оператор присвоения
	{
		std::cout << "A::operator=({" << i << "})" << std::endl;
		i = a.i;
		return *this;
	}

	const A& operator = (A&& a)   // оператор перемищения
	{
		i = a.i;
		a.i = 0;
		std::cout << "A::operator=({&&" << i << "})" << std::endl;
		return *this;
	}

	int operator - (const A& a)
	{
		std::cout << "A::operator - ()" << std::endl;
		return -i;
	}

	auto& get(void) const
	{
		return i;
	}

private:
	int i;

	friend int operator - (const A&);
};

A f(const A& a)
{
	return a;
}

int main(void)
{
	const A a{ 1 };
	std::cout << "-a: " << -a << std::endl;
}

int operator - (const A& a)
{
	std::cout << "operator - ()" << std::endl;
	return -a.i;
}*/

//prog 1(13)
/*
#include <iostream>


//class A;
//A a;
//@a -> a.operator@();
//@a -> a.operator@(const A& a);


class A
{
public:
	A(void) : i{}
	{
		std::cout << "A::A(): {" << i << '}' << std::endl;
	}

	A(const int i) : i(i)
	{
		std::cout << "A::A(" << i << "): {" << i << '}' << std::endl;
	}

	A(const A& a) : A(a.i)
	{
		std::cout << "A::A({" << i << "}): {" << i << '}' << std::endl;
	}

	A(A&& a) : A(a.i)  // конструктор перемищения
	{
		std::cout << "A::A({&&" << i << "}): {" << i << '}' << std::endl;
		a.i = 0;
	}

	~A(void)    // деструктор
	{
		std::cout << "A::~A(): {" << i << '}' << std::endl;
	}

	const A& operator = (const A& a) // оператор присвоения
	{
		std::cout << "A::operator=({" << i << "})" << std::endl;
		i = a.i;
		return *this;
	}

	const A& operator = (A&& a)   // оператор перемищения
	{
		i = a.i;
		a.i = 0;
		std::cout << "A::operator=({&&" << i << "})" << std::endl;
		return *this;
	}

	auto operator ++ (void) // оператор инкримента
	{
		std::cout << "A::operator ++ ()" << std::endl;
		return ++i;
	}

	auto& get(void) const
	{
		return i;
	}

private:
	int i;

};

A f(const A& a)
{
	return a;
}

int main(void)
{
	A a{ 1 };
	std::cout << "++a: " << ++a << std::endl;
}*/

//prog 1(14)
/*
#include <iostream>


//class A;
//A a;
//@a -> a.operator@();
//@a -> a.operator@(const A& a);


class A
{
public:
	A(void) : i{}
	{
		std::cout << "A::A(): {" << i << '}' << std::endl;
	}

	A(const int i) : i(i)
	{
		std::cout << "A::A(" << i << "): {" << i << '}' << std::endl;
	}

	A(const A& a) : A(a.i)
	{
		std::cout << "A::A({" << i << "}): {" << i << '}' << std::endl;
	}

	A(A&& a) : A(a.i)  // конструктор перемищения
	{
		std::cout << "A::A({&&" << i << "}): {" << i << '}' << std::endl;
		a.i = 0;
	}

	~A(void)    // деструктор
	{
		std::cout << "A::~A(): {" << i << '}' << std::endl;
	}

	const A& operator = (const A& a) // оператор присвоения
	{
		std::cout << "A::operator=({" << i << "})" << std::endl;
		i = a.i;
		return *this;
	}

	const A& operator = (A&& a)   // оператор перемищения
	{
		i = a.i;
		a.i = 0;
		std::cout << "A::operator=({&&" << i << "})" << std::endl;
		return *this;
	}

	auto operator ++ (void) // оператор инкримента
	{
		std::cout << "A::operator ++ ()" << std::endl;
		return ++i;
	}

	auto& get(void) const
	{
		return i;
	}

private:
	int i;

	friend int operator -- (A& a);
};

A f(const A& a)
{
	return a;
}

int main(void)
{
	A a;
	std::cout << "++a: " << ++a << std::endl;
	std::cout << "--a: " << --a << std::endl;
}

int operator -- (A& a)
{
	std::cout << "operator -- ()" << std::endl;
	return --a.i;
}*/

//prog 1(14)
/*
#include <iostream>


//class A;
//A a;
//@a -> a.operator@();
//@a -> a.operator@(const A& a);


class A
{
public:
	A(void) : i{}
	{
		std::cout << "A::A(): {" << i << '}' << std::endl;
	}

	A(const int i) : i(i)
	{
		std::cout << "A::A(" << i << "): {" << i << '}' << std::endl;
	}

	A(const A& a) : A(a.i)
	{
		std::cout << "A::A({" << i << "}): {" << i << '}' << std::endl;
	}

	A(A&& a) : A(a.i)  // конструктор перемищения
	{
		std::cout << "A::A({&&" << i << "}): {" << i << '}' << std::endl;
		a.i = 0;
	}

	~A(void)    // деструктор
	{
		std::cout << "A::~A(): {" << i << '}' << std::endl;
	}

	const A& operator = (const A& a) // оператор присвоения
	{
		std::cout << "A::operator=({" << i << "})" << std::endl;
		i = a.i;
		return *this;
	}

	const A& operator = (A&& a)   // оператор перемищения
	{
		i = a.i;
		a.i = 0;
		std::cout << "A::operator=({&&" << i << "})" << std::endl;
		return *this;
	}

	auto operator ++ (void) // оператор инкримента
	{
		std::cout << "A::operator ++ ()" << std::endl;
		return ++i;
	}


	auto operator ++ (int) // оператор инкримента(фиктивный оператор для постфиксного инкримента)
	{
		std::cout << "A::operator ++ (int)" << std::endl;
		return i++;
	}

	auto& get(void) const
	{
		return i;
	}

private:
	int i;

	friend int operator -- (A& a);
	friend int operator -- (A& a, int);
};

A f(const A& a)
{
	return a;
}

int main(void)
{
	A a;
	std::cout << "a.get: " << a.get() << std::endl;
	std::cout << "++a: " << ++a << std::endl;
	std::cout << "a--: " << a-- << std::endl;
	std::cout << "a.get: " << a.get() << std::endl;
}

int operator -- (A& a)
{
	std::cout << "operator -- ()" << std::endl;
	return --a.i;
}

int operator -- (A& a, int)
{
	std::cout << "operator -- (int)" << std::endl;
	return a.i--;
}*/

//prog 1(15)
/*
#include <iostream>


//class A;
//A a;
//class B;
//B b;
//a @ b -> a.operator@(B& b);
//a @ b -> a.operator@(A& a, B& b);


class A
{
public:
	A(void) : i{}
	{
		std::cout << "A::A(): {" << i << '}' << std::endl;
	}

	A(const int i) : i(i)
	{
		std::cout << "A::A(" << i << "): {" << i << '}' << std::endl;
	}

	A(const A& a) : A(a.i)
	{
		std::cout << "A::A({" << i << "}): {" << i << '}' << std::endl;
	}

	A(A&& a) : A(a.i)  // конструктор перемищения
	{
		std::cout << "A::A({&&" << i << "}): {" << i << '}' << std::endl;
		a.i = 0;
	}

	~A(void)    // деструктор
	{
		std::cout << "A::~A(): {" << i << '}' << std::endl;
	}

	const A& operator = (const A& a) // оператор присвоения
	{
		std::cout << "A::operator=({" << i << "})" << std::endl;
		i = a.i;
		return *this;
	}

	const A& operator = (A&& a)   // оператор перемищения
	{
		i = a.i;
		a.i = 0;
		std::cout << "A::operator=({&&" << i << "})" << std::endl;
		return *this;
	}

	auto operator + (const A& a) // оператор сложения
	{
		std::cout << "A::operator +({" << i << "})" << std::endl;
		return i + a.i;
	}

	auto& get(void) const
	{
		return i;
	}

private:
	int i;

	friend int operator - (const A&, const A&);
};

A f(const A& a)
{
	return a;
}

int main(void)
{
	A a(1), b (2), c(a + b);
	std::cout << "c.get: " << c.get() << std::endl;
}

int operator - (const A& a, const A& b) // оператор вычитания
{
	std::cout << "A::operator +({" << a.i << "}, {" << b.i << "})" << std::endl;
	return a.i + b.i;
}*/

//prog 1(16)

#include <iostream>


//class A;
//A a;
//class B;
//B b;
//a @ b -> a.operator@(B& b);
//a @ b -> a.operator@(A& a, B& b);


class A
{
public:
	A(void) : i{}
	{
		std::cout << "A::A(): {" << i << '}' << std::endl;
	}

	A(const int i) : i(i)
	{
		std::cout << "A::A(" << i << "): {" << i << '}' << std::endl;
	}

	A(const A& a) : A(a.i)
	{
		std::cout << "A::A({" << i << "}): {" << i << '}' << std::endl;
	}

	A(A&& a) : A(a.i)  // конструктор перемищения
	{
		std::cout << "A::A({&&" << i << "}): {" << i << '}' << std::endl;
		a.i = 0;
	}

	~A(void)    // деструктор
	{
		std::cout << "A::~A(): {" << i << '}' << std::endl;
	}

	const A& operator = (const A& a) // оператор присвоения
	{
		std::cout << "A::operator=({" << i << "})" << std::endl;
		i = a.i;
		return *this;
	}

	const A& operator = (A&& a)   // оператор перемищения
	{
		i = a.i;
		a.i = 0;
		std::cout << "A::operator=({&&" << i << "})" << std::endl;
		return *this;
	}

	auto operator + (const A& a) // оператор сложения
	{
		std::cout << "A::operator +({" << i << "})" << std::endl;
		return i + a.i;
	}

	auto& get(void) const
	{
		return i;
	}

private:
	int i;

	friend int operator - (const A&, const A&);
};

A f(const A& a)
{
	return a;
}

int main(void)
{
	A a(3), b(2), c(a - b);
	std::cout << "c.get: " << c.get() << std::endl;
}

int operator - (const A& a, const A& b) // оператор вычитания
{
	std::cout << "A::operator -({" << a.i << "}, {" << b.i << "})" << std::endl;
	return a.i - b.i;
}

//prog 1(17)
/*
#include <iostream>


//class A;
//A a;
//class B;
//B b;
//a @ b -> a.operator@(B& b);
//a @ b -> a.operator@(A& a, B& b);


class A
{
public:
	A(void) : i{}
	{
		std::cout << "A::A(): {" << i << '}' << std::endl;
	}

	A(const int i) : i(i)
	{
		std::cout << "A::A(" << i << "): {" << i << '}' << std::endl;
	}

	A(const A& a) : A(a.i)
	{
		std::cout << "A::A({" << i << "}): {" << i << '}' << std::endl;
	}

	A(A&& a) : A(a.i)  // конструктор перемищения
	{
		std::cout << "A::A({&&" << i << "}): {" << i << '}' << std::endl;
		a.i = 0;
	}

	~A(void)    // деструктор
	{
		std::cout << "A::~A(): {" << i << '}' << std::endl;
	}

	const A& operator = (const A& a) // оператор присвоения
	{
		std::cout << "A::operator=({" << i << "})" << std::endl;
		i = a.i;
		return *this;
	}

	const A& operator = (A&& a)   // оператор перемищения
	{
		i = a.i;
		a.i = 0;
		std::cout << "A::operator=({&&" << i << "})" << std::endl;
		return *this;
	}

	auto operator + (const A& a) // оператор сложения
	{
		std::cout << "A::operator +({" << i << "})" << std::endl;
		return i + a.i;
	}

	auto& get(void) const
	{
		return i;
	}

private:
	int i;

	friend std::ostream& operator << (std::ostream& s, const A&);
};

int main(void)
{
	const A a(1234567);
	std::cout << a << std::endl;
}

std::ostream& operator << (std::ostream& s, const A& a)
{
	return s << a.i;
}*/