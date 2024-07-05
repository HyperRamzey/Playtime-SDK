#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NiagaraBaselineController.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraBaselineController_Basic : public NiagaraBaselineController {
    private: char pad_68[0x18]; public:
    int32_t& get_NumInstances();
    void* get_SpawnedComponents();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}
