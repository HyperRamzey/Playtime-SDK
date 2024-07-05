#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TableRowBase.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "Perk.hpp"
void* _Script_Playtime_Multiplayer::Perk::get_PerkType() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Playtime_Multiplayer::Perk::get_LevelThreeDescription() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_Playtime_Multiplayer::Perk::get_DisplayName() {
    return (void*)((uintptr_t)this + 0x10);
}
int32_t& _Script_Playtime_Multiplayer::Perk::get_LevelOnePrice() {
    return *(int32_t*)((uintptr_t)this + 0x88);
}
_Script_Engine::Texture2D*& _Script_Playtime_Multiplayer::Perk::get_Icon() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x20);
}
void* _Script_Playtime_Multiplayer::Perk::get_Description() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Playtime_Multiplayer::Perk::get_LevelOneDescription() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Playtime_Multiplayer::Perk::get_LevelTwoDescription() {
    return (void*)((uintptr_t)this + 0x58);
}
int32_t& _Script_Playtime_Multiplayer::Perk::get_LevelTwoPrice() {
    return *(int32_t*)((uintptr_t)this + 0x8c);
}
int32_t& _Script_Playtime_Multiplayer::Perk::get_LevelThreePrice() {
    return *(int32_t*)((uintptr_t)this + 0x90);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::Perk::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.Perk");
    return result;
}
