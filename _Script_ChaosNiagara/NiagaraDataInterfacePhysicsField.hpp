#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Niagara\NiagaraDataInterface.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ChaosNiagara {
#pragma pack(push, 1)
struct NiagaraDataInterfacePhysicsField : public _Script_Niagara::NiagaraDataInterface {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
