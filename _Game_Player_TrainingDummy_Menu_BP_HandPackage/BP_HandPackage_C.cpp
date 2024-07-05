#include "..\FUObjectArray.hpp"
#include "BP_HandPackage_C.hpp"
#include "..\_Game_Player_TrainingDummy_Menu_BP_NetExtendoHand\BP_NetExtendoHand_C.hpp"
#include "..\_Game_Player_TrainingDummy_Menu_BP_PlayerPreview\BP_PlayerPreview_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
void _Game_Player_TrainingDummy_Menu_BP_HandPackage::BP_HandPackage_C::NetUnattachAndRetractHand() {
    return;
}
void* _Game_Player_TrainingDummy_Menu_BP_HandPackage::BP_HandPackage_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0xb0);
}
_Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C*& _Game_Player_TrainingDummy_Menu_BP_HandPackage::BP_HandPackage_C::get_HandReference() {
    return *(_Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C**)((uintptr_t)this + 0xb8);
}
_Script_CoreUObject::Class* _Game_Player_TrainingDummy_Menu_BP_HandPackage::BP_HandPackage_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Player/TrainingDummy/Menu/BP_HandPackage.BP_HandPackage_C");
    return result;
}
void _Game_Player_TrainingDummy_Menu_BP_HandPackage::BP_HandPackage_C::PackageUnattachAndRetractHand() {
    return;
}
void _Game_Player_TrainingDummy_Menu_BP_HandPackage::BP_HandPackage_C::NetToggleRetraction(bool Condition) {
    return;
}
void _Game_Player_TrainingDummy_Menu_BP_HandPackage::BP_HandPackage_C::MultiToggleRetraction(bool Condition) {
    return;
}
void _Game_Player_TrainingDummy_Menu_BP_HandPackage::BP_HandPackage_C::ExecuteUbergraph_BP_HandPackage(int32_t EntryPoint) {
    return;
}
void _Game_Player_TrainingDummy_Menu_BP_HandPackage::BP_HandPackage_C::MultiUnattachAndRetractHand() {
    return;
}
void _Game_Player_TrainingDummy_Menu_BP_HandPackage::BP_HandPackage_C::PackageToggleRetraction(bool Condition) {
    return;
}
void _Game_Player_TrainingDummy_Menu_BP_HandPackage::BP_HandPackage_C::ExtendHand(_Script_CoreUObject::Transform SpawnTransform, _Script_CoreUObject::Vector RoughEnd_Location, _Game_Player_TrainingDummy_Menu_BP_PlayerPreview::BP_PlayerPreview_C* Player, bool LeftHand) {
    return;
}
void _Game_Player_TrainingDummy_Menu_BP_HandPackage::BP_HandPackage_C::TryExtendHand(_Script_CoreUObject::Transform SpawnTransform, _Script_CoreUObject::Vector RoughEnd_Location, _Game_Player_TrainingDummy_Menu_BP_PlayerPreview::BP_PlayerPreview_C* Player, bool LeftHand) {
    return;
}
void _Game_Player_TrainingDummy_Menu_BP_HandPackage::BP_HandPackage_C::MultiExtendHand(_Script_CoreUObject::Transform SpawnTransform, _Script_CoreUObject::Vector RoughEnd_Location, _Game_Player_TrainingDummy_Menu_BP_PlayerPreview::BP_PlayerPreview_C* Player, bool LeftHand) {
    return;
}
void _Game_Player_TrainingDummy_Menu_BP_HandPackage::BP_HandPackage_C::NetExtendHand(_Script_CoreUObject::Transform SpawnTransform, _Script_CoreUObject::Vector RoughEnd_Location, _Game_Player_TrainingDummy_Menu_BP_PlayerPreview::BP_PlayerPreview_C* Player, bool LeftHand) {
    return;
}
