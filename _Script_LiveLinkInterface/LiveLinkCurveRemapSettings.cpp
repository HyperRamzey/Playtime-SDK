#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkCurveRemapSettings.hpp"
#include "LiveLinkSourceSettings.hpp"
void* _Script_LiveLinkInterface::LiveLinkCurveRemapSettings::get_CurveConversionSettings() {
    return (void*)((uintptr_t)this + 0xa0);
}
_Script_CoreUObject::Class* _Script_LiveLinkInterface::LiveLinkCurveRemapSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LiveLinkInterface.LiveLinkCurveRemapSettings");
    return result;
}
