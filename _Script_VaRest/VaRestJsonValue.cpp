#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "VaRestJsonObject.hpp"
#include "VaRestJsonValue.hpp"
_Script_VaRest::VaRestJsonObject* _Script_VaRest::VaRestJsonValue::AsObject() {
    return;
}
_Script_CoreUObject::Class* _Script_VaRest::VaRestJsonValue::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/VaRest.VaRestJsonValue");
    return result;
}
void _Script_VaRest::VaRestJsonValue::Reset() {
    return;
}
float _Script_VaRest::VaRestJsonValue::AsNumber() {
    return;
}
bool _Script_VaRest::VaRestJsonValue::IsNull() {
    return;
}
void* _Script_VaRest::VaRestJsonValue::GetTypeString() {
    return;
}
void* _Script_VaRest::VaRestJsonValue::AsString() {
    return;
}
void* _Script_VaRest::VaRestJsonValue::GetType() {
    return;
}
void* _Script_VaRest::VaRestJsonValue::AsInt64() {
    return;
}
void* _Script_VaRest::VaRestJsonValue::AsArray() {
    return;
}
int32_t _Script_VaRest::VaRestJsonValue::AsInt32() {
    return;
}
bool _Script_VaRest::VaRestJsonValue::AsBool() {
    return;
}
