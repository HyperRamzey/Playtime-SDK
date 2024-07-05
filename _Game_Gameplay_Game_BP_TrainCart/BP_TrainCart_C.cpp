#include "..\FUObjectArray.hpp"
#include "BP_TrainCart_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ArrowComponent.hpp"
#include "..\_Script_Engine\BillboardComponent.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\ChildActorComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Game_BP_TrainCart::BP_TrainCart_C::get_Cart() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x258);
}
_Script_Engine::ArrowComponent*& _Game_Gameplay_Game_BP_TrainCart::BP_TrainCart_C::get_Arrow() {
    return *(_Script_Engine::ArrowComponent**)((uintptr_t)this + 0x230);
}
_Script_Engine::BoxComponent*& _Game_Gameplay_Game_BP_TrainCart::BP_TrainCart_C::get_TempCollision_2() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x220);
}
_Script_Engine::BillboardComponent*& _Game_Gameplay_Game_BP_TrainCart::BP_TrainCart_C::get_AI_Entrance_2() {
    return *(_Script_Engine::BillboardComponent**)((uintptr_t)this + 0x248);
}
_Script_Engine::BoxComponent*& _Game_Gameplay_Game_BP_TrainCart::BP_TrainCart_C::get_TempCollision_1() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x228);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Game_BP_TrainCart::BP_TrainCart_C::get_TPLocation() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x238);
}
_Script_CoreUObject::Class* _Game_Gameplay_Game_BP_TrainCart::BP_TrainCart_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Game/BP_TrainCart.BP_TrainCart_C");
    return result;
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Game_BP_TrainCart::BP_TrainCart_C::get_BP_PassengerCarSetdress() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x240);
}
_Script_Engine::BillboardComponent*& _Game_Gameplay_Game_BP_TrainCart::BP_TrainCart_C::get_AI_Entrance_1() {
    return *(_Script_Engine::BillboardComponent**)((uintptr_t)this + 0x250);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Game_BP_TrainCart::BP_TrainCart_C::get_Root() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x260);
}
_Script_Engine::BillboardComponent*& _Game_Gameplay_Game_BP_TrainCart::BP_TrainCart_C::get_PlayerStart() {
    return *(_Script_Engine::BillboardComponent**)((uintptr_t)this + 0x268);
}
_Script_Engine::ArrowComponent*& _Game_Gameplay_Game_BP_TrainCart::BP_TrainCart_C::get_DoorChecker_2() {
    return *(_Script_Engine::ArrowComponent**)((uintptr_t)this + 0x270);
}
_Script_Engine::ArrowComponent*& _Game_Gameplay_Game_BP_TrainCart::BP_TrainCart_C::get_DoorChecker_1() {
    return *(_Script_Engine::ArrowComponent**)((uintptr_t)this + 0x278);
}
_Script_Engine::BoxComponent*& _Game_Gameplay_Game_BP_TrainCart::BP_TrainCart_C::get_Trigger_SecondaryObjective() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x280);
}
_Script_Engine::BoxComponent*& _Game_Gameplay_Game_BP_TrainCart::BP_TrainCart_C::get_Trigger_EnterExit() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x288);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Game_BP_TrainCart::BP_TrainCart_C::get_Collision() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x290);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Game_BP_TrainCart::BP_TrainCart_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x298);
}
void* _Game_Gameplay_Game_BP_TrainCart::BP_TrainCart_C::get_New_Light_Color() {
    return (void*)((uintptr_t)this + 0x2a0);
}
float& _Game_Gameplay_Game_BP_TrainCart::BP_TrainCart_C::get_New_Temperature() {
    return *(float*)((uintptr_t)this + 0x2b0);
}
