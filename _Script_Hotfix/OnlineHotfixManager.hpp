#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Hotfix {
#pragma pack(push, 1)
struct OnlineHotfixManager : public _Script_CoreUObject::Object {
    private: char pad_28[0x200]; public:
    void* get_OSSName();
    void* get_HotfixManagerClassName();
    void* get_DebugPrefix();
    void* get_AssetsHotfixedFromIniFiles();
    static _Script_CoreUObject::Class* static_class();
    void StartHotfixProcess();
}; // Size: 0x228
#pragma pack(pop)
}
