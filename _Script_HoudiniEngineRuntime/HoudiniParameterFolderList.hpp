#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "HoudiniParameter.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HoudiniEngineRuntime {
#pragma pack(push, 1)
struct HoudiniParameterFolderList : public HoudiniParameter {
    private: char pad_108[0x18]; public:
    bool get_bIsTabMenu();
    void set_bIsTabMenu(bool value);
    bool get_bIsTabsShown();
    void set_bIsTabsShown(bool value);
    void* get_TabFolders();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x120
#pragma pack(pop)
}
