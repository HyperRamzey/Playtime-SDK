#include "..\FUObjectArray.hpp"
#include "BPOnlineUser.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AdvancedSessions::BPOnlineUser::get_UniqueNetId() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_AdvancedSessions::BPOnlineUser::get_DisplayName() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_AdvancedSessions::BPOnlineUser::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AdvancedSessions.BPOnlineUser");
    return result;
}
void* _Script_AdvancedSessions::BPOnlineUser::get_RealName() {
    return (void*)((uintptr_t)this + 0x30);
}
