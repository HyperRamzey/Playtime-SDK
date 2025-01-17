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
struct NiagaraSimpleClientInfo {
    private: char pad_0[0x40]; public:
    void* get_Systems();
    void* get_Actors();
    void* get_Components();
    void* get_Emitters();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
