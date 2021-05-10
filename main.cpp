#include <log4cxx/logger.h>
#include <log4cxx/basicconfigurator.h>
#include <log4cxx/helpers/exception.h>
#include <log4cxx/propertyconfigurator.h>

using namespace log4cxx;
using namespace log4cxx::helpers;



int main(){
    PropertyConfigurator::configure("../log4cxx.properties");
    LoggerPtr logger_sendpro(Logger::getLogger("sendpro"));
    LoggerPtr logger_msghander(Logger::getLogger("msghander"));
	
    int  i=0;
    while(1)
    {   
	i++;
	LOG4CXX_INFO(logger_sendpro," sendpro");
	LOG4CXX_DEBUG(logger_sendpro,"This is a sendpro");
	LOG4CXX_INFO(logger_msghander, "msghander");
	LOG4CXX_DEBUG(logger_msghander,"This is a msghander");
    }

    return 0;
}
