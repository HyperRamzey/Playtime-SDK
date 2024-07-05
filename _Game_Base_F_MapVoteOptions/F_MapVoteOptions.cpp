#include "..\FUObjectArray.hpp"
#include "F_MapVoteOptions.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Game_Base_F_MapVoteOptions::F_MapVoteOptions::get_MapA_26_8A2DB59041BBF470AB17EBB38C1FDE27() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Game_Base_F_MapVoteOptions::F_MapVoteOptions::get_MapB_27_956A1A2F43FCDBEDA73912BC9912A5DF() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Game_Base_F_MapVoteOptions::F_MapVoteOptions::get_Random_28_05A9F4544B0C2526DC59D3B4ED7E7C66() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Game_Base_F_MapVoteOptions::F_MapVoteOptions::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/Base/F_MapVoteOptions.F_MapVoteOptions");
    return result;
}
