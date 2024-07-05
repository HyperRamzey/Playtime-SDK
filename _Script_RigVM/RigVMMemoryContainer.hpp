#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RigVM {
#pragma pack(push, 1)
struct RigVMMemoryContainer {
    private: char pad_0[0xa0]; public:
    bool get_bUseNameMap();
    void set_bUseNameMap(bool value);
    void* get_MemoryType();
    void* get_Registers();
    void* get_RegisterOffsets();
    void* get_Data();
    void* get_ScriptStructs();
    void* get_NameMap();
    bool get_bEncounteredErrorDuringLoad();
    void set_bEncounteredErrorDuringLoad(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa0
#pragma pack(pop)
}
