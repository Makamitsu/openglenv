#include <iostream>

class Log {
public:
	enum Level {
		LevelError = 0,
		LevelWarning,
		LevelInfo
	};
private:
	Level m_logLevel;
public:
	void setLogLevel(Level logLevel) {
		m_logLevel = logLevel;
	}
	void error(const char* message) {
		if (m_logLevel >= LevelError)
			std::cout << "[ERROR]: " << message << std::endl;
	}
	void warn(const char* message) {
		if (m_logLevel >= LevelWarning)
			std::cout << "[WARNING]: " << message << std::endl;
	}
	void info(const char* message) {
		if (m_logLevel >= LevelInfo)
			std::cout << "[INFO]: " << message << std::endl;
	}
};

int main()
{
	Log log;
	log.setLogLevel(Log::LevelError);

	log.info("Lel");

	std::cin.get();
}
