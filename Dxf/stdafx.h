// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>



// TODO: 在此处引用程序需要的其他头文件
#include "windows.h"
#include <map>
#include <vector>
#include <tlhelp32.h>
#include <fstream>
using namespace std;
#include "Struct.h"
#include "ProcessApi.h"
extern ProcessApi pApi;
#include "ToolsApi.h"
#include "BaseAddr.h"
extern 开关 全局开关;
extern 全局变量 _全局变量;