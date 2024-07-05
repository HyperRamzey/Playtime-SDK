#include "..\FUObjectArray.hpp"
#include "BP_ScaleHuggy_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Testing_BP_ScaleHuggy::BP_ScaleHuggy_C::get_SkeletalMesh1() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x220);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Testing_BP_ScaleHuggy::BP_ScaleHuggy_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x228);
}
_Script_CoreUObject::Class* _Game_Gameplay_Testing_BP_ScaleHuggy::BP_ScaleHuggy_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Testing/BP_ScaleHuggy.BP_ScaleHuggy_C");
    return result;
}
