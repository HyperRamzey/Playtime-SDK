#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NiagaraDataInterface.hpp"
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraDataInterfaceLandscape : public NiagaraDataInterface {
    private: char pad_38[0x20]; public:
    _Script_Engine::Actor*& get_SourceLandscape();
    void* get_SourceMode();
    void* get_PhysicalMaterials();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
