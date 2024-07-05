#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MagicLeapSharedWorldLocalData.hpp"
void* _Script_MagicLeapSharedWorld::MagicLeapSharedWorldLocalData::get_LocalPins() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_MagicLeapSharedWorld::MagicLeapSharedWorldLocalData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MagicLeapSharedWorld.MagicLeapSharedWorldLocalData");
    return result;
}
