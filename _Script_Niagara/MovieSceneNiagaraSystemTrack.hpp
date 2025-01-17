#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovieSceneNiagaraTrack.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct MovieSceneNiagaraSystemTrack : public MovieSceneNiagaraTrack {
    private: char pad_a0[0x8]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa8
#pragma pack(pop)
}
