/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                    _______    _                                     *
 *                   (  ____ \  ( \     |\     /|                      * 
 *                   | (    \/  | (     ( \   / )                      *
 *                   | (__      | |      \ (_) /                       *
 *                   |  __)     | |       \   /                        *
 *                   | (        | |        ) (                         *
 *                   | )        | (____/\  | |                         *
 *                   |/         (_______/  \_/                         *
 *                                                                     *
 *                                                                     *
 *     fly is an awesome c++ network library.                          *
 *                                                                     *
 *   @author: lichuan                                                  *
 *   @qq: 308831759                                                    *
 *   @email: 308831759@qq.com                                          *
 *   @github: https://github.com/lichuan/fly                           *
 *   @date: 2015-06-10 13:34:21                                        *
 *                                                                     *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <iostream>
#include "fly/base/logger.hpp"
#include <unistd.h>
using namespace std;

int main()
{
    fly::base::Logger::instance()->init(fly::base::DEBUG, "myapp", "./log/");

    for(int32 i = 0; i < 10000; ++i)
    {
        LOG_INFO("testserver msg this is a very long msg this is a very long msg this is a very long msg this is a very long msg this is a very long msg this is a very long msg %s %d", "msg str", 1112222);
    }
    
    cout << "output end" << endl;
}