#include <iostream>

#define LOG(x) std::cout << x << std::endl;

class Log {
public:
	const int LogLevelError = 0;
	const int LogLevelWarning = 1;
	const int LogLevelInfo = 2;

private:
	int m_logLevel;
public:


	void setLogLevel(int logLevel) {
		m_logLevel = logLevel;
	}
	void error(const char* message) {
		if (m_logLevel >= LogLevelError)
			std::cout << "[ERROR]: " << message << std::endl;
	}
	void warn(const char* message) {
		if (m_logLevel >= LogLevelWarning)
			std::cout << "[WARNING]: " << message << std::endl;
	}
	void info(const char* message) {
		if (m_logLevel >= LogLevelInfo)
			std::cout << "[INFO]: " << message << std::endl;
	}

};

struct Entity {
	int x, y;

	void print() {
		std::cout << x << ", " << y << std::endl;
	}
};

int main()
{
	Log log;
	log.setLogLevel(log.LogLevelInfo);

	Entity e;
	e.x = 1;
	e.y = 2;

	Entity e1;
	e1.x = 3;
	e1.y = 4;


	e.print();
	e1.print();

	std::cin.get();
}
