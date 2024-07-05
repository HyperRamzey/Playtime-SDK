#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\EngineSubsystem.hpp"
#include "VaRestJsonObject.hpp"
#include "VaRestJsonValue.hpp"
#include "VaRestRequestJSON.hpp"
#include "VaRestSubsystem.hpp"
_Script_VaRest::VaRestRequestJSON* _Script_VaRest::VaRestSubsystem::ConstructVaRestRequestExt(void* Verb, void* ContentType) {
    return;
}
_Script_VaRest::VaRestJsonObject* _Script_VaRest::VaRestSubsystem::DecodeJsonObject(void* JsonString) {
    return;
}
_Script_VaRest::VaRestJsonObject* _Script_VaRest::VaRestSubsystem::LoadJsonFromFile(void* Path, bool bIsRelativeToContentDir) {
    return;
}
void* _Script_VaRest::VaRestSubsystem::get_RequestMap() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_VaRest::VaRestJsonValue* _Script_VaRest::VaRestSubsystem::DecodeJsonValue(void* JsonString) {
    return;
}
_Script_CoreUObject::Class* _Script_VaRest::VaRestSubsystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/VaRest.VaRestSubsystem");
    return result;
}
_Script_VaRest::VaRestJsonObject* _Script_VaRest::VaRestSubsystem::StaticConstructVaRestJsonObject() {
    return;
}
_Script_VaRest::VaRestRequestJSON* _Script_VaRest::VaRestSubsystem::ConstructVaRestRequest() {
    return;
}
_Script_VaRest::VaRestJsonObject* _Script_VaRest::VaRestSubsystem::ConstructVaRestJsonObject() {
    return;
}
_Script_VaRest::VaRestJsonValue* _Script_VaRest::VaRestSubsystem::ConstructJsonValueString(void* StringValue) {
    return;
}
_Script_VaRest::VaRestJsonValue* _Script_VaRest::VaRestSubsystem::ConstructJsonValueObject(_Script_VaRest::VaRestJsonObject* JsonObject) {
    return;
}
_Script_VaRest::VaRestJsonValue* _Script_VaRest::VaRestSubsystem::ConstructJsonValueNumber(float Number) {
    return;
}
_Script_VaRest::VaRestJsonValue* _Script_VaRest::VaRestSubsystem::ConstructJsonValueBool(bool InValue) {
    return;
}
_Script_VaRest::VaRestJsonValue* _Script_VaRest::VaRestSubsystem::ConstructJsonValueArray(void*& inArray) {
    return;
}
void _Script_VaRest::VaRestSubsystem::CallURL(void* URL, void* Verb, void* ContentType, _Script_VaRest::VaRestJsonObject* VaRestJson, void*& Callback) {
    return;
}
