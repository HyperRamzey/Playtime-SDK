#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NiagaraDataInterface.hpp"
namespace _Script_Engine {
struct Texture;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraDataInterfaceTexture : public NiagaraDataInterface {
    private: char pad_38[0x10]; public:
    _Script_Engine::Texture*& get_Texture();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
