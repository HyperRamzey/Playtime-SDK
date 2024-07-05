#include "..\FUObjectArray.hpp"
#include "..\_Game_Base_GM_Escape\GM_Escape_C.hpp"
#include "GM_Escape_Tutorial_Monster_C.hpp"
#include "..\_Game_Player_Huggy_BP_NetworkHuggy\BP_NetworkHuggy_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Game_Base_GM_Escape_Tutorial_Monster::GM_Escape_Tutorial_Monster_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x480);
}
void _Game_Base_GM_Escape_Tutorial_Monster::GM_Escape_Tutorial_Monster_C::ReceiveTick0(float DeltaSeconds) {
    return;
}
_Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C*& _Game_Base_GM_Escape_Tutorial_Monster::GM_Escape_Tutorial_Monster_C::get_Huggy() {
    return *(_Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C**)((uintptr_t)this + 0x488);
}
void* _Game_Base_GM_Escape_Tutorial_Monster::GM_Escape_Tutorial_Monster_C::get_WaitForHuggy_Timer() {
    return (void*)((uintptr_t)this + 0x490);
}
_Script_CoreUObject::Class* _Game_Base_GM_Escape_Tutorial_Monster::GM_Escape_Tutorial_Monster_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Base/GM_Escape_Tutorial_Monster.GM_Escape_Tutorial_Monster_C");
    return result;
}
void _Game_Base_GM_Escape_Tutorial_Monster::GM_Escape_Tutorial_Monster_C::K2_OnSetMatchState(void* NewState) {
    return;
}
void _Game_Base_GM_Escape_Tutorial_Monster::GM_Escape_Tutorial_Monster_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Base_GM_Escape_Tutorial_Monster::GM_Escape_Tutorial_Monster_C::StartEarlyDepartureTimer0() {
    return;
}
void _Game_Base_GM_Escape_Tutorial_Monster::GM_Escape_Tutorial_Monster_C::ExecuteUbergraph_GM_Escape_Tutorial_Monster(int32_t EntryPoint) {
    return;
}
