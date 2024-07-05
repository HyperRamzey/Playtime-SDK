#include "..\FUObjectArray.hpp"
#include "..\_Game_Base_GM_Escape\GM_Escape_C.hpp"
#include "GM_Escape_Tutorial_C.hpp"
#include "..\_Game_Gameplay_Game_BP_Train\BP_Train_C.hpp"
#include "..\_Game_Gameplay_Game_ToyData_BP_ToyMachine\BP_ToyMachine_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void _Game_Base_GM_Escape_Tutorial::GM_Escape_Tutorial_C::K2_OnSetMatchState(void* NewState) {
    return;
}
void* _Game_Base_GM_Escape_Tutorial::GM_Escape_Tutorial_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x480);
}
void _Game_Base_GM_Escape_Tutorial::GM_Escape_Tutorial_C::StartEarlyDepartureTimer0() {
    return;
}
void _Game_Base_GM_Escape_Tutorial::GM_Escape_Tutorial_C::Time_Ran_Out0() {
    return;
}
int32_t& _Game_Base_GM_Escape_Tutorial::GM_Escape_Tutorial_C::get_ToyPartsCollectedOnBeginPlay() {
    return *(int32_t*)((uintptr_t)this + 0x490);
}
_Script_CoreUObject::Class* _Game_Base_GM_Escape_Tutorial::GM_Escape_Tutorial_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Base/GM_Escape_Tutorial.GM_Escape_Tutorial_C");
    return result;
}
_Game_Gameplay_Game_ToyData_BP_ToyMachine::BP_ToyMachine_C*& _Game_Base_GM_Escape_Tutorial::GM_Escape_Tutorial_C::get_ToyMachine() {
    return *(_Game_Gameplay_Game_ToyData_BP_ToyMachine::BP_ToyMachine_C**)((uintptr_t)this + 0x488);
}
_Game_Gameplay_Game_BP_Train::BP_Train_C*& _Game_Base_GM_Escape_Tutorial::GM_Escape_Tutorial_C::get_Train() {
    return *(_Game_Gameplay_Game_BP_Train::BP_Train_C**)((uintptr_t)this + 0x498);
}
void _Game_Base_GM_Escape_Tutorial::GM_Escape_Tutorial_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Base_GM_Escape_Tutorial::GM_Escape_Tutorial_C::ReceiveTick0(float DeltaSeconds) {
    return;
}
void _Game_Base_GM_Escape_Tutorial::GM_Escape_Tutorial_C::Start_NewGameTimer0() {
    return;
}
void _Game_Base_GM_Escape_Tutorial::GM_Escape_Tutorial_C::ExecuteUbergraph_GM_Escape_Tutorial(int32_t EntryPoint) {
    return;
}
