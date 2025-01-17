#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Niagara {
struct NiagaraEffectType;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraScalabilityManager {
    private: char pad_0[0x70]; public:
    _Script_Niagara::NiagaraEffectType*& get_EffectType();
    void* get_ManagedComponents();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
