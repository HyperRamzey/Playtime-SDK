#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NiagaraDataInterface.hpp"
namespace _Script_Niagara {
struct NiagaraMeshRendererProperties;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraDataInterfaceMeshRendererInfo : public NiagaraDataInterface {
    private: char pad_38[0x18]; public:
    _Script_Niagara::NiagaraMeshRendererProperties*& get_MeshRenderer();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
