#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraDebuggerExecuteConsoleCommand {
    private: char pad_0[0x18]; public:
    void* get_Command();
    bool get_bRequiresWorld();
    void set_bRequiresWorld(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
