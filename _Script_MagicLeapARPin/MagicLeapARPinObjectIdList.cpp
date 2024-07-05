#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MagicLeapARPinObjectIdList.hpp"
void* _Script_MagicLeapARPin::MagicLeapARPinObjectIdList::get_ObjectIdList() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_MagicLeapARPin::MagicLeapARPinObjectIdList::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MagicLeapARPin.MagicLeapARPinObjectIdList");
    return result;
}
