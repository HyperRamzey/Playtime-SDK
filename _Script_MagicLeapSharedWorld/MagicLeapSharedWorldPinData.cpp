#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MagicLeapSharedWorldPinData.hpp"
_Script_CoreUObject::Class* _Script_MagicLeapSharedWorld::MagicLeapSharedWorldPinData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPinData");
    return result;
}
void* _Script_MagicLeapSharedWorld::MagicLeapSharedWorldPinData::get_PinId() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MagicLeapSharedWorld::MagicLeapSharedWorldPinData::get_PinState() {
    return (void*)((uintptr_t)this + 0x10);
}
