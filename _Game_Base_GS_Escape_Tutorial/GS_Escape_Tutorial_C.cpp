#include "..\FUObjectArray.hpp"
#include "..\_Game_Base_GS_Escape\GS_Escape_C.hpp"
#include "GS_Escape_Tutorial_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Game_Base_GS_Escape_Tutorial::GS_Escape_Tutorial_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x4a0);
}
void _Game_Base_GS_Escape_Tutorial::GS_Escape_Tutorial_C::CheckEndConditions0() {
    return;
}
void* _Game_Base_GS_Escape_Tutorial::GS_Escape_Tutorial_C::get_AllCharacters() {
    return (void*)((uintptr_t)this + 0x4a8);
}
_Script_CoreUObject::Class* _Game_Base_GS_Escape_Tutorial::GS_Escape_Tutorial_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Base/GS_Escape_Tutorial.GS_Escape_Tutorial_C");
    return result;
}
void _Game_Base_GS_Escape_Tutorial::GS_Escape_Tutorial_C::ExecuteUbergraph_GS_Escape_Tutorial(int32_t EntryPoint) {
    return;
}
void* _Game_Base_GS_Escape_Tutorial::GS_Escape_Tutorial_C::get_EndLevel() {
    return (void*)((uintptr_t)this + 0x4b8);
}
void _Game_Base_GS_Escape_Tutorial::GS_Escape_Tutorial_C::OnEndGame0(void* HeadingText, void* SubheadingText, bool GivePoints_, void* PlayerType) {
    return;
}
void _Game_Base_GS_Escape_Tutorial::GS_Escape_Tutorial_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Base_GS_Escape_Tutorial::GS_Escape_Tutorial_C::EndGame0() {
    return;
}
void _Game_Base_GS_Escape_Tutorial::GS_Escape_Tutorial_C::End_Level_Override() {
    return;
}
void _Game_Base_GS_Escape_Tutorial::GS_Escape_Tutorial_C::EndLevel__DelegateSignature() {
    return;
}
