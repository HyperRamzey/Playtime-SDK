#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Pawn;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Game_World_Geometry_Characters_Abstract_AnimationFunctionLibrary {
#pragma pack(push, 1)
struct AnimationFunctionLibrary_C : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void GetNetworkCharacterSkeletalMesh(_Script_Engine::Pawn* Pawn, _Script_CoreUObject::Object* __WorldContext, _Script_Engine::SkeletalMeshComponent*& Return_Value);
}; // Size: 0x28
#pragma pack(pop)
}
