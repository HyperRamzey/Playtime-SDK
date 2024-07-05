#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MagicLeapSharedWorldSharedData.hpp"
void* _Script_MagicLeapSharedWorld::MagicLeapSharedWorldSharedData::get_PinIDs() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_MagicLeapSharedWorld::MagicLeapSharedWorldSharedData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MagicLeapSharedWorld.MagicLeapSharedWorldSharedData");
    return result;
}
