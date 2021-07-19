#ifndef SYSTEM_KEYBOARD_H
#define SYSTEM_KEYBOARD_H

#include <QString>
#include "Windows.h"
#include "WinUser.h"
#include <tlhelp32.h>
#include <string.h>
#include "TlHelp32.h"
#include "winbase.h"
#include <QDebug>
#include <QLineEdit>
using namespace std;

void show_soft();

void close_soft();

bool IsProcessRun(char *pName);

bool is_visible();


#endif // SYSTEM_KEYBOARD_H
