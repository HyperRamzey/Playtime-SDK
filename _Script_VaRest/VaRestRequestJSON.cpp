#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\LatentActionInfo.hpp"
#include "VaRestJsonObject.hpp"
#include "VaRestJsonValue.hpp"
#include "VaRestRequestJSON.hpp"
void _Script_VaRest::VaRestRequestJSON::SetStringRequestContent(void* Content) {
    return;
}
bool _Script_VaRest::VaRestRequestJSON::get_bIsValidJsonResponse() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 1 != 0;
}
void* _Script_VaRest::VaRestRequestJSON::get_OnRequestComplete() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_VaRest::VaRestJsonObject*& _Script_VaRest::VaRestRequestJSON::get_RequestJsonObj() {
    return *(_Script_VaRest::VaRestJsonObject**)((uintptr_t)this + 0xb0);
}
void* _Script_VaRest::VaRestRequestJSON::GetStatus() {
    return;
}
void* _Script_VaRest::VaRestRequestJSON::get_OnRequestFail() {
    return (void*)((uintptr_t)this + 0x38);
}
void _Script_VaRest::VaRestRequestJSON::SetResponseObject(_Script_VaRest::VaRestJsonObject* JsonObject) {
    return;
}
int32_t& _Script_VaRest::VaRestRequestJSON::get_ResponseSize() {
    return *(int32_t*)((uintptr_t)this + 0x88);
}
void* _Script_VaRest::VaRestRequestJSON::get_ResponseContent() {
    return (void*)((uintptr_t)this + 0x90);
}
void _Script_VaRest::VaRestRequestJSON::set_bIsValidJsonResponse(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_VaRest::VaRestJsonObject*& _Script_VaRest::VaRestRequestJSON::get_ResponseJsonObj() {
    return *(_Script_VaRest::VaRestJsonObject**)((uintptr_t)this + 0xe8);
}
_Script_VaRest::VaRestJsonValue*& _Script_VaRest::VaRestRequestJSON::get_ResponseJsonValue() {
    return *(_Script_VaRest::VaRestJsonValue**)((uintptr_t)this + 0xf0);
}
void _Script_VaRest::VaRestRequestJSON::ResetData() {
    return;
}
_Script_CoreUObject::Class* _Script_VaRest::VaRestRequestJSON::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/VaRest.VaRestRequestJSON");
    return result;
}
void _Script_VaRest::VaRestRequestJSON::SetVerb(void* Verb) {
    return;
}
void _Script_VaRest::VaRestRequestJSON::SetURL(void* URL) {
    return;
}
void _Script_VaRest::VaRestRequestJSON::SetRequestObject(_Script_VaRest::VaRestJsonObject* JsonObject) {
    return;
}
void _Script_VaRest::VaRestRequestJSON::SetHeader(void* HeaderName, void* HeaderValue) {
    return;
}
void _Script_VaRest::VaRestRequestJSON::SetContentType(void* ContentType) {
    return;
}
void _Script_VaRest::VaRestRequestJSON::SetCustomVerb(void* Verb) {
    return;
}
void _Script_VaRest::VaRestRequestJSON::SetBinaryRequestContent(void*& Content) {
    return;
}
void _Script_VaRest::VaRestRequestJSON::SetBinaryContentType(void* ContentType) {
    return;
}
void _Script_VaRest::VaRestRequestJSON::ResetResponseData() {
    return;
}
void _Script_VaRest::VaRestRequestJSON::ResetRequestData() {
    return;
}
int32_t _Script_VaRest::VaRestRequestJSON::RemoveTag(void* Tag) {
    return;
}
void _Script_VaRest::VaRestRequestJSON::ProcessURL(void* URL) {
    return;
}
bool _Script_VaRest::VaRestRequestJSON::HasTag(void* Tag) {
    return;
}
void* _Script_VaRest::VaRestRequestJSON::GetAllResponseHeaders() {
    return;
}
void* _Script_VaRest::VaRestRequestJSON::GetVerb() {
    return;
}
void* _Script_VaRest::VaRestRequestJSON::GetURL() {
    return;
}
_Script_VaRest::VaRestJsonValue* _Script_VaRest::VaRestRequestJSON::GetResponseValue() {
    return;
}
_Script_VaRest::VaRestJsonObject* _Script_VaRest::VaRestRequestJSON::GetResponseObject() {
    return;
}
void* _Script_VaRest::VaRestRequestJSON::GetResponseHeader(void* HeaderName) {
    return;
}
void* _Script_VaRest::VaRestRequestJSON::GetResponseContentAsString(bool bCacheResponseContent) {
    return;
}
int32_t _Script_VaRest::VaRestRequestJSON::GetResponseCode() {
    return;
}
_Script_VaRest::VaRestJsonObject* _Script_VaRest::VaRestRequestJSON::GetRequestObject() {
    return;
}
void _Script_VaRest::VaRestRequestJSON::ExecuteProcessRequest() {
    return;
}
void _Script_VaRest::VaRestRequestJSON::Cancel() {
    return;
}
void _Script_VaRest::VaRestRequestJSON::ApplyURL(void* URL, _Script_VaRest::VaRestJsonObject*& Result, _Script_CoreUObject::Object* WorldContextObject, _Script_Engine::LatentActionInfo LatentInfo) {
    return;
}
void _Script_VaRest::VaRestRequestJSON::AddTag(void* Tag) {
    return;
}
