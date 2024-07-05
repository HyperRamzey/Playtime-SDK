#include "..\FUObjectArray.hpp"
#include "BP_MeshContainer_BoxySkin_C.hpp"
#include "..\_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_PlaytimeCharacterCosmetic\BP_MeshContainer_PlaytimeCharacterCosmetic_C.hpp"
#include "..\_Game_Player_Boxy_BP_NetworkBoxy\BP_NetworkBoxy_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_Engine\DecalComponent.hpp"
#include "..\_Script_Playtime_Multiplayer\Cosmetic.hpp"
#include "..\_Script_Playtime_Multiplayer\PlaytimeCharacter.hpp"
void* _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_BoxySkin::BP_MeshContainer_BoxySkin_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x290);
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_BoxySkin::BP_MeshContainer_BoxySkin_C::Playtime_Character_Tick0(_Script_Playtime_Multiplayer::PlaytimeCharacter* Playtime_Character) {
    return;
}
_Script_Engine::DecalComponent*& _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_BoxySkin::BP_MeshContainer_BoxySkin_C::get_LeftEyeDecal() {
    return *(_Script_Engine::DecalComponent**)((uintptr_t)this + 0x2a0);
}
_Script_Engine::DecalComponent*& _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_BoxySkin::BP_MeshContainer_BoxySkin_C::get_RightEyeDecal() {
    return *(_Script_Engine::DecalComponent**)((uintptr_t)this + 0x298);
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_BoxySkin::BP_MeshContainer_BoxySkin_C::Network_Boxy_Tick(_Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C* Network_Boxy) {
    return;
}
_Script_CoreUObject::Class* _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_BoxySkin::BP_MeshContainer_BoxySkin_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Character/Cosmetics/Containers/BP_MeshContainer_BoxySkin.BP_MeshContainer_BoxySkin_C");
    return result;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_BoxySkin::BP_MeshContainer_BoxySkin_C::SetCosmeticFromStruct(_Script_Playtime_Multiplayer::Cosmetic Cosmetic, _Script_CoreUObject::LinearColor Color) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_BoxySkin::BP_MeshContainer_BoxySkin_C::SetEyeDecalVisibility(bool Visible) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_BoxySkin::BP_MeshContainer_BoxySkin_C::ExecuteUbergraph_BP_MeshContainer_BoxySkin(int32_t EntryPoint) {
    return;
}
