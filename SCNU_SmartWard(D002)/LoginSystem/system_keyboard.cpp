#include "system_keyboard.h"


void show_soft()
{
//    PVOID OldValue = nullptr;
//    BOOL bRet = Wow64DisableWow64FsRedirection(&OldValue);
//    QString csProcess="C:\\Program Files\\Common Files\\Microsoft Shared\\ink\\tabtip.exe";
//    QString params="";
//  //  ShellExecute(NULL, L"open", (LPCWSTR)csProcess.utf16(), (LPCWSTR)params.utf16(), NULL, SW_SHOWNORMAL);
//    if (bRet)
//    {
//        Wow64RevertWow64FsRedirection(OldValue);
//    }
}

void close_soft()
{
//    HWND hand01=FindWindow(L"IPTip_Main_Window",nullptr);
//    //qDebug()<<"hand01    ="<<hand01<<endl;
//    PostMessage(hand01, WM_SYSCOMMAND, SC_CLOSE, 0);
}

//bool is_visible()
//{
//    HWND hand01=FindWindow(L"IPTip_Main_Window",nullptr);
//    qDebug()<<"hand01="<<hand01<<endl;
//    if(!hand01){
//        qDebug()<<"no handle"<<endl;
//        return false;
//    }
//    qDebug()<<"IsWindowVisible(hand01)="<<IsWindowVisible(hand01)<<endl;
//    return IsWindowVisible(hand01);
//}


//bool IsProcessRun(char *pName)

//    HANDLE hProcessSnap;
//    HANDLE hProcess;
//    PROCESSENTRY32 pe32;
//    DWORD dwPriorityClass;

//    bool bFind = false;
//    // Take a snapshot of all processes in the system.
//    hProcessSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
//    if (hProcessSnap == INVALID_HANDLE_VALUE)
//    {
//        return false;
//    }

//     Set the size of the structure before using it.
//    pe32.dwSize = sizeof(PROCESSENTRY32);

//     Retrieve information about the first process,
//     and exit if unsuccessful
//    if (!Process32First(hProcessSnap, &pe32))
//    {
//        CloseHandle(hProcessSnap);          // clean the snapshot object
//        return false;
//    }

//     Now walk the snapshot of processes, and
//     display information about each process in turn
//    do
//    {
//        // Retrieve the priority class.
//        dwPriorityClass = 0;
//        std::string p_name = std::string(pName);
//        if (::strstr(QString::fromStdWString(pe32.szExeFile).toStdString().c_str(), p_name.c_str()) != NULL)
//        {
//            bFind = true;
//            break;
//        }
//    } while (Process32Next(hProcessSnap, &pe32));

//    CloseHandle(hProcessSnap);
//    return bFind;
//}
