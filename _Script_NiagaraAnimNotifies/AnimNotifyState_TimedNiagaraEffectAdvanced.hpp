#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimNotifyState_TimedNiagaraEffect.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct MeshComponent;
}
namespace _Script_NiagaraAnimNotifies {
#pragma pack(push, 1)
struct AnimNotifyState_TimedNiagaraEffectAdvanced : public AnimNotifyState_TimedNiagaraEffect {
    private: char pad_60[0x50]; public:
    static _Script_CoreUObject::Class* static_class();
    float GetNotifyProgress(_Script_Engine::MeshComponent* MeshComp);
}; // Size: 0xb0
#pragma pack(pop)
}
