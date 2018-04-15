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


int main()
{
	Log log;
	log.setLogLevel(log.LogLevelInfo);


	std::cin.get();
}
