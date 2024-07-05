#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "Chatroom.hpp"
void* _Script_Party::Chatroom::get_CurrentChatRoomId() {
    return (void*)((uintptr_t)this + 0x28);
}
int32_t& _Script_Party::Chatroom::get_MaxChatRoomRetries() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
int32_t& _Script_Party::Chatroom::get_NumChatRoomRetries() {
    return *(int32_t*)((uintptr_t)this + 0x3c);
}
_Script_CoreUObject::Class* _Script_Party::Chatroom::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Party.Chatroom");
    return result;
}
