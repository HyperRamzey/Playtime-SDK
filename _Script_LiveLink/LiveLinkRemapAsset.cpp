#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkRemapAsset.hpp"
#include "LiveLinkRetargetAsset.hpp"
void _Script_LiveLink::LiveLinkRemapAsset::RemapCurveElements(void*& CurveItems) {
    return;
}
_Script_CoreUObject::Class* _Script_LiveLink::LiveLinkRemapAsset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LiveLink.LiveLinkRemapAsset");
    return result;
}
void* _Script_LiveLink::LiveLinkRemapAsset::GetRemappedCurveName(void* CurveName) {
    return;
}
void* _Script_LiveLink::LiveLinkRemapAsset::GetRemappedBoneName(void* BoneName) {
    return;
}
