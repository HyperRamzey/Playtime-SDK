#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkBaseStaticData.hpp"
void* _Script_LiveLinkInterface::LiveLinkBaseStaticData::get_PropertyNames() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_LiveLinkInterface::LiveLinkBaseStaticData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkInterface.LiveLinkBaseStaticData");
    return result;
}
