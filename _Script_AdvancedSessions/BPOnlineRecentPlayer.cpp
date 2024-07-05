#include "..\FUObjectArray.hpp"
#include "BPOnlineRecentPlayer.hpp"
#include "BPOnlineUser.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AdvancedSessions::BPOnlineRecentPlayer::get_LastSeen() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_AdvancedSessions::BPOnlineRecentPlayer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AdvancedSessions.BPOnlineRecentPlayer");
    return result;
}
