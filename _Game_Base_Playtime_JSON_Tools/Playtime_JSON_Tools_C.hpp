#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Game_Base_Playtime_JSON_Tools {
#pragma pack(push, 1)
struct Playtime_JSON_Tools_C : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void* Get_JSON_Value_Explicit(void* JSON_Source, void* Key, _Script_CoreUObject::Object* __WorldContext, bool& Valid);
    void RemoveSquareBrackets(void* Input, _Script_CoreUObject::Object* __WorldContext, void*& Output);
    void* Get_JSON_Value(void* JSON_Source, void* Key, _Script_CoreUObject::Object* __WorldContext, bool& Valid);
}; // Size: 0x28
#pragma pack(pop)
}
