#include "..\FUObjectArray.hpp"
#include "BP_TrainStation_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\InstancedStaticMeshComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\TextRenderComponent.hpp"
#include "..\_Script_Playtime_Multiplayer\TrainStation.hpp"
_Script_Engine::InstancedStaticMeshComponent*& _Game_Gameplay_Game_BP_TrainStation::BP_TrainStation_C::get_InstancedStaticMesh1() {
    return *(_Script_Engine::InstancedStaticMeshComponent**)((uintptr_t)this + 0x270);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Game_BP_TrainStation::BP_TrainStation_C::get_Tunnel_Front() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x288);
}
_Script_Engine::InstancedStaticMeshComponent*& _Game_Gameplay_Game_BP_TrainStation::BP_TrainStation_C::get_InstancedStaticMesh() {
    return *(_Script_Engine::InstancedStaticMeshComponent**)((uintptr_t)this + 0x278);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Game_BP_TrainStation::BP_TrainStation_C::get_Tunnel_Back() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x280);
}
_Script_Engine::TextRenderComponent*& _Game_Gameplay_Game_BP_TrainStation::BP_TrainStation_C::get_TextRender() {
    return *(_Script_Engine::TextRenderComponent**)((uintptr_t)this + 0x2a8);
}
_Script_Engine::TextRenderComponent*& _Game_Gameplay_Game_BP_TrainStation::BP_TrainStation_C::get_TextRender3() {
    return *(_Script_Engine::TextRenderComponent**)((uintptr_t)this + 0x290);
}
_Script_Engine::TextRenderComponent*& _Game_Gameplay_Game_BP_TrainStation::BP_TrainStation_C::get_TextRender2() {
    return *(_Script_Engine::TextRenderComponent**)((uintptr_t)this + 0x298);
}
_Script_Engine::TextRenderComponent*& _Game_Gameplay_Game_BP_TrainStation::BP_TrainStation_C::get_TextRender1() {
    return *(_Script_Engine::TextRenderComponent**)((uintptr_t)this + 0x2a0);
}
_Script_CoreUObject::Class* _Game_Gameplay_Game_BP_TrainStation::BP_TrainStation_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Game/BP_TrainStation.BP_TrainStation_C");
    return result;
}
void _Game_Gameplay_Game_BP_TrainStation::BP_TrainStation_C::UserConstructionScript() {
    return;
}
