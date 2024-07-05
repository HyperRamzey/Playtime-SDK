#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NiagaraDataInterfaceRWBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraDataInterfaceIntRenderTarget2D : public NiagaraDataInterfaceRWBase {
    private: char pad_d8[0x78]; public:
    void* get_Size();
    void* get_RenderTargetUserParameter();
    void* get_ManagedRenderTargets();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x150
#pragma pack(pop)
}
