#include <iostream>
#include <string>

class Singleton
{
private:
	std::string m_data;

	Singleton() = default;
	Singleton(const Singleton&) = delete;
	Singleton(Singleton&&) = delete;
	Singleton& operator=(const Singleton&) = delete;
	Singleton& operator=(Singleton&&) = delete;
public:
	static Singleton& get()
	{
		static Singleton singleton;
		return singleton;
	}

	void print()
	{
		std::cout << m_data << std::endl;
	}

	void add(const std::string& str)
	{
		m_data += str;
	}
};

int main()
{
	Singleton::get().print();

	Singleton::get().add("blabla");
	Singleton::get().add("hahah");

	Singleton::get().print();
}
