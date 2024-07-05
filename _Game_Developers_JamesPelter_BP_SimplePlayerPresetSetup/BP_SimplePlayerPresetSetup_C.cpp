#include "..\FUObjectArray.hpp"
#include "BP_SimplePlayerPresetSetup_C.hpp"
#include "..\_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player\BP_MeshContainer_Player_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Game_Developers_JamesPelter_BP_SimplePlayerPresetSetup::BP_SimplePlayerPresetSetup_C::get_Default_Preset() {
    return (void*)((uintptr_t)this + 0x278);
}
void* _Game_Developers_JamesPelter_BP_SimplePlayerPresetSetup::BP_SimplePlayerPresetSetup_C::get_Preset_Colors() {
    return (void*)((uintptr_t)this + 0x2c8);
}
_Script_CoreUObject::Class* _Game_Developers_JamesPelter_BP_SimplePlayerPresetSetup::BP_SimplePlayerPresetSetup_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Developers/JamesPelter/BP_SimplePlayerPresetSetup.BP_SimplePlayerPresetSetup_C");
    return result;
}
void _Game_Developers_JamesPelter_BP_SimplePlayerPresetSetup::BP_SimplePlayerPresetSetup_C::UserConstructionScript() {
    return;
}
