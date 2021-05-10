#include<log4cxx/logger.h>
#include<log4cxx/propertyconfigurator.h>

using namespace log4cxx;

int main()

{
	PropertyConfigurator::configure("../log4cxx.properties");
	LoggerPtr rootLogger = Logger::getRootLogger();
	LOG4CXX_INFO(rootLogger,"HHH");

	return 0;
}
