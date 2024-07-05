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
struct NiagaraDataInterfaceRenderTarget2D : public NiagaraDataInterfaceRWBase {
    private: char pad_d8[0xd0]; public:
    void* get_Size();
    void* get_MipMapGeneration();
    void* get_OverrideRenderTargetFormat();
    bool get_bInheritUserParameterSettings();
    void set_bInheritUserParameterSettings(bool value);
    bool get_bOverrideFormat();
    void set_bOverrideFormat(bool value);
    void* get_RenderTargetUserParameter();
    void* get_ManagedRenderTargets();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1a8
#pragma pack(pop)
}
