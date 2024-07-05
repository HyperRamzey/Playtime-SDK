#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkCurveElement.hpp"
void* _Script_LiveLinkInterface::LiveLinkCurveElement::get_CurveName() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_LiveLinkInterface::LiveLinkCurveElement::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkInterface.LiveLinkCurveElement");
    return result;
}
float& _Script_LiveLinkInterface::LiveLinkCurveElement::get_CurveValue() {
    return *(float*)((uintptr_t)this + 0x8);
}
