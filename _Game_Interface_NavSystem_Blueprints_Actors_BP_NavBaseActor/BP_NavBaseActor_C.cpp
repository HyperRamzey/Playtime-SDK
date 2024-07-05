#include "..\FUObjectArray.hpp"
#include "BP_NavBaseActor_C.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement\BPC_NavElement_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
_Script_Engine::SceneComponent*& _Game_Interface_NavSystem_Blueprints_Actors_BP_NavBaseActor::BP_NavBaseActor_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x230);
}
void* _Game_Interface_NavSystem_Blueprints_Actors_BP_NavBaseActor::BP_NavBaseActor_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x220);
}
_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C*& _Game_Interface_NavSystem_Blueprints_Actors_BP_NavBaseActor::BP_NavBaseActor_C::get_BPC_NavElement() {
    return *(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C**)((uintptr_t)this + 0x228);
}
float& _Game_Interface_NavSystem_Blueprints_Actors_BP_NavBaseActor::BP_NavBaseActor_C::get_SabotageDuration() {
    return *(float*)((uintptr_t)this + 0x238);
}
_Script_CoreUObject::Class* _Game_Interface_NavSystem_Blueprints_Actors_BP_NavBaseActor::BP_NavBaseActor_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Interface/NavSystem/Blueprints/Actors/BP_NavBaseActor.BP_NavBaseActor_C");
    return result;
}
void _Game_Interface_NavSystem_Blueprints_Actors_BP_NavBaseActor::BP_NavBaseActor_C::Sabotage() {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Actors_BP_NavBaseActor::BP_NavBaseActor_C::ExecuteUbergraph_BP_NavBaseActor(int32_t EntryPoint) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Actors_BP_NavBaseActor::BP_NavBaseActor_C::DoSabotage() {
    return;
}
