#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkCurveConversionSettings.hpp"
void* _Script_LiveLinkInterface::LiveLinkCurveConversionSettings::get_CurveConversionAssetMap() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_LiveLinkInterface::LiveLinkCurveConversionSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkInterface.LiveLinkCurveConversionSettings");
    return result;
}
