#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Actors_BP_NavBaseActor\BP_NavBaseActor_C.hpp"
#include "BP_NavLevelInfo_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Texture.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
_Script_Engine::Texture*& _Game_Interface_NavSystem_Blueprints_Actors_BP_NavLevelInfo::BP_NavLevelInfo_C::get_MinimapImage() {
    return *(_Script_Engine::Texture**)((uintptr_t)this + 0x240);
}
float& _Game_Interface_NavSystem_Blueprints_Actors_BP_NavLevelInfo::BP_NavLevelInfo_C::get_MinimapDimentions() {
    return *(float*)((uintptr_t)this + 0x248);
}
float& _Game_Interface_NavSystem_Blueprints_Actors_BP_NavLevelInfo::BP_NavLevelInfo_C::get_MinimapZoom() {
    return *(float*)((uintptr_t)this + 0x24c);
}
float& _Game_Interface_NavSystem_Blueprints_Actors_BP_NavLevelInfo::BP_NavLevelInfo_C::get_RadarDimentions() {
    return *(float*)((uintptr_t)this + 0x268);
}
_Script_Engine::Texture2D*& _Game_Interface_NavSystem_Blueprints_Actors_BP_NavLevelInfo::BP_NavLevelInfo_C::get_BigmapImage() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x250);
}
float& _Game_Interface_NavSystem_Blueprints_Actors_BP_NavLevelInfo::BP_NavLevelInfo_C::get_BigmapDimentions() {
    return *(float*)((uintptr_t)this + 0x258);
}
_Script_Engine::Texture*& _Game_Interface_NavSystem_Blueprints_Actors_BP_NavLevelInfo::BP_NavLevelInfo_C::get_RadarMinimapImage() {
    return *(_Script_Engine::Texture**)((uintptr_t)this + 0x260);
}
float& _Game_Interface_NavSystem_Blueprints_Actors_BP_NavLevelInfo::BP_NavLevelInfo_C::get_RadarZoom() {
    return *(float*)((uintptr_t)this + 0x26c);
}
_Script_CoreUObject::Class* _Game_Interface_NavSystem_Blueprints_Actors_BP_NavLevelInfo::BP_NavLevelInfo_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Interface/NavSystem/Blueprints/Actors/BP_NavLevelInfo.BP_NavLevelInfo_C");
    return result;
}
