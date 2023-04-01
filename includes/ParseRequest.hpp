
#pragma once
#include <iostream>
#include <map>
#include "define.hpp"
#include "utils.hpp"



class ParseRequest
{
private:
	std::string method;
	std::string path;
	std::string query;
	std::string			httpVersion;
    std::string                         body;
	std::map<std::string, std::string> header;
	std::string file;
public:
	ParseRequest();
	std::string							parseRequest(const std::string& request);
	std::string                         getLink();
	std::string                         getMethod();
	std::string                         getHeadr(std::string key);
	std::map<std::string, std::string>  getHeaders();
	std::string                         getPort();
	std::string                         getHost();
	std::string                         getQuery();
	void                                affiche();
    int                                 CheckHeader(int& status);
    std::string                         getBody();
    void                                setBody(std::string body);
	std::string		parseFile();
	void            ClearBody();
};

