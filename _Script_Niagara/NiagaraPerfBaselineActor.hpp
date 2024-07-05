#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Niagara {
struct NiagaraBaselineController;
}
namespace _Script_Engine {
struct TextRenderComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraPerfBaselineActor : public _Script_Engine::Actor {
    private: char pad_220[0x10]; public:
    _Script_Niagara::NiagaraBaselineController*& get_Controller();
    _Script_Engine::TextRenderComponent*& get_Label();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x230
#pragma pack(pop)
}
