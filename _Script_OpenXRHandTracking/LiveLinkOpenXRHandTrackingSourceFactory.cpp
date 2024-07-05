#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_LiveLinkInterface\LiveLinkSourceFactory.hpp"
#include "LiveLinkOpenXRHandTrackingSourceFactory.hpp"
_Script_CoreUObject::Class* _Script_OpenXRHandTracking::LiveLinkOpenXRHandTrackingSourceFactory::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OpenXRHandTracking.LiveLinkOpenXRHandTrackingSourceFactory");
    return result;
}
