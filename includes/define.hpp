#pragma once

#include <iostream>
#include <unistd.h>
#include <sys/socket.h>
#include <poll.h>
#include <fcntl.h>
#include <dirent.h>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>

#include "utils.hpp"

#include "configFileParser.hpp"
#include "Values.hpp"
#include "location.hpp"
#include "server.hpp"

#include "ParseRequest.hpp"
#include "response.hpp" 
#include "client.hpp"
#include "connection.hpp"

#define MAX_REQUEST_SIZE 1024
#define BUFFER_SIZE 1024
// default config file
#define CONFIG "./configs/config.conf"
#define TYPES "./configs/types.conf"
// default values
#define DEFAULT_ROOT "./www/html"
#define DEFAULT_CLIENT_MAX_BODY_SIZE 10000
#define DEFAULT_AUTOINDEX "off"
#define DEFAULT_UPLOAD "off"
#define DEFAULT_HOST "127.0.0.1"
#define DEFAULT_PORT 80

#define DEFAULT_ERROR_PAGES_201 "./www/html/error_pages/201.html"
#define DEFAULT_ERROR_PAGES_204 "./www/html/error_pages/204.html"
#define DEFAULT_ERROR_PAGES_400 "./www/html/error_pages/400.html"
#define DEFAULT_ERROR_PAGES_403 "./www/html/error_pages/403.html"
#define DEFAULT_ERROR_PAGES_404 "./www/html/error_pages/404.html"
#define DEFAULT_ERROR_PAGES_405 "./www/html/error_pages/405.html"
#define DEFAULT_ERROR_PAGES_413 "./www/html/error_pages/413.html"
#define DEFAULT_ERROR_PAGES_414 "./www/html/error_pages/414.html"
#define DEFAULT_ERROR_PAGES_500 "./www/html/error_pages/500.html"
#define DEFAULT_ERROR_PAGES_501 "./www/html/error_pages/501.html"
#define DEFAULT_ERROR_PAGES_502 "./www/html/error_pages/502.html"
#define DEFAULT_ERROR_PAGES_505 "./www/html/error_pages/505.html"
// #define REDYTOWRITE 1

// request status
#define NOTREADY 0
#define REQ_HEADR_DONE 1
#define READYTO_RES 2
#define SEND_ERROR 10
// response status
#define NOTREADYTOWRITE 3
#define HEADER_DONE 4
#define BODY_DONE 5

// body type
#define transfer_encoding 6
#define content_length 7
#define ERROR 8
// error page
#define ERROR_405 405
#define ERROR_400 400   // Bad Request
#define ERROR_501 501   // Not Implemented
#define ERROR_413 413   // Request Entity Too Large
#define ERROR_414 414   // Request-URI Too Long
#define OTHER_STATUS -1 // other status
#define ERROR_400 400  //Bad Request
#define ERROR_501 501  //Not Implemented
#define ERROR_413 413  //Request Entity Too Large
#define ERROR_414 414  //Request-URI Too Long
#define OTHER_STATUS  -1
// CGItimeout
#define CGI_TIMEOUT 5
