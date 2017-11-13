 ///
 /// @file    Configuration.h
 /// @author  mistydew(mistydew@qq.com)
 /// @date    2017-11-07 12:23:19
 ///

#ifndef __CONFIGURATION_H__
#define __CONFIGURATION_H__

#include <string>
#include <map>

namespace my
{

const char * const CONF_PATH = "../conf/my.conf";
const char * const RES_PATH = "res";
const char * const PAGE_LIB_PATH = "pagelib";
const char * const OFFSET_LIB_PATH = "offsetlib";
const char * const INVERT_LIB_PATH = "invertlib";

class Configuration
{
public:
	static Configuration * getInstance();

	bool init(const std::string & filePath);

	void display();

	std::map<std::string, std::string> & getConfigMap();
private:
	Configuration() {}
	~Configuration() {}
private:
	static Configuration * _pInstance;

	std::map<std::string, std::string> _configMap;
};

} // end of namespace my

#endif