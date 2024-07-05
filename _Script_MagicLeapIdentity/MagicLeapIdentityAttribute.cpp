#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MagicLeapIdentityAttribute.hpp"
void* _Script_MagicLeapIdentity::MagicLeapIdentityAttribute::get_Attribute() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MagicLeapIdentity::MagicLeapIdentityAttribute::get_Value() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_MagicLeapIdentity::MagicLeapIdentityAttribute::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MagicLeapIdentity.MagicLeapIdentityAttribute");
    return result;
}
