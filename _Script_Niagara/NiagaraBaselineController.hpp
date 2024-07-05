#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
#include "NiagaraPerfBaselineStats.hpp"
namespace _Script_Niagara {
struct NiagaraEffectType;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
struct NiagaraSystem;
}
namespace _Script_Niagara {
struct NiagaraPerfBaselineActor;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraBaselineController : public _Script_CoreUObject::Object {
    private: char pad_28[0x40]; public:
    float& get_TestDuration();
    _Script_Niagara::NiagaraEffectType*& get_EffectType();
    _Script_Niagara::NiagaraPerfBaselineActor*& get_Owner();
    void* get_System();
    static _Script_CoreUObject::Class* static_class();
    bool OnTickTest();
    void OnOwnerTick(float DeltaTime);
    void OnEndTest(_Script_Niagara::NiagaraPerfBaselineStats Stats);
    void OnBeginTest();
    _Script_Niagara::NiagaraSystem* GetSystem();
}; // Size: 0x68
#pragma pack(pop)
}
