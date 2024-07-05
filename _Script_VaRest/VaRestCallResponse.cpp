#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "VaRestCallResponse.hpp"
#include "VaRestRequestJSON.hpp"
void* _Script_VaRest::VaRestCallResponse::get_Callback() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_VaRest::VaRestRequestJSON*& _Script_VaRest::VaRestCallResponse::get_Request() {
    return *(_Script_VaRest::VaRestRequestJSON**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_VaRest::VaRestCallResponse::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/VaRest.VaRestCallResponse");
    return result;
}
