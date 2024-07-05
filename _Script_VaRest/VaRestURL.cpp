#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "VaRestURL.hpp"
void* _Script_VaRest::VaRestURL::get_protocol() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_VaRest::VaRestURL::get_Host() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_VaRest::VaRestURL::get_Portal() {
    return (void*)((uintptr_t)this + 0x58);
}
int32_t& _Script_VaRest::VaRestURL::get_Port() {
    return *(int32_t*)((uintptr_t)this + 0x20);
}
void* _Script_VaRest::VaRestURL::get_Op() {
    return (void*)((uintptr_t)this + 0x48);
}
int32_t& _Script_VaRest::VaRestURL::get_Valid() {
    return *(int32_t*)((uintptr_t)this + 0x24);
}
void* _Script_VaRest::VaRestURL::get_Map() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_VaRest::VaRestURL::get_RedirectURL() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_VaRest::VaRestURL::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/VaRest.VaRestURL");
    return result;
}
