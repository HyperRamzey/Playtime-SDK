#include "..\FUObjectArray.hpp"
#include "AdvancedGameSession.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\GameSession.hpp"
void* _Script_AdvancedSessions::AdvancedGameSession::get_BanList() {
    return (void*)((uintptr_t)this + 0x238);
}
_Script_CoreUObject::Class* _Script_AdvancedSessions::AdvancedGameSession::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AdvancedSessions.AdvancedGameSession");
    return result;
}
