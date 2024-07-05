#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MagicLeapIdentity.hpp"
_Script_CoreUObject::Class* _Script_MagicLeapIdentity::MagicLeapIdentity::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MagicLeapIdentity.MagicLeapIdentity");
    return result;
}
void* _Script_MagicLeapIdentity::MagicLeapIdentity::RequestAttributeValueAsync(void*& RequestedAttributeList, void*& ResultDelegate) {
    return;
}
void* _Script_MagicLeapIdentity::MagicLeapIdentity::GetAllAvailableAttributes(void*& AvailableAttributes) {
    return;
}
void* _Script_MagicLeapIdentity::MagicLeapIdentity::RequestAttributeValue(void*& RequestedAttributeList, void*& RequestedAttributeValues) {
    return;
}
void _Script_MagicLeapIdentity::MagicLeapIdentity::GetAllAvailableAttributesAsync(void*& ResultDelegate) {
    return;
}
